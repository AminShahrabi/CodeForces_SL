// ahmad ake eno mikhoni fahmidam ke kod ro copy kone
#include <bits/stdc++.h>

#define c cout

using namespace std;
int main(){
	int t;
	string temp;
	
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> temp;
		if (temp == "bca" || temp == "cab") cout << "NO" <<endl;
		else cout << "YES" << endl;
	}
	
}
