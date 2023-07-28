#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, diff;
    string input;
    cin >> n;
    for (int i = 0; i < n; i++){
        diff = 0;
        cin >> input;
        for (int j = 0; j < 10; j++){
            if ("codeforces"[j] != input[j]) diff++;
        }
        cout << diff << endl;
    }
    return 0;}
