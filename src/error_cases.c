/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** error_cases
*/

#include "my.h"

int error_arg_nb(int ac)
{
    if (ac != 2) {
        write(2, "Invalid arguments number\n", 25);
        return 84;
    }
    return 0;
}

int error_cases(int ac, char **av, char **buffer)
{
    av = av;
    if (error_arg_nb(ac) == 84 || error_line_nb(buffer) == 84 ||
        error_line_len(buffer) == 84 || error_char_map(buffer) == 84)
        return 84;
    return 0;
}