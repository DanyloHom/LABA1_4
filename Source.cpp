#define _CRT_SECURE_NO_WARNINGS
#include "LetterStr.h"
#include <iostream>
using namespace std;

int main()
{
    LetterStr a, b, c;
    double x;
    int y;
    a.Read();
    b.Read();
    cout << "first string = ";
    a.Display();
    cout << "second string = ";
    b.Display();


   cout << "                                         comparing:" << endl;
    if (Less(a, b))
        cout << "first string is less than second" << endl;
    if (NLess(a, b))
        cout << "first string isn`t less than second" << endl;
    if (Greate(a, b))
        cout << "first string is larger than second" << endl;
    if (NGreate(a, b))
        cout << "first string isn`t larger than second" << endl;
    if (Equal(a, b))
        cout << "strings are equall" << endl;
    if (NEqual(a, b))
        cout << "strings aren`t equall" << endl;


    cout << "                                           to figures :" << endl;
    cout << a.toInt() << endl;
    cout << b.toDouble() << endl;
    cout << "we can even sum them : " << a.toInt() + b.toDouble() << endl;


    cout << "                                           to char :" << endl;
    cout << "enter double-type value" << endl;
    cin >> x;
    a.FromDoubToChar(x);
    cout << "enter int-type value" << endl;
    cin >> y;
    b.FromIntToChar(y);
    cout << "a = " << endl;
    a.Display();
    cout << "b = " << endl;
    b.Display();


    cout << "                                           concatination/ assign :" << endl;
    cout << "a assigning b" << endl;
    a.Assign(b);
    cout << "a = ";
    a.Display();
    cout << endl;

    cout << "c = concatination of a and b" << endl;
    c.Concat(a, b);
    cout << "c = ";
    c.Display();
    cout << endl;


    cout << "                                           toString and FormOut method:" << endl;
    cout << "a.toString() = " << a.toString() << endl;
    cout << "b.toString() = " << b.toString() << endl;
    cout << "c.toString() = " << c.toString() << endl;

    cout << "a.FormOut() = ";
    a.FormOut();
    cout << endl;

    cout << "b.FormOut() = ";
    b.FormOut();
    cout << endl;

    cout << "c.FormOut() = ";
    c.FormOut();
    cout << endl;

}