#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char b[] = {'c', 'o', 'd', 'e', 'f', 'r' , 'c' , 's'}, c;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> c;
		bool t = any_of(begin(b), end(b),
                        [&](int i) {
                            return i == c;
                        });
                        
		if (t){
			cout << "YES" << endl;
		} 
		else cout << "NO" << endl;
	
	}    
    return 0;
}
