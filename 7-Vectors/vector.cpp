#include <iostream>
#include <vector>

using std::string,std::cout,std::vector;


void vector_information(vector<float> vec);
int main()
{   
    vector<float> v1 = {1.123,2.0,3.2};
    vector_information(v1);
    v1.push_back(8);
    cout<<v1[3]<<" New size: "<<v1.size()<<'\n';
    

}

void vector_information(vector<float> vec)
{
    cout<<"Front element: "<<vec.front()<<'\n';
    cout<<"Back element:  "<<vec.back()<<'\n';
    cout<<"Size:  "<<vec.size()<<'\n';
    
}