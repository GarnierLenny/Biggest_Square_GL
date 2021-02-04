/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** convert_matrix_nb
*/

#include "my.h"

char **get_smallest_edge(char **buffer, int line, int i)
{
    if ((buffer[line][i - 1] <= buffer[line - 1][i - 1]) &&
        (buffer[line][i - 1] <= buffer[line - 1][i]))
        buffer[line][i] = (buffer[line][i - 1]) + 1;
    if ((buffer[line - 1][i - 1] <= buffer[line - 1][i]) &&
        (buffer[line - 1][i - 1] <= buffer[line][i - 1]))
        buffer[line][i] = (buffer[line - 1][i - 1]) + 1;
    if ((buffer[line - 1][i] <= buffer[line - 1][i - 1]) &&
        (buffer[line - 1][i] <= buffer[line][i - 1]))
        buffer[line][i] = (buffer[line - 1][i]) + 1;
    return buffer;
}

char **replace_dot_nb(char **buffer)
{
    for (int line = 2; buffer[line] != NULL; line++) {
        for (int i = 0; buffer[line][i] != '\n'; i++) {
            if (buffer[line][i] == '.') {
                buffer = get_smallest_edge(buffer, line, i);
            }
        }
    }
    return buffer;
}

void disp_ss(char **buffer)
{
    for (int i = 1; buffer[i] != NULL; i++)
        my_putstr(buffer[i]);
}

char **replace_os(char **buffer)
{
    for (int line = 0; buffer[line] != NULL; line++) {
        for (int i = 0; buffer[line][i] != '\n'; i++)
            if (buffer[line][i] == 'o')
                buffer[line][i] = '0';
    }
    return buffer;
}

char **convert_matrix_nb(char **buffer)
{
    buffer = put_col_line_nb(buffer);
    buffer = replace_os(buffer);
    buffer = replace_dot_nb(buffer);
    return buffer;
}