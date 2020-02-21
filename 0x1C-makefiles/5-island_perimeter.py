#!/usr/bin/python3
def island_perimeter(grid):
    """Function to calculate the perimeter of an island"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            cell = 0
            if grid[i][j] == 1:
                cell = 4
                if grid[i + 1][j] == 1:
                    cell -= 1
                if grid[i - 1][j] == 1:
                    cell -= 1
                if grid[i][j + 1] == 1:
                    cell -= 1
                if grid[i][j - 1] == 1:
                    cell -= 1
                perimeter += cell
    return perimeter
