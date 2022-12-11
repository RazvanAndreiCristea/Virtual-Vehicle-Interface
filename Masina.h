#pragma once
#include "Vehicul.h"

class Masina : public Vehicul
{
protected:

	float lungime;
	char* nrInmatriculare;
	void read(std::istream&);
	void print(std::ostream&) const;

public:

	Masina();

	Masina(const float, const char*);

	~Masina();

	float getCamp() const;

	int tipObiect() const;

	int getLungimeSirDeCaractere() const;
};