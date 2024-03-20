#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] != 1:
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] != 1:
                    perimeter += 1
    return perimeter

