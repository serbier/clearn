# include <stdio.h>
# define LINELIMIT 100

int lineget(char s[], int maxline);
void copy(char to[], char from[]);

int main ()
{
  int c, ilen, maxlen;
  char line[LINELIMIT];
  char maxline[LINELIMIT];
  maxlen = 0; 

  while ((ilen = lineget(line, LINELIMIT)) > 0) {
    if (ilen >= LINELIMIT) {
      char 
    }
    if(ilen > maxlen) {
      maxlen = ilen;
      copy(maxline, line);
    }
  }
  if (maxlen > 0)
    printf("%s", maxline);
}

int lineget(char s[], int maxline) {
  int i, c;

  for( i = 0;i < maxline - 1 && (c = getchar()) != EOF && c != '\n' ; ++i)
    s[i] = c;

  if(c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while(from[i] != '\0') {
    to[i] = from[i];
    ++i;
  }
}

