#include <iostream>
using namespace std;

const double inches_to_meters_conv_factor = 0.0254;
const double pounds_to_kg_conv_factor = 2.2;

int main(int argc, char** argv)
{
    double height_feet = 0, height_inches = 0, height_meters = 0;
    double weight_pounds = 0, weight_kg = 0;
    double bmi = 0;
    
    cout<<"Enter height ..."<<endl;
    
    cout<<"Feet: ";
    cin>>height_feet;
    
    cout<<"Inches: ";
    cin>>height_inches;
    
    cout<<"Enter weight (pounds): ";
    cin>>weight_pounds;
    
    height_meters = (height_feet * 12 + height_inches) * inches_to_meters_conv_factor;
    weight_kg = weight_pounds / pounds_to_kg_conv_factor;
    
    bmi = weight_kg / (height_meters * height_meters);
    cout<<"BMI: "<<bmi<<endl;
    
    return 0;
}
