#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a;
    
    if (a % 2 == 0) cout << a / 2;
    else{
        b = ((a + 1) / 2) * -1;
        cout << b;
    } 

}
