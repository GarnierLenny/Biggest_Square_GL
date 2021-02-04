/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_col_line_ones
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(put_col_line_nb, put_one_first_line_col)
{
    char **buffer = str_to_word_array_sep("5\n---o-\n-o--o-\n", '\n');

    cr_assert_str_eq(put_col_line_nb(buffer)[1], "11101\n");
}

Test(disp_ss, disp_tw_dim_array, .init = cr_redirect_stdout)
{
    char *buffer[] = { "Hello", "World", 0};
    fflush(stdout);
    disp_ss(buffer);
    cr_assert_stdout_eq_str("World\n");
}

Test(convert_matrix_nb, convert_matrix_to_nb)
{
    char **buffer = str_to_word_array_sep("5\n---o-\n-o--o\n", '\n');
    cr_assert_str_eq(convert_matrix_nb(buffer)[1], "11101\n");
}