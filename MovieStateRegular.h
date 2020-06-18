#ifndef LAB05_MOVIESTATEREGULAR_H
#define LAB05_MOVIESTATEREGULAR_H

#include <MovieState.h>

class MovieStateRegular: public MovieState{

public:
    double getPrice(int nbDays) override{
        double amount = 2;
        if (nbDays > 2){
            amount += (nbDays - 2) * 1.5;
        }

        return amount;
    }

    int getBonusRenterPoints(int nbDays) override {
        return 0;
    }


};

#endif //LAB05_MOVIESTATEREGULAR_H
