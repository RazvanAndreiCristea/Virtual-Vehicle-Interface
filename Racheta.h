#pragma once
#include "Vehicul.h"

class Racheta : public Vehicul
{
	char* numeRacheta;
	float capacitateStocareCombustibil;
	void read(std::istream&);
	void print(std::ostream&) const;

public:

	Racheta();

	Racheta(const float, const char*);

	~Racheta();

	float getCamp() const;

	int tipObiect() const;

	int getLungimeSirDeCaractere() const;
};