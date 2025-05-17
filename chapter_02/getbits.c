# include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main ()
{
  unsigned x, out;
  x = 0177;
  out = getbits(x, 3, 7);

  printf("%d\t%d\n", x, out);
  return 0;
}

unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}
