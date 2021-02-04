/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-lenny.garnier
** File description:
** retrieve_map
*/

#include "my.h"

char **retrieve_map(char *filepath)
{
    struct stat sb;
    char *buffer = NULL;
    char **tmp = NULL;
    int fd = open(filepath, O_RDONLY);

    stat(filepath, &sb);
    buffer = malloc(sizeof(char) * sb.st_size);
    read(fd, buffer, sb.st_size);
    if (gnb(buffer) >= 1000)
        return 0;
    if (error_zero_line(buffer) == 84)
        return 0;
    tmp = str_to_word_array_sep(buffer, '\n');
    return tmp;
}