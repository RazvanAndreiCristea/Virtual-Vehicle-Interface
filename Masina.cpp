#include "Masina.h"

void Masina::read(std::istream& intrare)
{
	std::cout << "Introduceti o lungime pentru masina: ";
	intrare >> this->lungime;

	if (this->nrInmatriculare)
		delete[] this->nrInmatriculare;

	char* aux = new char[100];

	std::cout << "Introduceti un numar de inmatriculare: ";

	intrare.ignore();
	intrare.getline(aux, 100);

	this->nrInmatriculare = new char[strlen(aux) + 1];
	strcpy(this->nrInmatriculare, aux);

	delete[] aux;
}

void Masina::print(std::ostream& iesire) const
{
	iesire << "Lungimea masinii este: " << this->lungime << '\n';
	iesire << "Numarul de inmatriculare al masinii este: " << this->nrInmatriculare << '\n';
}

Masina::Masina()
{
	lungime = 0;
	nrInmatriculare = nullptr;
}

Masina::Masina(const float lungime, const char* nrInmatriculare)
{
	this->lungime = lungime;

	if (nrInmatriculare)
	{
		this->nrInmatriculare = new char[strlen(nrInmatriculare) + 1];
		strcpy(this->nrInmatriculare, nrInmatriculare);
	}

	else this->nrInmatriculare = nullptr;
}

Masina::~Masina()
{
	if (nrInmatriculare)
		delete[] nrInmatriculare;
}

float Masina::getCamp() const
{
	return lungime;
}

int Masina::tipObiect() const
{
	return 1;
}

int Masina::getLungimeSirDeCaractere() const
{
	return strlen(nrInmatriculare);
}