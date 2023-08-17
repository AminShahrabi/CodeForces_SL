#include <bits/stdc++.h>
using namespace std;

// shush gharbi

int main(){
	int n, k, l, c, d, p, nl, np, lit, cake, salt;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	lit = (k * l) / nl;
	cake = c * d;
	salt = p / np;
	
	// kod khoda vakili copy nis
	
	cout << min(lit, (min(cake , salt))) / n;
}
