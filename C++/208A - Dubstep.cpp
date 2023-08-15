#include <bits/stdc++.h>

// shush gharbi

using namespace std;

int main()
{	
	string in, out, temp = "";
	int num = 0, space = 0;
	cin >> in;
	for (int i = 0; i < in.size(); i++){
		if (in[i] == 'W' && in[i + 1] == 'U' && in[i + 2] == 'B'){
			num = 3;
			if (out.size() != 0)
			space = 1;
		}

		
		if (num > 0){
			num--;
			
			if (space > 0 && out[out.size() - 1] != ' '){
				out += ' ';
				space = 0;
			}

		}
		else out += in[i];
}
		
	cout << out;
	}
