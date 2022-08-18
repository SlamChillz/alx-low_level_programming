#!/usr/bin/python3
"""
A module: defines a function that calculates
the perimeter of an island on a given grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of any notable island in the given grid
    """
    length = len(grid)
    breath = len(grid[0])
    rightBottom = 0
    cellSize = 0
    for x in range(length):
        for y in range(breath):
            if grid[x][y] == 1:
                cellSize += 1
                if (y < breath - 1 and grid[x][y + 1] == 1):
                    rightBottom += 1
                if (x < length - 1 and grid[x + 1][y] == 1):
                    rightBottom += 1
    return (cellSize * 4 - rightBottom * 2)
