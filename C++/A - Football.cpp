#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 0;
	char l, l2;
	string m;
	
	cin >> m;
	for (int i = 0; i < m.size(); i++){
		l = m[i];
		if (l != l2) {
			l2 = l; n = 0;
		}
		else n++;
		
		if (n >= 6) {
			cout << "YES";
			 return 0;
		}
	}


	cout << "NO";
	

}
