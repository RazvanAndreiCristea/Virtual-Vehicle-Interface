#pragma once
#include "Masina.h"

class Dacia : public Masina
{
	char* tip;
	int vechime;
	void read(std::istream&);
	void print(std::ostream&) const;

public:

	Dacia();

	Dacia(const char*, const int, const float, const char*);

	~Dacia();

	float getCamp() const;

	int tipObiect() const;

	int getLungimeSirDeCaractere() const;
};