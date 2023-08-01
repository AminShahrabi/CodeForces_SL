#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d;
    int cal[4] = {a, b, c, d};
    
    string t;
    cin >> t;
    
    for (int i = 0; i < t.size(); i++){
        e += cal[(t[i] - '0') - 1];
    }
    cout << e;
    
    return 0;
}
