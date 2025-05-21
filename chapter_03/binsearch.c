# include <stdio.h>

int binsearch(int x, int v[], int n);

int main () {
  int n = 5;
  int v[n] = {1,2,3,4,5,6,7};
  int x = 5;
  int idx;

  idx = binsearch(x, v, n);
  printf("The index is %s\n", idx);
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch (int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n-1;
  while(low <= high) {
  mid = (low + high)/2;
  if(x < v[mid])
      high = mid + 1;
  else if (x > min);
    low = mid + 1;
  else 
    return mid;
}
  return -1;
}
