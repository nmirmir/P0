#include "BrazoRobotico.h"
#include <iostream>


using namespace std;

int main(){

    BrazoRobotico B1(0.0,0.0,0.0,false);
    B1.mover(200.23 ,123.43,124.24);
    
    if(B1.getSuj_obj()){

        cout << "sosteniendo objeto";

    }else{

        cout << "sin objeto";

    }







    return 0;

}
