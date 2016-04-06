#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    double dist_in_furlongs = 0.0;
    
    cout<<"Enter distance (in furlongs): ";
    cin>>dist_in_furlongs;
    
    cout<<"Converted distance (in yards): "<<dist_in_furlongs * 220<<endl;
    
    return 0;
}
