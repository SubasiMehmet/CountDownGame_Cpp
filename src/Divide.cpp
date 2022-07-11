#include "Divide.h"
#include <iostream>


Divide::Divide()
{
    //ctor
}

Divide::~Divide()
{
    //dtor
}



int Divide::evaluation(int x, int y) {

        if(x<y) {
			int t = x;
			x=y;
			y=t;
		}
		if(x % y == 0) {
			return x/y;
		}
		else {
			return 0;
		}
	}

    std::string Divide::symbol() {
		return "/";
	}
