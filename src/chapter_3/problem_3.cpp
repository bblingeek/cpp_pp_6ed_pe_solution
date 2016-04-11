#include <iostream>
using namespace std;

const double one_degree = 60;
const double one_minute = 60;

int main(int argc, char** argv)
{
    double lat_deg = 0, lat_min = 0, lat_sec = 0;
    double lat_dec = 0;
    
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees: ";
    cin>>lat_deg;
    
    cout<<"Next, enter the minutes of arc: ";
    cin>>lat_min;
    
    cout<<"Finally, enter the seconds of arc: ";
    cin>>lat_sec;

    lat_dec = lat_deg + (lat_min / one_degree) + (lat_sec / (one_degree * one_minute));
    
    cout<<lat_deg<<" degrees, "<<lat_min<<" minutes, "<<lat_sec<<" seconds = "<<lat_dec<<" degrees"<<endl;
    
    return 0;
}
