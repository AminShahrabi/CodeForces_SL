#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string b;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> b;
        if (tolower(b[0]) == 'y' && tolower(b[1]) == 'e' && tolower(b[2]) == 's' ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
