#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    int n;
    srand(time(0));
    cout << "Enter array size: ";
    cin >> n;
    vector<vector<int>> array(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = (rand() % 200) - 100;
        }
    }

    int diagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array[i][j] << "\t"; 
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        diagonalSum += array[i][i];
    }

    cout << "Sum of the elements on the diagonal: " << diagonalSum << endl;

    return 0;
}
