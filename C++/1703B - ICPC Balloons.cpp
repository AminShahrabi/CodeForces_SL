#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, len, numm, ballons = 0;
	string str;
	set<char> chars;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> len;
		cin >> str;
		numm = 0;
		ballons = 0;
		chars.clear();
		
		for (int j = 0; j < len; j++){
			chars.insert(str[j]);
			if (chars.size() > numm){
				numm = chars.size();
				ballons += 2;
			}
			else{
				ballons++;
			}
		}
		cout << ballons << endl;
	}
}
