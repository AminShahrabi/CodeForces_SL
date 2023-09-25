#include <bits/stdc++.h>
using namespace std;

// I am From shush
// ba efthekhar

int main(){
	int n, nums = 0;
	set<char> chars;
	cin >> n;
	string temp;
	for (int i = 0; i < n; i++){
		cin >> temp;
		nums = 1;
		chars.clear();
		for (int i = 0; i < temp.size(); i++){
			chars.insert(temp[i]);
			if (chars.size() > 3){
				chars.clear();
				nums++;
				chars.insert(temp[i]);
			}
		}
		cout << nums << endl;
	}
}
