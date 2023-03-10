#!/bin/bash

# compile all .c files in current directory
gcc -c *.c

# archive all .o files and create archive file called liball.a
ar -rc liball.a *.o

# index archive
ranlib liball.a
