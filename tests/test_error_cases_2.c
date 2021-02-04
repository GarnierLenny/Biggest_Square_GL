
/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_error_cases_2
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(error_char_map, check_wrong_chars_1)
{
    char *buffer[] = { "2", "...o.\n", "o....\n", 0};
    cr_assert_eq(error_char_map(buffer), 0);
}

Test(error_char_map, check_wrong_chars_2)
{
    char *buffer[] = { "2", "...o.\n", "o.a..\n", 0};
    cr_assert_eq(error_char_map(buffer), 84);
}

Test(error_zero_line, check_if_zero_line)
{
    char buffer[] = "0\n";
    cr_assert_eq(error_zero_line(buffer), 84);
}