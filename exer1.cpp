#include <iostream>
#include <cmath>
using namespace std;

float Media (float n1, float n2){
	float media;
	media = (n1 + n2)/2;
	return media;
	}

int main(){
	float n1, n2;
	cin >> n1;
	cin >> n2;
	
	cout << Media(n1, n2) << endl;
	
	return 0;
}
