# include <stdio.h>
# define LINELIMIT 10

int custatoi(char s[]);
int lineget(char s[], int maxline);

int main ()
{
  int lenline, cline;
  char line[LINELIMIT];

  lenline = lineget(line, LINELIMIT);
  cline = custatoi(line);
  printf("char: %s\nint: %d\n", line, cline);
}

int custatoi(char s[]) {
  int i, n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9' ; i++) {
    n = 10 * n + (s[i] - '0');
  }
  return n;
}

int lineget(char s[], int maxline) {
  int i, c;

  for( i = 0; (c = getchar()) != EOF && c != '\n' ; ++i)
    s[i] = c;

  if(c == '\n') {
    s[i] = c;
    ++i;
  }
  //s[i] = '\0';
  return i;
}
