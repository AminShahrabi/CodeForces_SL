#include <bits/stdc++.h>
using namespace std;

// shush gharbi

int main(){
	int a, b, c; 
	cin >> a >> b >> c;

	
	while (1){
		if (b >= a * 2 && c >= a * 4){
			break;
		}
		a--;
	}
	while (b > a * 2) b--;
	while (c > a * 4) c--;
	cout << a + b + c;
	
	
} 
