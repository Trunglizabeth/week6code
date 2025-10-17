#include <iostream>
using namespace std;

// Task 1: Sum of all elements in a matrix
int sumMatrix(int a[][100], int n, int m) {
    // TODO: Write your code here
    return 0;
}

// Task 2: Sum of each row
void sumRows(int a[][100], int n, int m, int b[]) {
    // TODO: Write your code here
}

// Task 3: Bubble sort for 1D array
void bubbleSort(int arr[], int n) {
    // TODO: Write your code here
}

// Task 4: Find the smallest element in the matrix
int minMatrix(int a[][100], int n, int m) {
    // TODO: Write your code here
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // Task 1
    cout << sumMatrix(a, n, m) << endl;

    // Task 2
    int rowSum[100];
    sumRows(a, n, m, rowSum);
    for (int i = 0; i < n; i++)
        cout << rowSum[i] << " ";
    cout << endl;

    // Task 3
    int arr[10000], k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[k++] = a[i][j];

    bubbleSort(arr, k);
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Task 4
    cout << minMatrix(a, n, m) << endl;

    return 0;
}
