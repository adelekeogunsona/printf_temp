#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);
int digitlen(int n);
int check_specifier(int c);
void print_c(int n);
void print_s(char *str);
void print_int(int n);

#endif
