#ifndef _HEAD_H_
#define _HEAD_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct 
{
    char *c;
    void (*func)(va_list args);
}print_f;

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
