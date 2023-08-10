// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int num, n, temp;
	string a, b;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		temp = 0;
		cin >> num;
		cin >> a >> b;
		for (int j = 0; j < num; j++){
			if (a[j] == b[j]) continue;
			else if ((a[j] == 'G' || a[j] == 'B' ) && (b[j] == 'G' || b[j] == 'B' )) continue;
			else{
				cout << "NO" << endl;
				temp++;
				break;
			}
		}
		if (temp == 0) cout << "YES" << endl;
	}
}
