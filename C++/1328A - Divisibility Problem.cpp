// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int test, a, b, temp;
	cin >> test;
	for (int i = 0; i < test; i++){
		cin >> a >> b;
		temp = a % b;
		if (temp == 0){
			cout << 0 << endl;
			continue;
		}
		else{
			cout << b - temp << endl;
		}
	}
}
