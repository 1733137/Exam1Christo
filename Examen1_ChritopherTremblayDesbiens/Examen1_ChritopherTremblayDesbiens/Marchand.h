#pragma once
#include <vector>
#include"Arme.h"
class Marchand
{
public:
	Marchand();
	~Marchand();
	Arme* remplireBoutique();
	int getHumeur();
	int humeur = 0;
	bool achat = true;
	std::string to_string(int choix);
private:
	std::vector <Arme*> vecBoutique;
	
};

