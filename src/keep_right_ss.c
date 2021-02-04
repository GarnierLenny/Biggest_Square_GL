/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** keep_right_ss
*/

#include "my.h"

char **keep_right(char *filepath, char **buffer)
{
    char **tmp = retrieve_map(filepath);
    int line = 1;

    for (; buffer[line] != NULL; line++) {
        for (int i = 0; buffer[line][i] != '\0'; i++) {
            if (buffer[line][i] == 'x')
                my_putchar(buffer[line][i]);
            else
                my_putchar(tmp[line][i]);
        }
    }
    return buffer;
}