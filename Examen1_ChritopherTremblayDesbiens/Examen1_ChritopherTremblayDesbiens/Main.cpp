#include "Main.h"
#include"Arme.h"
#include"FactoryArme.h"
#include <iostream>
#include <ctime>
#include "Aventurier.h"
#include "Marchand.h"
using namespace std;


int main()
{
	int choixMenu = 0;
	int choix = 0;

	Arme monTest;
	

	// test factory
	std::cout << "Production d'arme.......!\n";
	Arme* monArme = FactoryArme::getRandomArme();
	delete monArme;
	//menu
	cout << "Bienvenue dans le menu. Choisir une option.";
	cout << "1. Voir le statut de votre aventurier";
	cout << "2. Voir les armes disponibles au marché";
	cout << "3. Acheter une arme";
	cout << "4. Equiper une arme";
	
	cin >> choixMenu; 
switch (choixMenu) 
{	case 1: 
	Aventurier::to_string;
	
	break; 

	case 2: 
		cout << "Bienvenue dans la boutique du forgeron, voici les armes en vente en ce moment...";
		Marchand::remplireBoutique;
		cout << "j'ai trois armes ici, choisi la quelle des trois tu veux regarder...";
		cin >> choix;
		Marchand::to_string; "Si tu veux l'acheter tu n'a qua retourner au menu principal....";
	
	break;
		 
	case 3:
		cout << "Quel arme vouler vous acheter?";
		cin >> choix;
		if (vecBoutique[choix]->getValeur > Aventurier->orDipso)
		{

		}

	break; 

	case 4:

	break; 

}