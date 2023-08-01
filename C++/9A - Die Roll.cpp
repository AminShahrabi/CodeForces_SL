#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string p[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << p[max(a, b) - 1] << endl;
}
