#include <iostream>
/*
- If , else if , else;
- Switch case
*/
using namespace std;

int main()
{
   
    char letter='R';

    cout<<letter<<endl;
    cout<<"Enter just one character"<<endl;
    cin>>letter;

    switch (letter)             //Can use int type too
    {
        case 'A':
        case 'a':
        cout<<"Hey your A";
        break;
        
        case 'b':
        case 'B':
        cout<<"Hey your B BAAAD";
        break;   
        
        case 'c':
        case 'C':
        cout<<"Hey your C SUCKS";
        break;
        
        case 'd':
        case 'D':
        cout<<"Hey your D TRASH";
        break;
    default:
        cout<<"You dont type a letter between A-D";
        break;
    }
    int a=13,b=45;
    int max=(a>b)?a:b;  //ternary operator  (statement) ? expressionTrue : expressionFalse;
    cout<<endl<<"max: "<<max <<endl ;

    
    return 0;
}
