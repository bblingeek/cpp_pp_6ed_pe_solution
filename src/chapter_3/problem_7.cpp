#include <iostream>
using namespace std;


int main(int argc, char** argv)
{
    double mileage_km_per_litre = 0;
    double mileage_miles_per_gallon = 0;
    
    cout<<"Enter mileage (km/l): ";
    cin>>mileage_km_per_litre;
    
    mileage_miles_per_gallon = mileage_km_per_litre * 0.6214 * 3.875;
    
    cout<<"Mileage (miles/gallon): "<<mileage_miles_per_gallon<<endl;
    
    return 0;
}
