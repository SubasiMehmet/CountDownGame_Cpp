#include "INumberSearch.h"
#include "Summation.h"
#include "Multiply.h"
#include "Divide.h"
#include "Subtract.h"
#include <functional>
#include <iostream>
#include <memory>

using namespace std;

INumberSearch::INumberSearch()
{
    //ctor
}

INumberSearch::~INumberSearch()
{
    //dtor
}


int INumberSearch::evaluation(int x, int y){
        }
std::string INumberSearch::symbol(){
}


vector<string> INumberSearch::solution;


INumberSearch *sum = new Summation();
INumberSearch *mul = new Multiply();
INumberSearch *divi = new Divide();
INumberSearch *sub = new Subtract;



INumberSearch *OPERATIONS[4] = {sum, sub, mul, divi}; //array of the operations



bool INumberSearch::findSolution(int t[], int nb, int total){


    for(int i=0;i<nb;i++) {			//Search for the input array

			if(t[i]==total) {			//if it is solved
				return true;
			}

			for(int j=i+1;j<nb;j++) {    //
				for(int k = 0; k < sizeof(OPERATIONS)/sizeof(OPERATIONS[0]);k++) {			//loop for each operator
					int res = OPERATIONS[k]->evaluation(t[i], t[j]);

					if(res!=0) {
						int savei = t[i], savej = t[j];			//save the last 2 values
						t[i] = res;								//delete the used values
						t[j] = t[nb-1];


						if(findSolution(t, nb-1, total)) {		//call the new array with recursively
                                solution.push_back(to_string(savei) + " " + OPERATIONS[k]->symbol() + " " + to_string(savej)); //When solved, save the last values by the help of recursive function
							return true;
						}

						t[i] = savei;
						t[j] = savej;

					}
				}
			}
		}

		return false;



}


void INumberSearch::PrintSolution(){            //prin solution


    for (int i = solution.size()-1; i>=0; i--) {
		cout <<(solution[i]) << endl;
    }

    cout << endl;

}

