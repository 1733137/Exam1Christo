#include "Aventurier.h"

Aventurier::Aventurier()
{
	attaque = 10;
	attaqueTot = 0;
	force = 40;
	orDispo = 200;
	nom = "Bob";
	nbArme = 0;
	monArme = monArme;
	vecArme;
}

int Aventurier::getAtt()
{
	attaqueTot = attaque + monArme->getAtt();

    return attaqueTot;
}
 Arme* Aventurier::acheterArme(Arme* Arme)
{
	 nbArme += 1;
	 return Arme;
}
Arme* Aventurier::ajouterArme(Arme* Arme)
 {
	 vecArme[nbArme] = Arme;
	 return Arme;
 }
  Arme* Aventurier::changerArme(Arme* Arme)
{
	  monArme = Arme;

	  return monArme;
}
  int Aventurier::perdreOr(int orPerdu)
  {
	  orDispo = orDispo - orPerdu;

	  return orDispo;
  }

  std::string Aventurier::to_string()
  {
	  std::string info;
	  info.append("Nom : " + nom + "\n");
	  info.append("Or Disponible : " + orDispo );
	  info.append("Attaque : " + attaqueTot);
	  info.append("Force : " + force);
	  info.append("Arme Equiper : " + monArme->getNom());
	 
	  return info;
  }