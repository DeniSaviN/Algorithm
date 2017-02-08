#include <iostream>
#include <vector>

using namespace std;

int binSearch(vector<int> numbers, int value){
	int size = numbers.size();
	int low = 0;
	int high = size - 1;

	while(low <= high){
		int mid = (low + high) / 2;
		if(value == numbers[mid]){
			cout << "Value " << value << " is located at index of " << mid << endl;
			return 0;
		}
		else if(value > numbers[mid]){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return 0;
}

int main(){
	vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	binSearch(numbers, 3);
}