#!/bin/sh


gcc -Wall -Werror -Wextra -c *.c

ar rcs lib.a *.o
