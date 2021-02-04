/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_error_cases_3
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(error_arg_nb, check_args_nb)
{
    char *buffer[] = { "2", "...o.\n", "o.a..\n", 0};
    cr_assert_eq(error_cases(1, NULL, buffer), 84);
}

Test(error_arg_nb, check_args_nb_1)
{
    char *buffer[] = { "2", "...o.\n", "o....\n", 0};
    cr_assert_eq(error_cases(2, NULL, buffer), 0);
}