#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int max[N];

    for (int i = 0; i < N; i++)
    {
        cin >> max[i];
    }
    
     long long ans = max[0] ,location=1;
    for (int i = 0; i < N; i++)
    {
        if (max[i] < ans)
        {
            ans = max[i];
            location= i+1;
        }
        
    }
    cout << ans << " " << location << endl;
    
}