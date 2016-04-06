#include <iostream>
using namespace std;

void print_formatted_time(int hours, int minutes);

int main(int argc, char** argv)
{
    int hours = 0;
    int minutes = 0;
    
    cout<<"Enter the number of hours: ";
    cin>>hours;
    
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
    
    print_formatted_time(hours, minutes);
    
    return 0;
}

void print_formatted_time(int hours, int minutes)
{
    cout<<"Time: "<<hours<<":"<<minutes<<endl;
}