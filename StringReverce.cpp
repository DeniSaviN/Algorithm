#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char string[] = "Hello, World";
	int length = strlen(string);
	int temp, i, j;

	for(int i = 0, j = length - 1; i < j; i++, j--){
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}

	for(int i = 0; i < length; i++){
		cout << string[i] << " ";
	}
	
	return 0;
}