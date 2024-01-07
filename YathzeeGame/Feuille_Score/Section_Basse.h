//
// Created by macine on 03/01/24.
//

#pragma once
#include "Combinaison.h"

class Section_Basse {

private:
    std::vector<Figure * > figures;
    std::vector<Combinaison> section;
    int score_section = 0;
    bool locked = false;
    bool bonus = false;
    void addBonus();
    void setBrelan(Lancer &lancer);
    void setCarre(Lancer &lancer);

public:

    Section_Basse();
    Section_Basse(const Section_Basse &section_b);
    Section_Basse& operator=(const Section_Basse &section_b);


    void setScore(Lancer & lancer, unsigned int position);
    int getScore();
    int getScorePosition(unsigned int position);
    void affiche();
    void bonusYams();
    bool islocked();
    void unlock();
    void lock();

    void setPreviewScore(Lancer& lancer, unsigned int position);
    void resetPreviewScores();
    void affichePreview(unsigned int position);

    ~Section_Basse();
};
