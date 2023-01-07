#!bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -c *.c
ar -rc -L. liball.a *.o
