#include <iostream>
#include<math.h>
#include<vector>
#include<ctime>

using namespace std;
int main()
{
	int b = 0, c = 0;
	srand(time(0));
	cout << "Enter number of elements: ";
	cin >> c;
	vector<int> array;
	for (int i = 0; i < c; i++) {
		array.push_back((rand() % 200) - 100);
		cout << array[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < c; i++) {
		if (array[i] < 0) {
			b += array[i];
		}
	}
	cout << "Sum of all the negative elements equals " << b;
	return 0;
}
