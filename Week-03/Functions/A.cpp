#include <iostream> 
using namespace std;

int PrintFun (int N){  
    for (int  i = 1; i <= N; i++)
    {
        cout << "I am learning functions" << endl;
    }
    return 0;
}

int main (){
    int N;
     cin >> N;
    PrintFun(N);
}