SRC = $(wildcard my_*.c)
OBJ = $(SRC:.c=.o)

my_libc.a : $(OBJ)
	ar r my_libc.a $(OBJ)

%.o : %.c
	cc -Wall -Wextra -Werror -c $< -o $@

main : main.c my_libc.a
	cc -Wall -Wextra -Werror main.c my_libc.a -o main

format :
	clang-format -i *.c *.h

format-check :
	clang-format --dry-run --Werror *.c *.h