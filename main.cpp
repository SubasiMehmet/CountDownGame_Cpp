#include <iostream>
#include <INumberSearch.h>

#include <string>
#include <sstream>

using namespace std;

int main()
{



		string numbers_str;			//inputs as string
		int numbers[6];
		cout << "Please enter 6 numbers with space...";


        getline(cin,numbers_str);

        stringstream stream(numbers_str);

        int counter = 0;
        while(stream){          //string to int array
            int n;
            stream>>n;
            numbers[counter] = n;
            counter++;
        }





        int total;                                  // integer target
        cout << "Please enter the target";
		cin >> total;                               // integer target




            INumberSearch oper;

			if(oper.findSolution(numbers, sizeof(numbers)/sizeof(numbers[0]), total)) {			//call the solution
				oper.PrintSolution();
			}
			else {
				cout << "No solution" << endl;
			}





    return 0;
}
