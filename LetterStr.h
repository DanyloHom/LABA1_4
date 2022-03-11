#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

class LetterStr
{
private:
	char* p;
	int size;
public:
	LetterStr(const LetterStr& a);
	LetterStr();
	LetterStr(int size);


	int getSize() const { return size; }
	char* getP() const { return p; }

	void Allocate(int size);
	void setSize(int value) { size = value; }
	void setP(char* ptr) { p = ptr; };

	bool Init(char* ptr);
	void Read();
	void Display();

	std::string toString();

	friend bool Less(LetterStr l, LetterStr r);
	friend bool Greate(LetterStr l, LetterStr r);
	friend bool Equal(LetterStr l, LetterStr r);
	friend bool NLess(LetterStr l, LetterStr r);
	friend bool NGreate(LetterStr l, LetterStr r);
	friend bool NEqual(LetterStr l, LetterStr r);

	int toInt();
	double toDouble();

	void FromIntToChar(int x);
	void FromDoubToChar(double x);

	void Concat(const LetterStr& a, const LetterStr& b);
	void Assign(const LetterStr& a);

	void FormOut();

	~LetterStr();

};