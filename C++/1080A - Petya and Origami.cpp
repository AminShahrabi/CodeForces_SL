#include <bits/stdc++.h>
using namespace std;

// shush gharbi

int main(){
	int a, k, r = 0, g = 0, b = 0;
	cin >> a >> k;
	
	r = 2 * a;
	g = 5 * a;
	b = 8 * a;
	
	cout << ((r + k - 1) / k) + ((g + k - 1) / k) + ((b + k - 1) / k);
	
	
	
} 
