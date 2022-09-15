#include <stdio.h>
#include <stdlib.h>

struct _retire_info{
    int months;
    double contribution;
    double rate_of_return;
} ;
typedef struct _retire_info retire_info;

void retirement (int startAge,  double initial, retire_info working, retire_info retired){
    for (int i = working.months; i>0 ;i--){
         printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge - startAge/12 * 12,initial);
        initial += initial * (working.rate_of_return/12) + working.contribution;
        startAge++;
       
    }
    for (int i = retired.months; i>0 ;i--){
        printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge - startAge/12 * 12 ,initial);
        initial += initial * (retired.rate_of_return/12) + retired.contribution;
        startAge++;
        
    }
}

int main(void){

    // Working:
    //  --------
    //   monthss: 489
    //   Per months Savings: $1000
    //   Rate of Return:  4.5% per year ( 0.045/12 per months) 
    //                    [above inflation]
    // Retired:
    // --------
    //   monthss: 384
    //   Per months Spending: -4000
    //   Rate of Return: 1% per year ( 0.01/12 per months) 
    //                   [above inflation]
    // Starting conditions:
    // -------------------
    //    Age: 327 monthss (27 years, 3 monthss)
    //    Savings: $21,345
    retire_info working,retired;
    working.months = 489;
    working.contribution = 1000;
    working.rate_of_return = 0.045;
    retired.months = 384;
    retired.contribution = -4000;
    retired.rate_of_return = 0.01;
    retirement(327,21345,working,retired);
    return 0;
}