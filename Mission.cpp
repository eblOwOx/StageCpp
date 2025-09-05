/*****************************************************************//**
* \file   Mission.cpp
* \brief  Definition de la classe Mission
*
* \author Amaury
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour décrire les stages
*********************************************************************/

#include "Mission.h"

using namespace std;


/**
 * \brief Constructeur par default
 * \li Nombre Personnes = 0
 * \li Descriptif = inconnu
 * \li Nombre Heure = 0
 *
 */
Mission::Mission() {

    this->nbPersonne = 0;
    this->descriptifMission = "inconnu";
    this->nbHeure = 0;
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param personne nombre de personnes
 * \param desc descriptif de la mission
 * \param heure duree de la mission
 */
Mission::Mission(int personne, std::string desc, int heure) {
    this->nbPersonne = personne;
    this->descriptifMission = desc;
    this->nbHeure = heure;
}

/**
 * \brief Destructeur
 *
 */
Mission::~Mission() {
    cout << "Destrcution de la mission " << this->nbPersonne << " " << this->descriptifMission << " " << this->nbHeure << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param miss Objet de type mission
 */
Mission::Mission(const Mission& miss)
{
    this->nbPersonne = miss.nbPersonne;
    this->descriptifMission = miss.descriptifMission;
    this->nbHeure = miss.nbHeure;
}

/**
 * \brief Operateur d'affectation
 *
 * \param miss Objet de type mission
 * \return Nouvelle objet de type Mission
 */
Mission &Mission::operator = (const Mission& miss)
{
    cout << "Affectation de la mission" << std::endl;
    if (this != &miss)  // Pour éviter que l'on ne se recopie pas...
    {
        this->nbPersonne = miss.nbPersonne;
        this->descriptifMission = miss.descriptifMission;
        this->nbHeure = miss.nbHeure;
    }
    return *this;
}

/**
 * \brief Accesseur de l'attribut nbPersonne
 *
 * \return Nombre de personnes
 */
int Mission::getNbPersonne()
{
    return this->nbPersonne;
}

/**
 * \brief Mutateur de l'attribut nbPersonne
 *
 * \param nouveauNombre nouveau nombre de personnes
 */
void Mission::setNbPersonne(int nouveauNb)
{
    this->nbPersonne = nouveauNb;
}

/**
 * \brief Accesseur de l'attribut descriptifMission
 *
 * \return Description de la mission
 */
std::string Mission::getDescriptifMission()
{
    return this->descriptifMission;
}

/**
 * \brief Mutateur de l'attribut descriptifMission
 *
 * \param nouvelleDesc nouvelle desciption
 */
 void Mission::setDescriptifMission(std::string nouveauDescriptif)
{
    this->descriptifMission = nouveauDescriptif;
}

/**
 * \brief Accesseur de l'attribut nbHeure
 *
 * \return Heure total de mission
 */
int Mission::getNbHeure()
{
    return this->nbHeure;
}

/**
 * \brief Mutateur de l'attribut nbHeure
 *
 * \param nouvelHeure nouveau nombre de personnes
 */
void Mission::setNbHeure(int nouvelleHeure)
{
    this->nbHeure = nouvelleHeure;
}
