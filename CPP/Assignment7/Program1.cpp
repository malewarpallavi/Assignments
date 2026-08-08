    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // File name :   Program1.cpp
    // Description : Write recursive program which accept string from user & count white spaces.
    // Author :      Pallavi Omprakash Malewar
    // Date :        27/07/2026
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    /*

        Input  :    HE llo WOr lD
        Output :    3

    */


    #include<iostream>
    using namespace std;

    int WhiteSpace(char *crr)
    {
        if(*crr == '\0') return 0;
        if(*crr == ' ') return (1 + WhiteSpace(crr + 1));
        return WhiteSpace(crr + 1);

    }

    int main()
    {
        int iRet = 0;
        char crr[20];

        cout << "Enter String : ";
        cin.getline(crr, 20);

        iRet = WhiteSpace(crr);
        cout << iRet << endl;

        return 0;
    }