//reverse and store in a variable  
//12345
//5
#include <iostream>
using namespace std ;
int main(){
    int ans = 0 ;
    int n ;
    cin >> n;
    while ( n != 0)
    {
    ans = ans * 10 + n%10 ;
      n =n/10;
    }
    cout << ans << endl;
}