#pragma once
#include "Vehicul.h"

class Vapor : public Vehicul
{
	char* nume;
	float kilometraj;
	void read(std::istream&);
	void print(std::ostream&) const;

public:

	Vapor();

	Vapor(const float, const char*);

	~Vapor();

	float getCamp() const;

	int tipObiect() const;

	int getLungimeSirDeCaractere() const;
};