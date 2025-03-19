#include <iostream>

using std::string,std::cout;
using str=string;
int main()
{
    str cars[]={"Corvette","Maseratti","Ford Focus"};
    for(str  car_names : cars){
        cout<<car_names<<'\n';
    }
    // cout<<cars[-1];      This is not valid
}