import numpy as np
import matplotlib.pyplot as plt
from typing import *
import openai


class Drawing:
    def __init__(self):
        self.basis()
        plt.draw()
        plt.pause(0.1)

    def basis(self):
        plt.figure(figsize=(7, 7))
        plt.ion()
        plt.xlim(0, 15)
        plt.ylim(0, 15)
        plt.xticks(np.arange(0, 16, 1))
        plt.yticks(np.arange(0, 16, 1))
        plt.grid(color="black", zorder=0)
        plt.gca().set_facecolor('#DEB887')

    def pawn(self, pdata: Dict):
        self.basis()
        for i in pdata[1]:
            plt.scatter(i[0], i[1], s=100, c='black', zorder=2)
        for i in pdata[2]:
            plt.scatter(i[0], i[1], s=100, c='white', zorder=2)
        plt.draw()
        plt.pause(0.1)

    def linear(self, pdata: Dict, x: int, y: int, ds: int):
        self.basis()
        for i in pdata[1]:
            plt.scatter(i[0], i[1], s=100, c='black', zorder=2)
        for i in pdata[2]:
            plt.scatter(i[0], i[1], s=100, c='white', zorder=2)
        if ds == 1:
            plt.plot([0, 15], [y, y], c='red', zorder=3)
        elif ds == 2:
            plt.plot([x, x], [0, 15], c='red', zorder=3)
        elif ds == 3:
            offset = min(x, y)
            start_x, start_y = x - offset, y - offset
            end_x, end_y = x + (15 - max(x, y)), y + (15 - max(x, y))
            plt.plot([start_x, end_x], [start_y, end_y], c='red', zorder=3)
        elif ds == 4:
            offset = min(x, 15 - y)
            start_x, start_y = x - offset, y + offset
            end_x, end_y = x + min(15 - x, y), y - min(15 - x, y)
            plt.plot([start_x, end_x], [start_y, end_y], c='red', zorder=3)
        plt.draw()
        plt.pause(0.1)

    def close(self):
        plt.ioff()
        plt.show()


class computing:
    def __init__(self):
        self.dw = Drawing()
        self.pdata = {1: [], 2: []}
        self.mode = int(input("请选择模式(1.人机对战 2.人人对战 3.人机对战（deepseek,需要自行准备key）):"))
        self.hb = 1
        self.order = 1
        if self.mode == 1:
            self.human_vs_ai()
        elif self.mode == 2:
            self.human_vs_human()
        elif self.mode == 3:
            openai.api_key = input("请输入你的key:")
            self.human_vs_deepseek()

    def human_vs_ai(self):
        self.hb = int(input("请选择先后手(1.先手 2.后手):"))
        pass

    def human_vs_human(self):
        while True:
            x, y = map(int, input(f"玩家{self.order}请输入落子位置(x y):").split(' '))
            if (x, y) in self.pdata[1] or (x, y) in self.pdata[2] or x < 0 or x > 15 or y < 0 or y > 15:
                print("该位置不可落子，请重新输入")
                continue
            a, b = self.judge(x, y, self.order)
            if a:
                print(f"玩家{self.order}获胜！")
                self.pdata[self.order].append((x, y))
                self.dw.linear(self.pdata, x, y, b)
                self.dw.close()
                break
            self.pdata[self.order].append((x, y))
            self.dw.pawn(self.pdata)

            if self.order == 1:
                self.order = 2
            else:
                self.order = 1

    def human_vs_deepseek(self):
        self.hb = int(input("请选择先后手(1.先手 2.后手):"))
        pass

    def judge(self, x, y, player):
        directions = [(1, 0), (0, 1), (1, 1), (1, -1)]
        for dx, dy in directions:
            count = 1
            for step in [1, -1]:
                nx, ny = x, y
                while True:
                    nx += step * dx
                    ny += step * dy
                    if (nx, ny) in self.pdata[player]:
                        count += 1
                    else:
                        break
            if count >= 5:
                ds = directions.index((dx, dy)) + 1
                return True, ds
        return None, None


if __name__ == "__main__":
    while True:
        c = computing()
        if input("是否重新开始游戏？(y/n):") != 'y':
            break
