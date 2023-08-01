#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n;
    long long d, t;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        t = max({a, b, c});
        d -= t - a;
        d -= t - b;
        d -= t - c;
        
       if (d > 0){
           if (d % 3 == 0){
               cout <<"YES" << endl;
           }
           else cout << "NO" << endl ;
       }
       else if (d == 0) cout << "YES" << endl;
       else cout << "NO" << endl;
    }
    return 0;
}
