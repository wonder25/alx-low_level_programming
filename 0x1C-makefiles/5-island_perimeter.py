#!/usr/bin/python3

"""solving a quiz"""


def island_perimeter(grid):
    """returns the perimeter of the island in grid"""

    perimeter = 0

    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0

    for j in range(rows):
        for k in range(columns):
            if grid[j][k] == 1:
                if grid[j - 1][k] == 0:
                    perimeter += 1
                if grid[j + 1][k] == 0:
                    perimeter += 1
                if grid[j][k - 1] == 0:
                    perimeter += 1
                if grid[j][k + 1] == 0:
                    perimeter += 1
    return perimeter
