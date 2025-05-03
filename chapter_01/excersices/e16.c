# include <stdio.h>

/*Program to show the comparision of c and EOF.*/

int main(){
  int c;

  while((c =getchar()) != EOF){
    printf("%d", c != EOF);
    putchar(c);
  }
  printf("%d\t%d", c, EOF);
}
