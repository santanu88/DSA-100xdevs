//count tne number of digit
#include <iostream>
using namespace std ;
int main (){
    int count = 0;
    int n ;
    cin >> n;
    while (n != 0)
    {
    count++ ;
        n =n/10;

    }
    
cout<< count; 
}