#include "Subtract.h"
#include <iostream>
#include <INumberSearch.h>

Subtract::Subtract()
{
    //ctor
}

Subtract::~Subtract()
{
    //dtor
}



    int Subtract::evaluation(int x, int y) {

        if(x<y) {
			return y-x;
		}
		else {
			return x-y;
		}
	}

    std::string Subtract::symbol(){
		return "-";
	}
