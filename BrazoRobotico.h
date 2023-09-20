#include<iostream>

class BrazoRobotico{

public:
//métodbools consultores

   double getX();
   double getY();
   double getZ();
    bool getSuj_obj();

//constructor

    BrazoRobotico( double, double, double, bool);
    
    void coger();
   
    void soltar();

    void  mover(double , double , double );
    
        
    
    
private:
    double x,y,z;
    bool suj_obj;
};

