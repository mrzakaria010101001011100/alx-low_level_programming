#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists representing the grid where 1 represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.

    Example:
        >>> grid = [[0, 1, 0, 0],
                    [1, 1, 1, 0],
                    [0, 1, 0, 0],
                    [1, 1, 0, 0]]
        >>> island_perimeter(grid)
        16
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Add 4 sides for each land cell
                # Check neighbors to subtract shared sides
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2  # Subtract 2 sides for adjacent land cells
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2  # Subtract 2 sides for adjacent land cells

    return perimeter

