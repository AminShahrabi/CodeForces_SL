#include <iostream>
using namespace std;
int main()
{
    int n, w;
    cin >> n;
    w = n / 5;
    n -= w * 5;

    if (n > 0){
        w += n / 4;
        n -= n / 4 * 4;}
    if (n > 0){
        w += n / 3;
        n -= n / 3 * 3;}
    
    if (n > 0){
        w += n / 2;
        n -= n / 2 * 2;}
                
    if (n > 0){
        w += n / 1;
        n -= n / 1 * 1;}
        
    cout << w;

}
