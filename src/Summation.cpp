#include "Summation.h"
#include <iostream>


Summation::Summation()
{
    //ctor
}

Summation::~Summation()
{
    //dtor
}



 int Summation::evaluation(int x, int y) {
        int r = x+y;

        if(r<=x or r<=y) {
            return 0;
        }
        else {
        return r;
        }
	}

    std::string Summation::symbol(){
		return "+";
	}
