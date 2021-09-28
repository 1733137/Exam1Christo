#include "Marchand.h"
#include "FactoryArme.h"


Marchand::Marchand()
{
	humeur = 0;
	achat  = true;
	vecBoutique;
}

int Marchand::getHumeur()
{
	if (achat == true)
	{
		humeur += 1;
	}
	else
		humeur -= 1;
	
	return humeur;
}

  Arme* Marchand::remplireBoutique()
{
	vecBoutique[0] = FactoryArme::getRandomArme();
	vecBoutique[1] = FactoryArme::getRandomArme();
	vecBoutique[2] = FactoryArme::getRandomArme();

	return;
}
  
  std::string Marchand::to_string(int choix)
  {
	  std::string info;
	  info.append("Nom : " + vecBoutique[choix]->getNom() + "\n");
	  info.append("Durabiliter : " + vecBoutique[choix]->getDur());
	  info.append("Attaque : " + vecBoutique[choix]->getAtt());
	  info.append("Nom : " + vecBoutique[choix]->getValeur());

	  return info;
  }
