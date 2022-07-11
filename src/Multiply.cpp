#include "Multiply.h"
#include <iostream>


Multiply::Multiply()
{
    //ctor
}

Multiply::~Multiply()
{
    //dtor
}


int Multiply::evaluation (int x, int y) {

        int r = x*y;

		if(r<=x || r<=y) {
			return 0;
		}
		else {
			return r;
		}
	}

    std::string Multiply::symbol() {
		return "*";
	}
