#pragma once
#include <string>
class Arme
{
public:
	Arme();
	~Arme();
	int getValeur();
	int getAtt();
	int getDur();
	float getPoids();
	std::string getNom();
	enum rarete getRarete();

private:
	int valeur;
protected:
	int attaque;
	int durabilite;
	float poids;
	std::string  nom;
	enum rarete;
};

