#include <bits/stdc++.h>
using namespace std;


// shush gang

// baro bach shus daraye 150 medal talaye olampyad game
// hargone fahashi dar shus gharbi be shedat dayate punishment ast
// code ha kamelan herfe e va asarat talash yahe bi vaghfe bande ast
// agar khasting code ro copy conid fosh gozashtam dostan

int main(){
	int a, b, c, n;
	
	cin >> n;
	
	
	for (int i = 0;  i < n; i++){
		cin >> a >> b >> c;
		
		if (a + b >= 10) cout << "YES" << endl;
		else if (a + c >= 10) cout << "YES" << endl;
		else if (b + c >= 10) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}
