#!/bin/bash
gcc -Wall -Wextra -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
