#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int num;
    string n;
    cin >> n;
    
    for (int i = 0; i < n.size(); i++){
        if (n[i] == '7' || n[i] == '4') num++;
    }
    if (num == 7 || num == 4) cout << "YES";
    else cout << "NO";

    return 0;
}
