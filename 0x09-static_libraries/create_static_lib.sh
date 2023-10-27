#!/bin/bash
gcc -wall -Werror -Wextra -pedantic -c *.c
ar rc liball.a *.o
