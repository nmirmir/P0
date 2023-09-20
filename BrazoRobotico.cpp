#include "BrazoRobotico.h"
#include <iostream>

    BrazoRobotico::BrazoRobotico(double x, double y, double z, bool suj_obj){

      this->x=x;
      this->y=y;
      this->z=z;
      this->suj_obj = suj_obj;

    }


    void BrazoRobotico::mover(double x, double y, double z){

        this->x=x;
        this->y=y;
        this->z=z;

    }

    bool BrazoRobotico::getSuj_obj(){

        return suj_obj;

       }


    void BrazoRobotico::coger(){

        suj_obj=true;

    }

    double BrazoRobotico::getX(){

        return x;
    }

    void BrazoRobotico::soltar(){

        suj_obj=false;

    }


    double BrazoRobotico::getY(){

        return y;

    }

    double BrazoRobotico::getZ(){

        return z;

    }

