#include <iostream>

/*
constants (const modificator) are used to read-only variables
this double colon ( :: ) are used as a scope resolution operator  is used to access
the identifiers such as variable names and function names defined inside some other
scope in the current scope.
*/
using std::cout,std::string,std::endl;
/*
*/
#include <vector>
typedef std::vector<std::pair<std::string, int>> pairlist_t;    // use '_t' to identify it's a type
using f_t=float;    //has the same meaning as typedef
/*
typedef is a alias to big writing types, in this case it will be switched to pairlist
*/
namespace namespace1{
    int pi=3;
    string ggg="hahaha name conflict wont happen and pi: ";
    string ggg2="im without the scope resolution operator, haha pi is more acurate now: ";
    float pi2=3.141592;
}

using namespace1::ggg2,namespace1::pi2; /* you just are able to use the namespace before declaring it
you can also declare that using namespace locally inside the main function 
*/
int main()
{
    string ggg="pi value is: ";
    const float pi=3.14;    //now I can't modify pi: can't do pi=3 or pi++
    cout<<ggg<<pi<<endl;    //this prints the values declared before      
    cout<<namespace1::ggg<<namespace1::pi<<'\n';    //this prints the values from the namespace
    cout<<ggg2<<pi2<<'\n';        //this prints the values from namespace but the adress is not needed
    cout<<"std::endl is the same that *backlash* n"<<endl;

    pairlist_t name23;
    f_t number1=34.332344234;
    cout<<number1<<'\n';
}