# include <stdio.h>

# define IN 1
# define OUT 0

int main()
{
  int c, state, wl;
  state = OUT;
  wl = 0;
  while((c=getchar())!=EOF){
    if(c == ' ' || c =='\t' || c =='\n'){
      state = OUT;
      printf("%d\n", wl);
      wl = 0;
    } else if (state == OUT){
      state = IN;
      ++wl;
    } else {
      ++wl;
    }
  }
}
