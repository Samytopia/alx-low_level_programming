#!bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
ar -t liball.a
