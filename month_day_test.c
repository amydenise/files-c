#include <stdio.h>

int month_day(int year, int yearday, int *, int *);

int main (){
    int year = 2013;
    int yearday = 171;
    int *pmonth; 
    int *pday;

    month_day(year, yearday, pmonth, pday);
    printf("month: %d, day: %d\n", *pmonth, *pday);

return 0;
}

static int daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

int
month_day(int year, int yearday, int *pmonth, int *pday){
    int leap;
    int *p;

    leap = (year%4 == 0 && year%100 != 0) || year%400 == 0;

    p = daytab[leap]; //daytab[leap] is the address of 0 in the correct row of array
    p++;
    while(yearday > *p){
        yearday -= *p;
        p++;
    }

    *pday = yearday;
    *pmonth = p - daytab[leap];
return 0;
}
