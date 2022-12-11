#include "Vehicul.h"

Vehicul::~Vehicul()
{

}

std::istream& operator>>(std::istream& intrare, Vehicul& vehicul)
{
	vehicul.read(intrare);

	std::cout << "\n============================================================================================\n\n";

	return intrare;
}

std::ostream& operator<<(std::ostream& iesire, const Vehicul& vehicul)
{
	vehicul.print(iesire);

	std::cout << "\n============================================================================================\n\n";

	return iesire;
}

bool testLungime(Vehicul* a, Vehicul* b)
{
	if (a->getLungimeSirDeCaractere() > b->getLungimeSirDeCaractere())
		return true;

	return false;
}

void sortareVectorNeomogen(Vehicul** vector, int& dimensiune)
{
	for (auto j = 0; j < dimensiune - 1; j++)
		for (auto jdex = j + 1; jdex < dimensiune; jdex++)
			if (testLungime(vector[j], vector[jdex]))
			{
				Vehicul* aux = vector[j];
				vector[j] = vector[jdex];
				vector[jdex] = aux;
			}
}