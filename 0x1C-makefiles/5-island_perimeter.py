#!/usr/bin/python3
'''Perimeter of an Islana'''


def island_perimeter(grid):
    '''function to compute perimeter of an island'''
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for mos in range(height):
        for pau in range(width):
            if grid[mos][pau] == 1:
                size += 1
                if (pau > 0 and grid[mos][pau - 1] == 1):
                    edges += 1
                    if (mos > 0 and grid[mos - 1][pau] == 1):
                        edges += 1
    return size * 4 - edges * 2
