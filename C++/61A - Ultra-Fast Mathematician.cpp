#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num, num2;
    cin >> num >> num2;
    for (int i = 0; i < num.size(); i++){
        if (num[i] == num2[i]) cout << 0;
        else cout << 1;
    }
}
