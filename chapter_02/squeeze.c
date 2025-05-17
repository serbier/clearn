# include <stdio.h>

# define MAXLINE 100

int get_line(char s[]);
void print_line(char s[]);
void copy(char to[], char from[]);
void squeeze(char s[], char o[], int c);

int main ()
{
  char org[MAXLINE];
  char sqz[MAXLINE];
  int lorg;

  lorg = get_line(org);
  print_line(org);
  squeeze(org, sqz, ' ');
  print_line(sqz);
}

int get_line (char s[]) {
  int c, i;
  for (i = 0; (c = getchar()) != EOF && c != '\0' ; ++i)
    s[i] = c;
  s[i]='\0';
  return i;
}

void print_line (char s[]) {
  int i;
  i=0;
  while (s[i]!='\0') {
    putchar(s[i]);
    ++i;
  }
  putchar('\n');
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while(from[i] != '\0') {
    to[i] = from[i];
    ++i;
  }
  to[i]='\0';
}

void squeeze (char s[], char o[], int c) {
  int i, j;
  i = j = 0;
  while(s[i] != '\0') {
    if (s[i] != c) {
      o[j] = s[i];
      j++;
    }
    ++i;
  }
  o[i]='\0';
}
