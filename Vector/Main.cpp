#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int*> NumberVector;
	int input = 10;
	NumberVector.push_back(&input);
	input = 8;
	NumberVector.push_back(&input);

	cout << *NumberVector.front() << endl;
	cout << *NumberVector.back() << endl;
	return 0;
}

//������ ��Ȯ�� �ӿ���?