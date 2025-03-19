#include <iostream>

using std::cout, std::cin, std::string, std::getline,std::endl;

int main()
{
    string fullname;
    cout << "Please enter your full name:\n";
    getline(cin, fullname);

    if (fullname.length() == 0)

        cout << "You didn't entered your name.";
    else if (fullname.length() < 20)
    {
        cout << "Hello " << fullname << '\n';
        
        fullname.append("@gmail.com");
        cout << "Your new e-mail is: " << fullname<<endl;

        cout<<"The first caracter is a: "<<fullname.at(0)<<endl;      //to find what caracter is on position 0
        
        fullname.insert(0,"contato_");
        cout<<fullname<<endl;

        fullname.erase(0,8);
        cout<<fullname<<endl;

        cout<<fullname.find(' ')<<endl;
    }
    else
        cout << "Your name is bigger than 12 characters.";
}