//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                  //
// File name :   Program3.c                                                                                         //
// Description : Program which accept distance in kilometer and convet it into meetr.(1 kilometer = 1000 meter)     //
// Author :      Pallavi Omprakash Malewar                                                                          //
// Date :        16/06/2025                                                                                         //
//                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// Function name :   KMtoMeter                                                                      //
// Description   :   Converts distance from kilometers to meters                                    //
// Input         :   int iNo  -> Distance in kilometers                                             //
// Output        :   int      -> Distance in meters                                                 //
// Logic         :   Multiply kilometers by 1000 to get meters                                      //
// Author        :   Pallavi Omprakash Malewar                                                      //
// Date          :   16/06/2025                                                                     //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = 1000 * iNo;

    return iMeter;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Distance : ");

    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d in meters are %d meter.\n",iValue,iRet);

    return 0;
}