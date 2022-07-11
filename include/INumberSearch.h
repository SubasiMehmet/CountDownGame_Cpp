#ifndef INumberSearch_H
#define INumberSearch_H
#include <iostream>
#include <vector>



using namespace std;


class INumberSearch
{
    public:
        INumberSearch();
        virtual ~INumberSearch();

        virtual int evaluation(int x, int y);
        virtual std::string symbol();

        static vector<string> solution;

        virtual bool findSolution(int t[], int nb, int total);

        virtual void PrintSolution();


};

#endif // OPERATIONS_H
