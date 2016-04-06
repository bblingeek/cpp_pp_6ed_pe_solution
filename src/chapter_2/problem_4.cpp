#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int age_in_years = 0;
    
    cout<<"Enter your age: ";
    cin>>age_in_years;
    
    cout<<"Your age in months is "<<age_in_years * 12<<endl;
    
    return 0;
}
