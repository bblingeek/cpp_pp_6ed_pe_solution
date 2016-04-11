#include <iostream>
using namespace std;


int main(int argc, char** argv)
{
    long long world_population = 0;
    long long india_population = 0;
    double percent_population = 0;
    
    cout<<"Enter the world's population: ";
    cin>>world_population;
    
    cout<<"Enter the population of India: ";
    cin>>india_population;
    
    percent_population = double (india_population) / world_population * 100.0;
    
    cout<<"The population of India is "<<percent_population<<"% of the world population."<<endl;
    
    return 0;
}
