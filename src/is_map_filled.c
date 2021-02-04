/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** is_map_filled
*/

#include "my.h"

int is_map_filled(char **buffer)
{
    for (int line = 0; buffer[line] != NULL; line++) {
        for (int i = 0; buffer[line][i] != '\0'; i++)
            if (buffer[line][i] == '.')
                return 0;
    }
    disp_ss(buffer);
    return 1;
}