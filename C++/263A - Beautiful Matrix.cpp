#include <iostream>
using namespace std;

int main()
{   
    int a, sum;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a;
            if (a == 1){
                sum += abs(2 - i);
                sum += abs(2 - j);
            }
        }
    }
    cout << sum;
    return 0;
}
