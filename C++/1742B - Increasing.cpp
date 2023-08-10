// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, num, temp;
	set <int> babat;
	
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> num;
		for(int i = 0; i < num; i++){
			cin >> temp;
			babat.insert(temp);
		}
		if (babat.size() == num) cout << "YES" << endl;
		else cout << "NO" << endl;
		babat.clear();
	}

}
