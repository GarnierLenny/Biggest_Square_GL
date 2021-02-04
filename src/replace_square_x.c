/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** replace_square_x
*/

#include "my.h"

char **replace_biggest_x(char **buffer)
{
    int pos_x = figure_biggest_col(buffer);
    int pos_y = figure_biggest_line(buffer);
    int times = bf[pos_y][pos_x] - '0';
    int ref = times;

    ref = ref;
    for (int ref_pos = times; ref_pos >= 1; pos_x--, ref_pos--) {
        for (int ref_y = pos_y, ref = times; ref >= 1; ref_y--, ref--) {
            buffer[ref_y][pos_x] = 'x';
        }
    }
    return buffer;
}