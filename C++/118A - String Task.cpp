#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char t;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        t = (char)(tolower(s[i]));
        if (t !=  'a' && t !=  'o' && t !=  'y' && t !=  'e' && t !=  'u' && t !=  'i')
            cout << "." << t;
    }

    return 0;
}
