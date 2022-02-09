#!/usr/bin/python3
"""
5-island_perimeter.py
"""


def island_perimeter(grid)
    """Function that returns the perimeter"""
    count = 0
    for i in range(0, len(grid)):
        for j in rang(0, len(grid[i])):
            if grid[i][j] == 1:
                count += 4
                if i > 0 and grid[i - 1][j] == 1:
                    count -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    count -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    count -= 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    count -= 1
    return count
