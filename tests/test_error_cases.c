/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_error_cases
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(error_line_len, unmatching_line_len_1)
{
    char *buffer[] = { "2", "...o.\n", "o...\n", 0};

    cr_assert_eq(error_line_len(buffer), 84);
}

Test(error_line_len, unmatching_line_len_2)
{
    char *buffer[] = { "2", "...o.\n", "o....\n", 0};

    cr_assert_eq(error_line_len(buffer), 0);
}

Test(error_line_nb, unmatching_line_nb_1)
{
    char *buffer[] = { "1", "...o.\n", "o....\n", 0};
    cr_assert_eq(error_line_nb(buffer), 84);
}

Test(error_line_nb, unmatching_line_nb_2)
{
    char *buffer[] = { "2", "...o.\n", "o....\n", 0};
    cr_assert_eq(error_line_nb(buffer), 0);
}