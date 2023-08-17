#include <bits/stdc++.h>
using namespace std;

// shush gharbi

int main(){
	int n, a, b, c, d, f = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		f = 0;
		cin >> a >> b >> c >> d;
		if (b > a) f++;
		if (c > a) f++;
		if (d > a) f++;
		
		cout << f << endl;
	}
}
