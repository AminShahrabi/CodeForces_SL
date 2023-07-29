#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int a, b, y = 1;
    cin >> a >> b ;
    while (1){
        a = a * 3;
        b = b * 2;
        if (a > b){
            cout << y;
            break;
        }
        else y++;
    }

    return 0;
}
