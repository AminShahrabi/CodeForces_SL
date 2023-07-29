#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    int a, b = 1, d = 0;
    cin >> a;
    
    while (1)
	{
    	d = 0;
        c = to_string(a + b);
        sort(c.begin(),c.end());
        
        for (int i = 0; i < c.size() - 1; i++){
        	for (int j = i + 1; j < c.size(); j++){
            	if (c[i] == c[j]) {
                	d++;
            	}
        	}
    	}	
    	if (d > 0) b++;
        else {
            cout << a + b;
            break;
        }        
    }
}
    
