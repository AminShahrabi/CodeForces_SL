// Amin Shahrabi Github
// https://github.com/AminShahrabi/CodeForces_Solutions
// Shush Gharbi

#include <bits/stdc++.h>
using namespace std;
int main(){
	int num, faces;
	string temp;
	cin >> num;
	for (int i = 0; i < num; i++){
		cin >> temp;
		if (temp == "Tetrahedron") faces += 4;
		else if (temp == "Cube") faces += 6;
		else if (temp == "Octahedron") faces += 8;
		else if (temp == "Dodecahedron") faces += 12;
		else if (temp == "Icosahedron") faces += 20;
	}
	cout << faces;
}
