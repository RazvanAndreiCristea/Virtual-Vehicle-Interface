#include "Metrou.h"

void Metrou::read(std::istream& intrare)
{
	std::cout << "Introduceti o capacitate pentru metrou: ";
	intrare >> this->capacitate;

	if (this->firma)
		delete[] this->firma;

	char* aux = new char[100];

	std::cout << "Introduceti o firma pentru metrou: ";

	intrare.ignore();
	intrare.getline(aux, 100);

	this->firma = new char[strlen(aux) + 1];
	strcpy(this->firma, aux);

	delete[] aux;
}

void Metrou::print(std::ostream& iesire) const
{
	iesire << "Capacitatea metroului este: " << this->capacitate << '\n';
	iesire << "Firma unde a fost produsa garnitura de metrou este: " << this->firma << '\n';
}

Metrou::Metrou()
{
	firma = nullptr;
	capacitate = 0;
}

Metrou::Metrou(const char* firma, const int capacitate)
{
	this->capacitate = capacitate;

	if (firma)
	{
		this->firma = new char[strlen(firma) + 1];
		strcpy(this->firma, firma);
	}

	else this->firma = nullptr;
}

Metrou::~Metrou()
{
	if (firma)
		delete[] firma;
}

float Metrou::getCamp() const
{
	return(float)capacitate;
}

int Metrou::tipObiect() const
{
	return 3;
}

int Metrou::getLungimeSirDeCaractere() const
{
	return strlen(firma);
}