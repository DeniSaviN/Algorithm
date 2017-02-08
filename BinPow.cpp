#include <iostream>

using namespace std;

int binPow (int a, int degree) {
	int result = 1;
	while (degree) {
		if (degree & 1)
			result *= a;
		a *= a;
		degree >>= 1;
	}
	return result;
}

int main(){
	int a, degree;

	cin >> a >> degree;
	cout << binPow(a, degree);

	return 0;
}