// Author: Richard Rosenthal Jr.
// Date 7-8-19
// Summary: This program is a simple exercise in single dimensional arrays
// It is by no means elegant but I'm pushing myself to better understand how to loop through an array. 


#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int rainfallYearOne[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int rainfallYearTwo[12] = {1,5,3,2,5,6,7,8,2,6,7,12};
    int rainfallYearThree[12]= {4,5,6,7,8,2,4,6,7,11,1,12};
    int rainfallYearFour[12] = {5,6,2,4,6,2,1,2,3,5,11};
    int rainfallYearFive[12] = {1,3,5,6,6,7,6,3,2,5,4,3};

    int sum;
    int rainfallOneAvg;
    int rainfallTwoAvg;
    int rainfallThreeAvg;
    int rainfallFourAvg;
    int rainfallFiveAvg;

    int fiveYearAvg;



    for (int i = 1; i < 11; i++){
         sum += rainfallYearOne[i];

    }
    rainfallOneAvg = (sum/12);
    sum = 0;

    for (int i = 0; i < 11; i++){
         sum += rainfallYearTwo[i];

    }
    rainfallTwoAvg = (sum/12);
    sum = 0;
    

    for (int i = 0; i < 11; i++){
        sum += rainfallYearThree[i];

    }
    rainfallThreeAvg = (sum/12);
    sum = 0;

    for (int i = 0; i < 11; i++){
        sum += rainfallYearFour[i];

    }
    rainfallFourAvg = (sum/12);
    sum = 0;

    for (int i = 0; i < 11; i++){
        sum += rainfallYearFive[i];

    }
    rainfallFiveAvg = (sum/12);
    sum = 0;

    fiveYearAvg = (rainfallOneAvg + rainfallTwoAvg + rainfallThreeAvg + rainfallFourAvg + rainfallFiveAvg)/5;

    printf("\n2010 average rainfall was %d\n", rainfallOneAvg);
    printf("2011 average rainfall was %d\n", rainfallTwoAvg);
    printf("2012 average rainfall was %d\n", rainfallThreeAvg);
    printf("2013 average rainfall was %d\n", rainfallFourAvg);
    printf("2014 average rainfall was %d\n", rainfallFiveAvg);
    printf("5 year average rainfall was %d\n", fiveYearAvg);


}