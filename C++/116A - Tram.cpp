#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, minimi, sum = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cin >> b[i];
        sum += b[i] - a[i];
        if (sum > minimi) minimi = sum;
        
        
    }   
    cout << minimi;
    return 0;
}
