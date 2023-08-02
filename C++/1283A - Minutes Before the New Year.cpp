#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, h[2];
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		if (b == 0){
			h[0] = 24 - a;
			h[1] = 0;
		}
		else {
			h[0] = 23 - a;
			h[1] = 60 - b;
		}
		
		cout << h[0] * 60 + h[1] << endl;
		}

}
