#include <math.h>

main(t){
  for( ; ;t++){
    putchar(t*((42&t>>10)));
  }
}

//to run:  ./a.out | /Applications/sox/play -c 2 -b 8 -e unsigned -t raw -r 8k -


