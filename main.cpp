#include "Dacia.h" 
#include "Vapor.h" 
#include "Metrou.h"
#include "Racheta.h" 

int main()
{
	int dimensiune(12);

	Vehicul** listaVehicule = new Vehicul * [dimensiune];

	for (auto j = 0; j < dimensiune; j++)
	{
		if (j >= 0 && j < 3)
			listaVehicule[j] = new Masina();

		if (j >= 3 && j < 5)
			listaVehicule[j] = new Dacia();

		if (j >= 5 && j < 7)
			listaVehicule[j] = new Metrou();

		if (j >= 7 && j < 10)
			listaVehicule[j] = new Vapor();

		if (j >= 10)
			listaVehicule[j] = new Racheta();
	}

	for (auto j = 0; j < dimensiune; j++)
		std::cin >> *listaVehicule[j];

	std::cout << "\nLista de vehicule va aparea mai jos! \n\n";

	for (auto j = 0; j < dimensiune; j++)
		std::cout << *listaVehicule[j];

	sortareVectorNeomogen(listaVehicule, dimensiune);

	std::cout << "\nLista de vehicule sortata dupa lungimea campului char* din fiecare clasa va aparea mai jos! \n\n";

	for (auto j = 0; j < dimensiune; j++)
		std::cout << *listaVehicule[j];

	std::cout << "\nVapoarele din lista de vehicule vor aparea mai jos! \n\n";

	for (auto j = 0; j < dimensiune; j++)
		if (listaVehicule[j]->tipObiect() == 4)
			std::cout << *listaVehicule[j];

	std::cout << "Campurile particulare ale fiecarei clase din vectorul neomogen se vor observa mai jos! \n\n";

	for (auto j = 0; j < dimensiune; j++)
		std::cout << listaVehicule[j]->getCamp() << '\n';

	std::cout << "\n============================================================================================\n\n";

	for (auto j = 0; j < dimensiune; j++)
		delete listaVehicule[j];

	delete[] listaVehicule;

	return 0;
}