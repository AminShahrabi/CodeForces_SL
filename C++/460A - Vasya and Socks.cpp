#include <bits/stdc++.h>
using namespace std;

// shush gharbi

int main(){
	int a, b, t, d = 0;
	cin >> a >> b;
	t = b;
	
	while (1){
		a--;
		if (a < 0){
			cout << d;
			break;
		}
		d++;
		b--;
		if (b == 0){
			a += 1;
			b = t;
		}
	}
}
