#define _CRT_SECURE_NO_WARNINGS
#include "LetterStr.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;


LetterStr::LetterStr(const LetterStr& a)
{
   // cout << "copy constructor is working" << endl;
    size = a.size;
    Allocate(a.size);
    for (unsigned i = 0; i < size; i++)
        p[i] = a.p[i];
    p[size] = 0; 
}

LetterStr::LetterStr()
{
    //cout << "standart constructor is working" << endl;
    Allocate(0);
    size = 0;
}

LetterStr::LetterStr(int size)
{
    //cout << " constructor with parametr is working" << endl;
    this->size = size;
    Allocate(size);
}

void LetterStr::Allocate(int size)
{
    p = new char[size + 1];
    p[0] = 0;
}

bool LetterStr::Init(char* ptr)
{
    if (!ptr == 0) {
        setSize(strlen(ptr));
        p = new char[size + 1];
        strcpy(p, ptr);
        return true;
    }
    else
        return false;
}

void LetterStr::Read()
{
    char P[100];
    do {
        cout << "enter string" << endl;
        cin.getline(P, 100);
    } while (!Init(P));
}

void LetterStr::Display()
{
    cout << p << endl;
}

string LetterStr::toString()
{
    //cout << "toString is working" << endl;

    stringstream sout;

    sout << p << endl;

    return sout.str();
}


int LetterStr::toInt()
{
    return atoi(p);
}


double LetterStr::toDouble()
{
    return atof(p);
}

void LetterStr::FromIntToChar(int x)
{
    //cout << "FromIntToChar is working" << endl;

    string tmp = to_string(x);
    LetterStr(tmp.size() + 1);
    strcpy(p, tmp.c_str());
}

void LetterStr::FromDoubToChar(double x)
{
    //cout << "FromDoubleToChar is working" << endl;
    string tmp = to_string(x);
    Allocate(tmp.size() + 1);
    strcpy(p, tmp.c_str());
}

void LetterStr::Concat(const LetterStr& a, const LetterStr& b)
{
    /*cout << "concat is working" << endl;
    cout << "strlen(a.getP()) = " << strlen(a.getP()) << endl;
    cout << "strlen(b.getP()) = " << strlen(b.getP()) << endl;
    cout << "a.getP() = " << a.getP() << endl;
    cout << "b.getP() = " << b.getP() << endl;*/

    int len = (strlen(a.getP()) + strlen(b.getP()) + 1);
    delete[]p;
    Allocate(len);
    strcpy(p, a.getP());
    strcat(p, b.getP());
    //return *this;
}

void LetterStr::Assign(const LetterStr& a)
{
    //cout << "assign is working" << endl;

    int len = strlen(a.getP());
    delete[]p;
    Allocate(len + 1);
    strcpy(p, a.getP());
}

void LetterStr::FormOut()
{
    cout << "conten of object : " << setw(10) << p << endl;
}


LetterStr::~LetterStr()
{
    //cout << "destructor is working" << endl;

    delete[] p;
}

bool Less(LetterStr l, LetterStr r)
{
    return (strlen(l.getP()) < strlen(r.getP()));
}

bool Greate(LetterStr l, LetterStr r)
{
    return strlen(l.getP()) > strlen(r.getP());
}

bool Equal(LetterStr l, LetterStr r)
{
    return strlen(l.getP()) == strlen(r.getP());
}

bool NLess(LetterStr l, LetterStr r)
{
    return !(strlen(l.getP()) < strlen(r.getP()));
}

bool NGreate(LetterStr l, LetterStr r)
{
    return !(strlen(l.getP()) > strlen(r.getP()));
}

bool NEqual(LetterStr l, LetterStr r)
{
    return !(strlen(l.getP()) == strlen(r.getP()));
}