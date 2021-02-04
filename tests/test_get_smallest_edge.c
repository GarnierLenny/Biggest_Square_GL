/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_get_smallest_edge
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(get_smallest_edge, get_smallest_surounds_1)
{
    char **buffer = str_to_word_array_sep("5\n11101\n10..0\n", '\n');
    cr_assert_str_eq(get_smallest_edge(buffer, 2, 2)[2], "101.0\n");
}

Test(get_smallest_edge, get_smallest_surounds_2)
{
    char **buffer = str_to_word_array_sep("5\n01101\n11..0\n", '\n');
    cr_assert_str_eq(get_smallest_edge(buffer, 2, 2)[2], "112.0\n");
}

Test(get_smallest_edge, get_smallest_surounds_3)
{
    char **buffer = str_to_word_array_sep("5\n10101\n11..0\n", '\n');
    cr_assert_str_eq(get_smallest_edge(buffer, 2, 2)[2], "111.0\n");
}