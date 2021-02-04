/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_figure_biggest_pos
*/

#include "my.h"
#include <criterion/criterion.h>

Test(figure_biggest_line, find_biggest_square_line)
{
    char **buffer = str_to_word_array_sep("5\n1010\n1423\n", '\n');
    cr_assert_eq(figure_biggest_line(buffer), 2);
}

Test(figure_biggest_col, find_biggest_square_col)
{
    char **buffer = str_to_word_array_sep("5\n1010\n1423\n", '\n');
    cr_assert_eq(figure_biggest_col(buffer), 1);
}