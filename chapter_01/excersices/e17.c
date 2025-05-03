# include <stdio.h>
/* Count tabs, spaces and breaks */
int main()
{
  int c,nl,nt,ns;
  nl = nt = ns = 0;

  while((c = getchar()) != EOF){
    if(c == '\n')
      ++nl;
    if (c == '\t') 
      ++nt;
    if (c == ' ') 
      ++ns;
  }
  printf("lines:%d\n", nl);
  printf("tabs:%d\n", nt);
  printf("spaces:%d\n", ns);
}


