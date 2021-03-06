CFLAGS = -pipe -O -g -std=c89 -pedantic -Wall -Wextra \
	-Wbad-function-cast -Wcast-align -Wcast-qual -Wconversion -Winline \
	-Wmissing-declarations -Wmissing-prototypes -Wnested-externs \
	-Wold-style-definition -Wpointer-arith -Wredundant-decls -Wshadow \
	-Wstrict-prototypes -Wunreachable-code -Wwrite-strings

obj:
	gcc ${CFLAGS} -Iinclude -o build/hailstone src/hailstone.c
