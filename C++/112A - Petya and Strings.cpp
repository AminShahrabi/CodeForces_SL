#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string a, b;
    int diff = 0;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        if (toupper(a[i]) == toupper(b[i]));
        else {
            diff++;
            wchar_t a1 = cin.widen(toupper(a[i]));
            wchar_t b1 = cin.widen(toupper(b[i]));
            
            if (a1 > b1){
                cout << 1;
                break;
            }
            else {
                cout << -1;
                break;
            }
        }
    }
    if (diff == 0){
        cout << 0;
    }
    return 0;
}
