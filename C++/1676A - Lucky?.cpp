#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string b;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> b;
        if ((int)(b[0]) + (int)(b[1]) + (int)(b[2]) == (int)(b[3]) + (int)(b[4]) + (int)(b[5])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
