#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ Function to find the island perimeter """
    len_x = len(grid[0])
    len_y = len(grid)
    perimeter = 0
    for y in range(len_y):
        for x in range(len_x):
            if grid[y][x] == 1:
                if y == len_y - 1 or grid[y + 1][x] == 0:
                    perimeter += 1
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if x == len_x - 1 or grid[y][x + 1] == 0:
                    perimeter += 1
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
    return perimeter
