# include <stdio.h>

# define LOWER 0
# define UPPER 300
# define STEP 20

/* Function to convert fahrenheit to celcius */
int fahrenheit2celcius(int fahr);

int main ()
{
  int itemp, ttemp;

  itemp = LOWER;

  for (itemp = LOWER; itemp <= UPPER; itemp = itemp + STEP){
    ttemp = fahrenheit2celcius(itemp);
    printf("%d\t%d\n", itemp, ttemp);
  }
  return 0;
}

int fahrenheit2celcius(int fahr) {
  int celcius;
  celcius = 5 * (fahr - 32)/9;
  return celcius;
}
