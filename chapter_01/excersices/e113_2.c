# include <stdio.h>

/* Vertical hist of word len */

# define IN 1 
# define OUT 0 
# define MAX_WORD 20 

int main()
{
  int c, wl, state, i, j;
  int maxcount;
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
  
  maxcount = 0; 
  for (i = 0;i < MAX_WORD; ++i) {
    // define maximun count
    if(wordlen[i] > maxcount)
      maxcount = wordlen[i];
  }
  printf("max word size: %d\n", maxcount);
  
  for(i = maxcount; i >= 0; --i) {
    for (j = 0;j < MAX_WORD; ++j) {
      if(wordlen[j] > i) {
        printf("_");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  for (i = 0;i < MAX_WORD; ++i) {
    printf("_");
  }
  printf("\n");
}
