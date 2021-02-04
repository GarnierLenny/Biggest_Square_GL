/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** put_col_line_ones
*/

#include "my.h"

char **put_first_col_nb(char **buffer)
{
    for (int line = 1; buffer[line] != NULL; line++) {
        buffer[line][0] = (buffer[line][0] == 'o' ? '0' : '1');
    }
    return buffer;
}

char **put_first_line_nb(char **buffer)
{
    for (int i = 0; buffer[1][i] != '\n'; i++) {
        buffer[1][i] = (buffer[1][i] == 'o' ? '0' : '1');
    }
    return buffer;
}

char **put_col_line_nb(char **buffer)
{
    buffer = put_first_col_nb(buffer);
    buffer = put_first_line_nb(buffer);
    return buffer;
}