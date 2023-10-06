#include <bits/stdc++.h>
using namespace std;

// from the pain
// taking my message from the vain
// pain
// you made me you made me a believer 
// believer 
// pain
// let them rain
// it came from
// pain
// believer
// send the prayer to the ones above
int main(){
	int a, b, c, n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a >> b >> c;
		b = b + c;
		if (a > b){
			cout << b + b + 1 << endl;
		}
		else if (b > a){
			cout << a + a - 1 << endl;
		}
		else cout << a + b - 1 << endl;
}
	

	
}
