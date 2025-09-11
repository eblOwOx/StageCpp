/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe mission
 * 
 * \author Amaury
 * \date   September 2025
 *********************************************************************/

//#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>
#include "Entreprise.h"

 /*! \class Mission
    * \brief classe representant une entreprise. 4 attributs prives
    */
class Mission
{
private:
    /*Classe sous forme canonique*/
    Entreprise entrepriseMission;
    int nbPersonne;
    std::string descriptifMission;
    int nbHeure;
    

protected:

public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();
    Mission(const Mission& miss);
    Mission &operator = (const Mission& miss);

    Mission(int nombrePers, std::string descriptif, int heure);
    void setNbPersonne(int nouveauNb);
    int getNbPersonne();
    void setDescriptifMission(std::string nouveauDescriptif);
    std::string getDescriptifMission();
    void setNbHeure(int nouvelHeure);
    int getNbHeure();

};
