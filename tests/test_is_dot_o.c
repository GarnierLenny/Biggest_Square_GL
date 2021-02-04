/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_is_dot_o
*/

#include "my.h"
#include <criterion/criterion.h>

Test(is_dot_o, check_if_char_is_o_or_dot_1)
{
    cr_assert_eq(is_dot_o('.'), 1);
}

Test(is_dot_o, check_if_char_is_o_or_dot_2)
{
    cr_assert_eq(is_dot_o('a'), 0);
}