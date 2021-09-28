#include "FactoryArme.h"
#include "Dague.h"
#include "Mace.h"
#include "Sabre.h"



Arme* FactoryArme::getRandomArme()
{
	Arme* arme(0);
	//Generer type arme aléatoire
	int typeA = genererNB(1, 3);
	if (typeA == 1)
		arme = new Dague;
	else if (typeA == 2)
		arme = new Mace;
	else
		arme = new Sabre;

	return arme;
}
