#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string sum;
    cin >> sum;
    int a[sum.size()], temp = 0, nums = 0;
    for (int i = 0; i < sum.size(); i++){
            a[i] = sum[i] - '0'; 
            nums++;
    }
    
    for (int i = 0; i < nums; i++){
        for (int j = i + 1; j < nums; j++){
            if(a[j] < a[i]) {
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
                
            }
        }
    }
    
    for (int i = 0; i < nums; i++){
        if (a[i] != -5){
            cout << a[i];
            if (i != nums - 1){
                cout << "+";
            }
        }
    }
    
    return 0;
}
