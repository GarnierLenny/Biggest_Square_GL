/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    char **buffer;

    if ((buffer = retrieve_map(av[1])) == 0)
        return 84;
    if (error_cases(ac, av, buffer) == 84)
        return 84;
    if (is_map_filled(buffer) == 1)
        return 0;
    convert_matrix_nb(buffer);
    buffer = replace_biggest_x(buffer);
    keep_right(av[1], buffer);
    return 0;
}