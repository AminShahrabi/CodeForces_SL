#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
    int cap, sma;
    string input;
    cin >> input;
    
    for (int i = 0; i < input.length(); i++){
        if (isupper(input[i])){
            cap++;
        }
        else sma++;
    }
    for (int i = 0; i < input.length(); i++){
        if (cap > sma){
            input[i] = toupper(input[i]);
        }
        else input[i] = tolower(input[i]);
    }
    
    cout << input;
    
    
    return 0;
}
