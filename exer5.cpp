#include <iostream>
using namespace std;

int fatorial (int n) {
	int cont, fatorial = 0, aux = n - 1;
	cont = n;
	if (n == 0){
		fatorial = 1;
	}
	while (aux >= 1) {
		fatorial = n * aux;
		n = fatorial;
		cont++;
		aux--;
	}
	return fatorial;
}

int main () {
	int n;
	
	cin >> n;
	
	cout << fatorial(n) << endl;
	
	return 0;
}
