#include <stdio.h>

int main(){
    char buf[512];
    int high = 1001;
    int low = 0;
    int guess;
    char response; 

    printf("You pick a number between 1 and 1000...\nand I will guess it.\nPress Enter when you have it in your head, but don't type it!\n");
      fgets(buf, sizeof(buf), stdin);
 //   high = atoi(buf);
 //   low = 0;
    
    
    while (1){
        guess = (high+low)/2;
        printf("My guess is %d...\n", guess);
        printf("Is this too high, too low, or correct?\nh=high\nl=low\nc=correct\n\n");
        fgets(buf, sizeof(buf), stdin);
        response = buf[0];

        if (response == 'h'){
            high = guess;
        }
        else if (response == 'l'){
            low = guess;
        }

        else if (response == 'c'){
            printf("You Lose!\n");
            return 0;
        }

        else{
            printf("Answer my question!\n");
        }
    }

}
