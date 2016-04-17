#include <stdio.h>

void my_facts(int, int*, int*);

int main() {
  int evenorodd;
  int divbyten;

  my_facts(121, &evenorodd, &divbyten);
  printf("%d %d\n", evenorodd, divbyten);

return 0;
}

// "returns" two facts, whether it's even (0) or odd (1)
// and whether it's divisible by ten (0) or not (1)
//really changes the value of evenorodd and divbyten

void my_facts(int myint, int *fact1, int  *fact2) {
  
  if (myint % 2) {
    *fact1 = 1;
  } else {
    *fact1 = 0;
  }
  if (myint % 10) {
    *fact2 = 1;
  } else {
    *fact2 = 0;
  }
}


