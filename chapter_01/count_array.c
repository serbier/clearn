# include <stdio.h>

/* count using arrays */

int main()
{
  int c, i, nspaces, nother;
  int ndigits[10];

  nspaces = nother = 0;
  for (i = 0; i < 10; ++i) {
    ndigits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if(c >= '0' && c <='9'){
      ++ndigits[c-'0'];
    } else if(c == ' ' || c =='\t' || c =='\n'){
      ++nspaces;
    } else {
      ++nother;
    }
  }
  printf("Digits: ");
  for (i = 0; i < 10; ++i) {
    printf("%d ", ndigits[i]);
  }
  printf("\nSpaces: %d\nOther: %d\n", nspaces, nother);
}
