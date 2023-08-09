// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, ans;
	int n;
	cin >> n;
	for (int i = 0 ; i < n; i++){
		cin >> a >> b;
		
		if (b == a){
			cout << 0 << endl;
			continue;
		}
		ans = 1 + ((abs(b - a) - 1) / 10);
		cout << ans << endl;
		
	}
}
