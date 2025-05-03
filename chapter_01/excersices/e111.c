# include <stdio.h>

/* which inputs are more likely to uncover bugs if any!
 * r/ dont know maybe binary?*/

# define IN 1
# define OUT 0

int main()
{
  int c, state, wc;
  state = OUT;
  wc = 0;
  while((c=getchar())!=EOF){
    if(c == ' ' || c =='\t' || c =='\n'){
      state = OUT;
    } else if (state == OUT){
      state = IN;
      ++wc;
    }
  }
  printf("words: %d\n", wc);
}
