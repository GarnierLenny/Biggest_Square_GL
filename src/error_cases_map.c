/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** error_cases_map
*/

#include "my.h"

int error_line_nb(char **buffer)
{
    int lines = 0;
    int i = 0;

    lines = gnb(buffer[0]);
    if (lines >= 1000)
        return 84;
    for (; buffer[i] != NULL; i++);
    if (i != (lines + 1))
        return 84;
    return 0;
}

int error_line_len(char **buffer)
{
    int i = 0;
    int len = 0;
    int line = 2;

    for (; buffer[1][len] != '\0'; len++);
    for (; buffer[line] != NULL; line++) {
        for (i = 0; buffer[line][i] != '\0'; i++);
        if (i != len)
            return 84;
    }
    return 0;
}

int error_char_map(char **buffer)
{
    int line = 1;
    int i = 0;

    for (; buffer[line] != NULL; line++) {
        for (i = 0; buffer[line][i] != '\n'; i++)
            if (is_dot_o(buffer[line][i]) == 0)
                return 84;
    }
    return 0;
}

int is_dot_o(char c)
{
    if (c == '.' || c == 'o')
        return 1;
    return 0;
}

int error_zero_line(char *buffer)
{
    int bl = 0;
    int i = 0;

    for (; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            bl++;
    if (bl <= 1)
        return 84;
    return 0;
}