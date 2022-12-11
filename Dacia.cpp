#include "Dacia.h"

void Dacia::read(std::istream& intrare)
{
	this->Masina::read(intrare);

	std::cout << "Introduceti vechimea Daciei pe care o aveti: ";
	intrare >> this->vechime;

	if (this->tip)
		delete[] this->tip;

	char* aux = new char[100];

	std::cout << "Introduceti tipul Daciei pe care o aveti: ";

	intrare.ignore();
	intrare.getline(aux, 100);

	this->tip = new char[strlen(aux) + 1];
	strcpy(this->tip, aux);

	delete[] aux;
}

void Dacia::print(std::ostream& iesire) const
{
	this->Masina::print(iesire);

	iesire << "Vechimea Daciei este: " << this->vechime << '\n';
	iesire << "Tipul Daciei este: " << this->tip << '\n';
}

Dacia::Dacia() : Masina()
{
	tip = nullptr;
	vechime = 0;
}

Dacia::Dacia(const char* tip, const int vechime, const float lungime, const char* nrInmatriculare) : Masina(lungime, nrInmatriculare)
{
	this->vechime = vechime;

	if (tip)
	{
		this->tip = new char[strlen(tip) + 1];
		strcpy(this->tip, tip);
	}

	else this->tip = nullptr;
}

Dacia::~Dacia()
{
	if (tip)
		delete[] tip;
}

float Dacia::getCamp() const
{
	return(float)vechime;
}

int Dacia::tipObiect() const
{
	return 2;
}

int Dacia::getLungimeSirDeCaractere() const
{
	return strlen(tip);
}