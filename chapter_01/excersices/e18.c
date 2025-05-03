# include <stdio.h>
/* Count tabs, spaces and breaks */
# define IN 1
# define OUT 0
int main()
{
  int c, state;
  state = OUT;
  while((c = getchar()) != EOF){
    if (c == ' '){
      state = OUT;
    }
    else if (state == OUT){
      state = IN;
      putchar(' ');
      putchar(c);
    }
    else {
      putchar(c);
    }
  }
}



