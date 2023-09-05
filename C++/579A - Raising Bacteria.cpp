#include <bits/stdc++.h>
using namespace std;


// FROM SHUSH GANG

int main(){
	int x, all = 1, times = 0;
	cin >> x;
	
	while(x > 0){
		all = 1;
		if (x == 1){
			 times++;
			 x -= 1;
		}
		else {
			while (all < x){
				all = all * 2;
				if (all * 2 > x) x -= all;
			}
			times++;
			}
	}
	
	cout << times;

}
