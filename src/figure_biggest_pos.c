/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** figure_biggest_pos
*/

#include "my.h"

int figure_biggest_col(char **buffer)
{
    int nb = 0;
    int line = 1;
    int col_b = 0;

    for (; buffer[line] != NULL; line++) {
        for (int i = 0; buffer[line][i] != '\0'; i++) {
            if (buffer[line][i] > nb) {
                nb = buffer[line][i];
                col_b = i;
            }
        }
    }
    return col_b;
}

int figure_biggest_line(char **buffer)
{
    int nb = 0;
    int line = 1;
    int line_b = 0;

    for (; buffer[line] != NULL; line++) {
        for (int i = 0; buffer[line][i] != '\n'; i++) {
            if (buffer[line][i] > nb) {
                nb = buffer[line][i];
                line_b = line;
            }
        }
    }
    return line_b;
}