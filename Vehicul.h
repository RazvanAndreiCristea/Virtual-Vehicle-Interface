#pragma once
#include <iostream>
#include <string>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

class Vehicul
{
	virtual void read(std::istream&) = 0;
	virtual void print(std::ostream&) const = 0;

public:

	virtual ~Vehicul() = 0;

	virtual float getCamp() const = 0;

	virtual int tipObiect() const = 0;

	virtual int getLungimeSirDeCaractere() const = 0;

	friend std::istream& operator>>(std::istream&, Vehicul&);

	friend std::ostream& operator<<(std::ostream&, const Vehicul&);

};

bool testLungime(Vehicul*, Vehicul*);

void sortareVectorNeomogen(Vehicul**, int&);