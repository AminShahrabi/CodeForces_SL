#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, t = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> t;
		
		if (1900 <= t) cout << "Division 1" << endl;
		else if (1600 <= t) cout << "Division 2" << endl;
		else if (1400 <= t) cout << "Division 3" << endl;
		else if (t <= 1399) cout << "Division 4" << endl;
		
	}


}
