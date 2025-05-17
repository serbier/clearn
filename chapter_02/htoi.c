# include <stdio.h>
# include <math.h>

# define LINELIMIT 10

int custhtoi(char s[], int len);
int unihtoi(char s);
int lineget(char s[], int maxline);

int main ()
{
  int lenline, cline, i;
  char line[LINELIMIT];

  lenline = lineget(line, LINELIMIT) - 1;
  cline = custhtoi(line, lenline);
  printf("char: %s\nint: %d\n", line, cline);
}

int custhtoi(char s[], int len) {
  int i, j, n;
  n = 0;
  j = len-1;
  printf("%d\n", j);
  for (i = 0; s[i] != '\0' && s[i] != '\n' ; i++) {
    n = n + (unihtoi(s[i]) * pow(16, j));
    --j;
  }
  return n;
}

int unihtoi (char s) {
  if (s >= '0' && s <= '9') {
    return s - '0';
  } else if (s >= 'a' && s <= 'f') {
    return 10 + (s - 'a');
  } else if (s >= 'A' && s <= 'F') {
    return 10 + (s - 'A');
  } else {
    printf("Not HEX");
    return 0;
  }
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
