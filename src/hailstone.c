#include <stdio.h>
#include <stdlib.h>
#include "hailstone.h"


unsigned long
hailstone(unsigned long n)
{
    while (~-n) {
        printf("%lu, ", n);
        n = 3*n+1;
        n = n >> __builtin_ctzl(n);
    }
    printf("%lu\n", n);
    return n;
}

int
main(int argc, char *argv[])
{
    int i;
    unsigned long n;

    if (argc > 2) {
      for(i=1; i<argc; i++) {
        n = (unsigned long)atol(argv[i]);
        printf("%lu\n", n);
        hailstone(n);
      }
    } else if (argc == 2) {
      unsigned long k, l;
      l = (unsigned long)atol(argv[1]);
      for(k=1; k<l; k++) {
        hailstone(k);
      }
    } else {
      printf("usage: hailstone n [m ...]\n");
      printf("If only n is given, runs all integers in [1..n]\n");
      printf("If n, m, ... are given, runs each [n, m, ...]\n");
    }
    return 0;
}
