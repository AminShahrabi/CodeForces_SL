#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == 1){
            cout << "HARD";
            break;
        }
        
        else if (a == 0 && i == n - 1){
            cout << "EASY";
        }
    }

    return 0;
}
