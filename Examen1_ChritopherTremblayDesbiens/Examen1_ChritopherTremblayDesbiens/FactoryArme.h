#pragma once
#include <iostream>
#include "Arme.h"
#include <Random>
class FactoryArme
{
public:
	//Création d'une arme aléatoire
	static Arme* getRandomArme();
	_RANDOM_ int genererNB(int ranMin,int ranMax);
	
};

