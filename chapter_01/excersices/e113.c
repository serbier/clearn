# include <stdio.h>

/* Horizontal hist of word len */

# define IN 1 
# define OUT 0 
# define MAX_WORD 100 

int main()
{
  int c, wl, state;
  int wordlen[MAX_WORD];

  wl = 0;
  state = OUT;
  for (i = 0;i < MAX_WORD; ++i) {
    wordlen[i] = 0;
  }

  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      // c out of a word
      state = OUT;
    } else if (state == OUT) {
      // c at beginin of a word
      state = IN;
      if (wl > 0)
        ++wordlen[wl];
      wl = 0;
      ++wl;
    } else {
      // c inside word
      ++wl;
    }
  }
  // if stream ends with word
  if (wl > 0)
    ++wordlen[wl];
}
