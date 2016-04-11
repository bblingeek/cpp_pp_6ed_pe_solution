#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    long long input_seconds = 0;
    int days = 0, hours = 0, minutes = 0, seconds = 0;
    
    cout<<"Enter the number of seconds: ";
    cin>>input_seconds;
    
    cout<<input_seconds<<" seconds = ";
    
    days = input_seconds / (60 * 60 * 24);
    input_seconds -= days * 60 * 60 * 24;
    cout<<days<<" days, ";
    
    hours = input_seconds / (60 * 60);
    input_seconds -= hours * 60 * 60;
    cout<<hours<<" hours, ";
    
    minutes = input_seconds / 60;
    input_seconds -= minutes * 60;
    cout<<minutes<<" minutes, ";
    
    seconds = input_seconds;
    cout<<seconds<<" seconds"<<endl;
    
    return 0;
}
