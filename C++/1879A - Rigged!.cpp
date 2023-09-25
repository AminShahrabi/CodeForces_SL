#include <iostream>
using namespace std;

int main(){
	int num, n, d = 0;
	int s[1000], e[1000];
	cin >> n;
	for (int j = 0 ; j < n; j++){
		cin >> num;
		d = 0;
		for (int i = 0; i < num; i++){
			cin >> s[i] >> e[i];
			if (i > 0){
				if (s[i] >= s[0] && e[i] >= e[0]){
					d++;
				}
			}
		}
		if (d == 0) cout << s[0] << endl;
		else cout << -1 << endl;
		
	}
}
	
	
