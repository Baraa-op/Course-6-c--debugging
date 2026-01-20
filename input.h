#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace input {

    int Read_Positive_Numbers(string Message)
    {
        int Number;
        do
        {
            cout << Message;
            cin >> Number;
        } while (Number <= 0);

        return Number;
    }

    int Read_Negative_Numbers(string Message)
    {
        int Number;
        do
        {
            cout << Message;
            cin >> Number;
        } while (Number >= 0);

        return Number;
    }

    int Read_Number_In_Range(string Message, int Min, int Max)
    {
        int Number;
        do
        {
            cout << Message;
            cin >> Number;
        } while (Number < Min || Number > Max);

        return Number;
    }

    string Read_Text(string Message)
    {
        string Text;
        cout << Message;
        cin >> Text;
        return Text;
    }

    float Read_Float(string Message)
    {
        float Number;
        cout << Message;
        cin >> Number;
        return Number;
    }

    float Read_Positive_Float(string Message)
    {
        float Number;
        do
        {
            cout << Message;
            cin >> Number;
        } while (Number <= 0);

        return Number;
    }

    float Read_Negative_Float(string Message)
    {
        float Number;
        do
        {
            cout << Message;
            cin >> Number;
        } while (Number >= 0);

        return Number;
    }

    float Read_Float_In_Range(string Message, float Min, float Max)
    {
        float Number;
        do
        {
            cout << Message;
            cin >> Number;
        } while (Number < Min || Number > Max);

        return Number;
    }

    bool Read_Yes_No(string Message)
    {
        char Choice;
        do
        {
            cout << Message << " (y/n): ";
            cin >> Choice;
            Choice = tolower(Choice);
        } while (Choice != 'y' && Choice != 'n');

        return Choice == 'y';
    }

    char Read_Single_Character(string Message)
    {
        char Character;
        cout << Message;
        cin >> Character;
        return Character;
    }

}
