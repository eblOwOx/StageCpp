#include <iostream>
#include "source/Entreprise.cpp"
#include "source/Mission.cpp"

int main () {
  Entreprise entreprise1;
  entreprise1.setEntreprise("Broceliande");
  entreprise1.setVilleEntreprise("Guer");
  
  Mission mission1;
  mission1.setNbPersonne(5);
  mission1.setDescriptifMission("aaaaa");
  mission1.setNbHeure(8);

  std::cout << "Entreprise : " << entreprise1.getNomEntreprise() << "." << endl;
  std::cout << "Ville : " << entreprise1.getVilleEntreprise() << "." << endl;

  std::cout << "Nombre de personnes pour la mission : " << mission1.getNbPersonne() << "." << endl;
  std::cout << "Descriptif de la mission : " << mission1.getDescriptifMission() << "." << endl;
  std::cout << "Durée de la mission : " << mission1.getNbHeure() << "." << endl;

  return 0;
}
