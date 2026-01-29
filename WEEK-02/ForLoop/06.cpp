//hollow sqare
// print  a square
#include <iostream>
using namespace std;
int main(){
int n ;
cin >> n ;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++) /// here n should be tgake to print the number of columns
    {
        if (i==1 or i == n or j == 1 or j == n)
        {
            cout << "*" ;
        } else
        {
            cout << " " ;
        }
        
    }
    cout << endl;
}



}