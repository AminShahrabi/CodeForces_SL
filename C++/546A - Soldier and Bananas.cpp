#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int banana, price, dollar, need = 0;
    cin >> price >> dollar >> banana ;
    
    for (int i = 1 ; i <= banana ; i++){
        need = need + price * i;
    }
    if (dollar - need >= 0) cout << 0;
    else cout << abs(dollar - need);
    

    return 0;
}
