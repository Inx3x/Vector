#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int*> NumberVector;
	int input = 10;
	NumberVector.push_back(&input);
	int input_2 = 8;
	NumberVector.push_back(&input_2);

	cout << *NumberVector.front() << endl;
	cout << *NumberVector.back() << endl;
	cout << *(*(NumberVector.begin())) << endl;
	cout << *(*(NumberVector.end()-1)) << endl;
	return 0;
}
//update_2