// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int babat;
	int a = 0, b = 0, c = 0, temp, temp2, temp3;
	
	cin >> babat;
	for (int i = 0; i < babat; i++){
		cin >> temp;
		cin >> temp2;
		cin >> temp3;
		a += temp;
		b += temp2;
		c += temp3;
	}
	
	if (a == 0 && b == 0 && c == 0) cout << "YES";
	else cout << "NO";
	
}
