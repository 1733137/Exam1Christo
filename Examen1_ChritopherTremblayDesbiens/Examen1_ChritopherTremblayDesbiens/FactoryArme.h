#pragma once
#include <iostream>
#include "Arme.h"
#include <Random>
class FactoryArme
{
public:
	//Cr�ation d'une arme al�atoire
	static Arme* getRandomArme();
	_RANDOM_ int genererNB(int ranMin,int ranMax);
	
};

