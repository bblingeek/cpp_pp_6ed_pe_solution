#include <iostream>
using namespace std;

const int inches_to_feet_conv_factor = 12;

int main(int argc, char** argv)
{
    int height_in_inches = 0;
    
    cout<<"Enter height (in inches): ";
    cin>>height_in_inches;
    
    cout<<"Converted height (in feet-inches): "<<height_in_inches / 12<<" feet "<<height_in_inches % 12<<" inches."<<endl;
    
    return 0;
}
