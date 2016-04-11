#include <iostream>
using namespace std;


int main(int argc, char** argv)
{
    double distance = 0;
    double litres = 0;
    
    cout<<"Enter distance (in kilometers): ";
    cin>>distance;
    
    cout<<"Enter quntity of fuel (in litres): ";
    cin>>litres;
    
    cout<<"Mileage (km/litre): "<<distance / litres<<" km/l."<<endl;
    
    return 0;
}
