#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    int num;
    cin >> input;
    sort(input.begin(), input.end());
    
    for (int i = 0; i < input.size(); i++){
        if (input[i] != input[i+1]){
            num++;
        }
    }   
    
    if (num % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
