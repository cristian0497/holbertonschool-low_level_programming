#!/usr/bin/python3
"""
Island Permiterer Module
"""


def island_perimeter(grid):
    """
    Method to find the perimeter of an instance
    """
    val = 0
    for x in range(0, len(grid)):
        for y in range(0, len(grid[x])):
            if (grid[x][y] == 1):
                p = 4
                if (grid[x][y - 1] == 1):
                    p -= 1
                if (grid[x][y + 1] == 1):
                    p -= 1
                if (grid[x - 1][y] == 1):
                    p -= 1
                if (grid[x + 1][y] == 1):
                    p -= 1
                val += p
    return val
