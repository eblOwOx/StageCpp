/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe mission
 * 
 * \author Amaury
 * \date   September 2025
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

 /*! \class Mission
    * \brief classe representant une entreprise. 4 attributs pives
    */
class Mission
{
private:
    int nbPersonne;
    std::string descriptifMission;
    int nbHeure;
    

protected:

public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();
    Mission(const Mission& entre);
    Mission &operator = (const Mission& entre);

    Mission(int nombrePers, std::string descriptif, int heure);
    /*void setNbPersonne(int nouveauNb);
    int getNbPersonne();
    void setDescriptifMission(std::string nouveauDescriptif);
    std::string getDescriptif();
    int setNbHeure(int nouvelHeure);
    int getNbHeure();*/

};
