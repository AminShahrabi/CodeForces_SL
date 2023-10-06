#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, all = 0;
	cin >> a;
	for(int i = 1; 1; i++){
		all += (i * (i + 1)) / 2;
		if (all == a){
			 cout << i;
			break;
		}
		else if (all > a){
			cout << i - 1;
			break;
		}
	}
			
}
