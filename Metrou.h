#pragma once
#include "Vehicul.h"

class Metrou : public Vehicul
{
	char* firma;
	int capacitate;
	void read(std::istream&);
	void print(std::ostream&) const;

public:

	Metrou();

	Metrou(const char*, const int);

	~Metrou();

	float getCamp() const;

	int tipObiect() const;

	int getLungimeSirDeCaractere() const;
};