# include <stdio.h>

int main()
{
  int nci;
  long ncl;
  double ncd;

  ncl = 0;
  ncd = 0;

  for(nci = 0; (getchar()) != EOF; ++nci){
    ++ncl;
    ++ncd;
  }
  printf("%d\t%ld\t%.0f\n", nci, ncl, ncd);
}
