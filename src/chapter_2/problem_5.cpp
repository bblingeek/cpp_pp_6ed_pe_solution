#include <iostream>
using namespace std;

double celsius_to_fahrenheit(double celsius);

int main(int argc, char** argv)
{
    double temparature_in_celsius = 0.0;
    
    cout<<"Please enter a Celsius value: ";
    cin>>temparature_in_celsius;
    
    cout<<temparature_in_celsius<<" degrees Celsius is "<<celsius_to_fahrenheit(temparature_in_celsius)<<" degrees Fahrenheit."<<endl;
    
    return 0;
}

double celsius_to_fahrenheit(double celsius)
{
    return 1.8 * celsius + 32;
}
