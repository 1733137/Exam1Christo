#include "Arme.h"
#include <string>

Arme::Arme()
{
	valeur = 0;
	attaque = 0;
	durabilite = 0;
	poids = 0;
	nom = "WIP";
}

int Arme::getAtt()
{
	return attaque;
}
int Arme::getDur()
{
	return durabilite;
}
float Arme::getPoids()
{
	return poids;
}
