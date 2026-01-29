///palindrome
//12321----12321
#include <iostream>
using namespace std;
int main(){
    int origin ,ans = 0 ;
    int n;
 
    cin >> n ;
   origin = n;// store the real value
    while( n != 0){
        ans= ans*10 + n%10;
        n= n/10;
    }
    if (ans == origin)
    {
       cout << ans << " It is a palindrome number" << endl ;
    }else{
        cout << ans << " It is not a palindrome number" << endl;
    }
    
  
}