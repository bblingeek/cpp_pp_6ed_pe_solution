#include <iostream>
using namespace std;

double lightyears_to_astro(double lightyears);

int main(int argc, char** argv)
{
    double dist_in_lightyears = 0.0;
    
    cout<<"Enter the number of light years: ";
    cin>>dist_in_lightyears;
    
    cout<<dist_in_lightyears<<" light years = "<<lightyears_to_astro(dist_in_lightyears)<<" astronomical units."<<endl;
    
    return 0;
}

double lightyears_to_astro(double lightyears)
{
    return lightyears * 63240;
}
