# include <stdio.h>

/* Exercise 2.7: 
 * Write a function invert(x,p,n) that returns
 * x with the n bits that begin at position p inverted
 * ie: 1 changed into 0 and vice versa. Laving the
 * others unchanged */

unsigned inver(unsigned x, int p, int n);

int main ()
{
  unsigned x, p, n, out;
  x = 0b10101010;  // 170
  p = 5;
  n = 3;
  out = invert(x,p,n); // 0b10111010 = 186

  printf(" x:%d\ty:%d\tp:%d\tn:%d\tout:%d\n", x, y, p, n, out);
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  unsigned mask =  ~(~0 << n);
  unsigned y_bits = (y & mask) << (p+1-n);
  unsigned x_clean = x & ~(mask << (p+1-n));
  return x_clean | y_bits;
}

