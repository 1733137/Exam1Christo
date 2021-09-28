#pragma once
#include "Arme.h"
#include "Mace.h"
#include "Sabre.h"
#include "Dague.h"
#include <string>
#include <vector>
class Aventurier
{
public:
	Aventurier();
	~Aventurier();
	int getAtt();
	Arme* acheterArme(Arme* Arme);
    Arme* ajouterArme(Arme* Arme);
	Arme* changerArme(Arme* Arme);
	std::string to_string();

private:
	int attaque;
	int attaqueTot;
	int force;
	int orDispo;
	int nbArme;
	Arme* monArme;
	 std::vector <Arme*> vecArme;
	 int perdreOr(int orPerdu);

protected:
	std::string nom;
};

