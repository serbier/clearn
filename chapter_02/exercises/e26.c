# include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main ()
{
  unsigned x, y, p, n, out;
  x = 0b10101010;  // 170
  y = 0b11110000;  // 240
  p = 5;
  n = 3;
  out = setbits(x,p,n,y); // 0b10000010 = 130

  printf(" x:%d\ty:%d\tp:%d\tn:%d\tout:%d\n", x, y, p, n, out);
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  unsigned mask =  ~(~0 << n);
  unsigned y_bits = (y & mask) << (p+1-n);
  unsigned x_clean = x & ~(mask << (p+1-n));
  return x_clean | y_bits;
}

