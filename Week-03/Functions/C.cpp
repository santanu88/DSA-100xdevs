#include <iostream>
using namespace std;
int printNfac ( int N){
for (int  i = N ; i >=1 ; i--)
{
    if( N % i == 0){
    cout << i << " " ;
    }
}
return 0;

}

int main(){
    int N ;
    cin >> N;
    printNfac(N);
}