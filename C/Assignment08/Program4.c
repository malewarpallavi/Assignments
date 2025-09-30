//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                  //
// File name :   Program4.c                                                                                                         //
// Description : Program which accept temperature in Fahrenheit & convert it into Celsius.(1 Celsius = (Fahrenheit -32) * (5/9))    //
// Author :      Pallavi Omprakash Malewar                                                                                          //
// Date :        16/06/2025                                                                                                         //
//                                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter the temperature in Fahrenheit.
        - Read and store the value in 'fTemp'.

    Initialization
        - Declare variable 'dCelsius' and initialize it to 0.0.

    Processing
        - Apply the formula:
            dCelsius = (fTemp - 32) * (5.0 / 9.0).

    Output
        - Display the temperature in Celsius.

    END
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// Function name :   FhtoCs                                                                         //
// Description   :   Converts temperature from Fahrenheit to Celsius                                //
// Input         :   float fTemp  -> Temperature in Fahrenheit                                      //
// Output        :   double       -> Temperature in Celsius                                         //
// Logic         :   Apply formula Celsius = (Fahrenheit - 32) * 5/9                                //
// Author        :   Pallavi Omprakash Malewar                                                      //
// Date          :   16/06/2025                                                                     //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = ((fTemp - 32) * ((float)5/9));

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");

    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%f Fahrenheit is %.4lf Celsius.\n" , fValue , dRet);

    return 0;
}