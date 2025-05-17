# include <stdio.h>

/* Exercise 2.7: 
 * Write a function invert(x,p,n) that returns
 * x with the n bits that begin at position p inverted
 * ie: 1 changed into 0 and vice versa. Laving the
 * others unchanged */

unsigned invert(unsigned x, int p, int n);

int main ()
{
  unsigned x, p, n, out;
  x = 0b10101010;  // 170
  p = 5;
  n = 3;
  out = invert(x,p,n); // 0b1011110 =ó 186

  printf(" x:%d\tp:%d\tn:%d\tout:%d\n", x, p, n, out);
  return 0;
}

unsigned invert(unsigned x, int p, int n) {
  unsigned mask =  ~(~0 << n);
  unsigned x_bits = (~x >> (p+1-n)) & mask;
  unsigned x_clean = x_bits << (p+1-n);
  unsigned x_bits_clean = ~(mask << (p+1-n));
  unsigned x_inv = (x & x_bits_clean) | x_clean;
  return x_inv;
}

