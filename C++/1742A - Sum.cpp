#include <bits/stdc++.h>
using namespace std;

int main()
{
	int  a, b, c, t, n;
	cin >> n;
	
	for (int i = 0 ; i < n; i++){
		cin >> a >> b >> c;
		if (a > c){
			t = c;
			c = a;
			a = t;
		}
		if (a > b){
			t = b;
			b = a;
			a = t;
		}
		if (b > c){
			t = c;
			c = b;
			b = t;
		}
		
		if (a + b == c){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
    return 0;
}
