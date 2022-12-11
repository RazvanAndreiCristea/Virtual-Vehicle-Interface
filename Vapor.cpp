#include "Vapor.h"

void Vapor::read(std::istream& intrare)
{
	std::cout << "Introduceti o distanta in KM: ";
	intrare >> this->kilometraj;

	if (this->nume)
		delete[] this->nume;

	char* aux = new char[100];

	std::cout << "Introduceti un nume pentru vapor: ";

	intrare.ignore();
	intrare.getline(aux, 100);

	this->nume = new char[strlen(aux) + 1];
	strcpy(this->nume, aux);

	delete[] aux;
}

void Vapor::print(std::ostream& iesire) const
{
	iesire << "Vaporul a parcus de la fabricare distanta de: " << this->kilometraj << " km\n";
	iesire << "Numele vaporului este: " << this->nume << '\n';
}

Vapor::Vapor()
{
	nume = nullptr;
	kilometraj = 0;
}

Vapor::Vapor(const float kilometraj, const char* nume)
{
	this->kilometraj = kilometraj;

	if (nume)
	{
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
	}

	else this->nume = nullptr;
}

Vapor::~Vapor()
{
	if (nume)
		delete[] nume;
}

float Vapor::getCamp() const
{
	return kilometraj;
}

int Vapor::tipObiect() const
{
	return 4;
}

int Vapor::getLungimeSirDeCaractere() const
{
	return strlen(nume);
}