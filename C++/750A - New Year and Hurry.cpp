// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int q, time, t = 0;
	cin >> q >> time;
	
	for (int i = 1; i <= q; i++){
		if (i * 5 + time <= 240){
			t++;
			time += i * 5;
		}
		else break;
	}
	cout << t;
}
