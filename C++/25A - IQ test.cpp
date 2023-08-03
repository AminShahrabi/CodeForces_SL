#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, even = 0 , odd = 0, a, o , e;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a;
		if (a % 2 == 0){
			e = i;
			even++;
		}	
		
		else{
			odd++;
			o = i;
		}
			
	}

	if (even < odd)
		cout << e + 1;
	else
		cout << o + 1;
	

}
