#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Chisla: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min_elem = arr[0];
    int max_elem = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min_elem) {
            min_elem = arr[i];
        }
        if (arr[i] > max_elem) {
            max_elem = arr[i];
        }
    }

    cout << "Min.element: " << min_elem << endl;
    cout << "Msx.element: " << max_elem << endl;
    return 0;
}
// я не смог сделать 2 и 3 задачу(
