/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** test_retrieve_map
*/

#include "my.h"
#include <criterion/criterion.h>

Test(retrieve_map, get_map_from_fd)
{
    cr_assert_str_eq(retrieve_map("../map")[0], "9\n");
}