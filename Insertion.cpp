#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, k;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to insert: ";
    cin >> k;

    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> pos;
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = k;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
