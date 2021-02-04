/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday07-lenny.garnier
** File description:
** my
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#define scp my_strcpy
#define gnb my_getnbr
#define its int_to_str
#define bf buffer

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char *s1, char *s2);
int my_sytncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char *const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_put_float(float x);
int is_alpha_char(char c);
int count_occ(char *str, char a);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
int find_line_nb(char **tab);
char **cpy_ss(char **tab);
int is_av_ascend(char **av);
int check_zero(char *str);
void disp_ss(char **buffer);
char **get_smallest_edge(char **buffer, int line, int i);
int figure_biggest_line(char **buffer);
int figure_biggest_col(char **buffer);
char **replace_biggest_x(char **buffer);
char **keep_right(char *filepath, char **buffer);
int error_cases(int ac, char **av, char **buffer);
char **retrieve_map(char *filepath);
char **convert_matrix_nb(char **buffer);
char **str_to_word_array_sep(char *str, char separator);
char **put_col_line_nb(char **buffer);
int error_zero_line(char *buffer);
int is_dot_o(char c);
int error_char_map(char **buffer);
int error_line_len(char **buffer);
int error_line_nb(char **buffer);
int error_arg_nb(int ac);
int is_map_filled(char **buffer);

#endif /* !MY_H_ */
