//
// Created by macine on 03/01/24.
//

#pragma once
#include "Combinaison.h"

class Section_Haute {

    private:
        std::vector<Figure * > figures;
        std::vector<Combinaison> section;
        int score_section = 0;
        bool bonus = false;
    public:
        Section_Haute();
        void setScore(Lancer & lancer , unsigned int position);
        int getScore();
        int getScorePosition(unsigned int position);
        std::string getDescCombinaison(unsigned int position);
        void affiche();

        void setPreviewScore(Lancer& lancer, unsigned int position);
        void resetPreviewScores();
        void affichePreview(unsigned int position);

        ~Section_Haute();
};