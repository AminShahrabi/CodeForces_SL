#include <bits/stdc++.h>
using namespace std;

// shush gharbi

int main(){
	int temp, n, p, untreat = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> temp;
		if (temp == - 1){
			p -= 1;
		}
		else p += temp;
		
		if (p < 0) {
			untreat++;
			p = 0;
		}
	}
	
	cout << untreat;
	
}
