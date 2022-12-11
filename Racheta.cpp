#include "Racheta.h"

void Racheta::read(std::istream& intrare)
{
	std::cout << "Introduceti o capacitate pentru rezervorul rachetei: ";
	intrare >> this->capacitateStocareCombustibil;

	if (this->numeRacheta)
		delete[] this->numeRacheta;

	char* aux = new char[100];

	std::cout << "Introduceti un nume pentru racheta: ";

	intrare.ignore();
	intrare.getline(aux, 100);

	this->numeRacheta = new char[strlen(aux) + 1];
	strcpy(this->numeRacheta, aux);

	delete[] aux;
}

void Racheta::print(std::ostream& iesire) const
{
	iesire << "Racheta are un rezervor care are o capacitate de: " << this->capacitateStocareCombustibil << " litri\n";
	iesire << "Numele rachetei este: " << this->numeRacheta << '\n';
}

Racheta::Racheta()
{
	numeRacheta = nullptr;
	capacitateStocareCombustibil = 0;
}

Racheta::Racheta(const float capacitateStocareCombustibil, const char* numeRacheta)
{
	this->capacitateStocareCombustibil = capacitateStocareCombustibil;

	if (numeRacheta)
	{
		this->numeRacheta = new char[strlen(numeRacheta) + 1];
		strcpy(this->numeRacheta, numeRacheta);
	}

	else this->numeRacheta = nullptr;
}

Racheta::~Racheta()
{
	if (numeRacheta)
		delete[] numeRacheta;
}

float Racheta::getCamp() const
{
	return capacitateStocareCombustibil;
}

int Racheta::tipObiect() const
{
	return 5;
}

int Racheta::getLungimeSirDeCaractere() const
{
	return strlen(numeRacheta);
}