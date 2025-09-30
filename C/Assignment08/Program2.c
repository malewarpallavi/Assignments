//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                          //
// File name :   Program2.c                                                                                 //  
// Description : Program which accept width & height of rectangle from user & calculate its area.           //
// Author :      Pallavi Omprakash Malewar                                                                  //
// Date :        16/06/2025                                                                                 //
//                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START

    Input
        - Ask the user to enter the width of the rectangle.
        - Read and store the width in 'fWidth'.
        - Ask the user to enter the height of the rectangle.
        - Read and store the height in 'fHeight'.

    Processing
        - Calculate the area of the rectangle using the formula:
            - dArea = fWidth * fHeight

    Output
        - Display the calculated area.

    END
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// Function name :   RectArea                                                                       //
// Description   :   Returns area of a rectangle given width and height                             //
// Input         :   float fWidth, float fHeight                                                    //
// Output        :   double  -> Area of rectangle                                                   //
// Author        :   Pallavi Omprakash Malewar                                                      //
// Date          :   16/06/2025                                                                     //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth , float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0;

    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("Area of rectangle is : %lf\n",dRet);
    return 0;
}