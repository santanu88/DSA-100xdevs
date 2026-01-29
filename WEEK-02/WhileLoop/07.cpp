//print or reverse the number
//3578-------8753
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    while (n != 0)
    {
      cout << n%10;
      n= n/10; // i will remobe the last digit
        
    }
    
}