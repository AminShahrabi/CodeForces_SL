#include <bits/stdc++.h>
using namespace std;

int check_zero(int a){
	string babat = to_string(a);
		
	return babat.size()  - 1;
}

int main(){
	int a, out = 0, n, yes = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a;
		out = 0;
		yes = 0;
		
		if (a / 10 == 0){
			cout << a << endl;
		}
		else {
			out += check_zero((a * 10) / 10) * 9;
		
			string ba = to_string(a);
			
	
			out += ba[0] - '0';
				
			for (int j = 1; j <= ba.size() - 1; j++){
				if (ba[j] - '0' > ba[0] - '0'){
					yes = 0;
					break;
				}
				else if (ba[j] - '0' < ba[0] - '0'){
					yes++;
					break;
				}
			}
			
			if (yes > 0) out -= 1;
			
			cout << out << endl;
		}

	}
	

}
