////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :   Program1.c
// Description : Program to which accept radius of a circle from user & calculate its area.
// Author :      Pallavi Omprakash Malewar
// Date :        16/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter the radius of the circle.
        - Read and store the value in 'R'.

    Initialization
        - Set constant value of PI = 3.14.
        - Set AREA = 0.

    Processing
        - Calculate AREA = PI * R * R.

    Output
        - Display AREA as the area of the circle.

    END
*/


#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double dArea = 0;
    
    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Radius : ");

    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %f.\n",dRet);

    return 0;
}