#include <iostream>?
using namespace std;
 int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    if (a>b && a>c)
    {
        cout << " max is " << a << endl;
    }else if (b>c && b>a)
    {
        cout << " max is " << b << endl;
    }else
    
     cout << " max is " << c << endl;
 }
//but here if two numbers we gwt same number 
 //a=5
 //b=5   is a is a more than b no its not so answer wiil c even it has lower value becuse 1st two logic will be false
 //so we have to give >=   if (a>=b && a>=c)..........}else if (b>=c && b>=a)