#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int n, a, d;
    string c;
    cin >> n >> c;
    
    for (int i = 0; i < c.size(); i++){
        if (c[i] == 'A') a++;
        if (c[i] == 'D') d++;
    }
    
    if (a > d) cout << "Anton";
    else if (a < d) cout << "Danik";
    else cout << "Friendship";
    
    return 0;
}
