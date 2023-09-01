#!/bin/bash
gcc -Wall -Pendantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
