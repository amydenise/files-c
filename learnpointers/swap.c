#include <stdio.h>

void swap (int *, int *);

int main(){
    int x = 17;
    int y = 38;

//    int *px = &x;
//    int *py = &y;

    printf("original: x = %d, y = %d\n", x, y);

    swap(&x, &y);
    
    printf("swapped: x = %d, y = %d\n", x, y);

return 0;
}


//swap: accepts two variables of same data type and swaps values
void swap(int *px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;

}
