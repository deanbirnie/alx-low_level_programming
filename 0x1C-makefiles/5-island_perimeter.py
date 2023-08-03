#!/usr/bin/python3

"""Module contains a function that returns the perimter of the island `grid`"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid.

    Args:
        grid (list of lists of integers): A rectangular grid with 0
        representing water and 1 representing land.

    Returns:
        int: The perimeter of the island

    Raises:
        ValueError: If the grid is not rectangular or exceeds the width and
        height constraints.

    Example:
        grid = [
            [0, 1, 0, 0],
            [1, 1, 1, 0],
            [0, 1, 0, 0],
            [1, 1, 0, 0],
        ]
        island_perimter(grid)    # Output: 16
    """
    if not grid or grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimter
