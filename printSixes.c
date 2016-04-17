#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

int main(){

    char buf[512];
    int lower, upper, number, i;

    printf("This program will print multiples of any number between an upper and lower bound.\nWhat is your lower bound?\n");
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf)-1] = '\0';
        lower = atoll(buf);

    printf("What is your upper bound?\n");
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf)-1] = '\0';
        upper = atoll(buf);

    printf("What number would you like to print multiples of?\n");
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf)-1] = '\0';
        number = atoll(buf);
 
    assert(lower <= upper);
    assert(number <= upper);  

    printf("Multiples of %d between %d and %d: ", number, lower, upper);
    
    if (lower % number !=0){
        while (lower % number != 0){
            ++lower;
        }
    }
    for(i=lower;i <= (upper - number); i += number){
        if(i != 0){
             printf("%d, ", i);
        }
    }
printf("%d\n", i);  
    

return 0;
}

