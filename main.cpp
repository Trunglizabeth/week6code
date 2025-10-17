#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Câu 1: Tính tổng các phần tử của ma trận
int sumMatrix(const vector<vector<int>>& mat) {
    int sum = 0;
    for (auto& row : mat)
        for (int val : row)
            sum += val;
    return sum;
}

// Câu 2: Tính tổng từng hàng
vector<int> sumRows(const vector<vector<int>>& mat) {
    vector<int> result;
    for (auto& row : mat) {
        int s = 0;
        for (int val : row) s += val;
        result.push_back(s);
    }
    return result;
}

// Câu 3: Sắp xếp mảng 1D bằng Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Câu 4: Tìm phần tử nhỏ nhất trong ma trận
int minMatrix(const vector<vector<int>>& mat) {
    int mn = mat[0][0];
    for (auto& row : mat)
        for (int val : row)
            mn = min(mn, val);
    return mn;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> mat[i][j];

    cout << sumMatrix(mat) << endl;

    vector<int> rowSums = sumRows(mat);
    for (int x : rowSums) cout << x << " ";
    cout << endl;

    vector<int> all;
    for (auto& row : mat)
        for (int x : row)
            all.push_back(x);
    bubbleSort(all);
    for (int x : all) cout << x << " ";
    cout << endl;

    cout << minMatrix(mat) << endl;

    return 0;
}
