/*****************************************************************//**
* \file   main.cpp
* \brief  Point d'entrée
*
* \author Amaury
* \version 0.1
* \date   September 2025
*
* Point d'entrée du programme, permet de tester les différents objets et méthodes.
*********************************************************************/

#include <iostream>
#include "header/Mission.h"
#include "header/Entreprise.h"

/**
 * \brief Permet de tester les objets et le méthodes
 *
 */
int main () {
  Entreprise entreprise1;
  entreprise1.setEntreprise("Broceliande");
  entreprise1.setVilleEntreprise("Guer");
  
  Mission mission1;
  mission1.setNbPersonne(5);
  mission1.setDescriptifMission("aaaaa");
  mission1.setNbHeure(8);

  std::cout << "Entreprise : " << entreprise1.getNomEntreprise() << "." << std::endl;
  std::cout << "Ville : " << entreprise1.getVilleEntreprise() << "." << std::endl;

  std::cout << "Nombre de personnes pour la mission : " << mission1.getNbPersonne() << "." << std::endl;
  std::cout << "Descriptif de la mission : " << mission1.getDescriptifMission() << "." << std::endl;
  std::cout << "Durée de la mission : " << mission1.getNbHeure() << "." << std::endl;

  return 0;
}
