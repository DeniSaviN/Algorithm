#include <iostream>

using namespace std;

short int Prime(unsigned int n){
	if(n == 0 || n == 1) 
		return 0;
	for(unsigned int d = 2; d * d <= n; d++){
		if(n % d == 0)
			return 0;
	}
	return 1;
}

int main(){
	int n;

	cin >> n;
	if(Prime(n) == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}