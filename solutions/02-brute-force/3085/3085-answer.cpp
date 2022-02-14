#include <iostream>

using namespace std;

int n;
char** arr;
int answer = 0;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void check_row(int idx) {
    char current = arr[idx][0];
    int current_max = 1;

    for (int col = 1; col < n; ++col) {
        if (current == arr[idx][col])
            current_max++;
        else {
            answer = answer < current_max ? current_max : answer;
            current = arr[idx][col];
            current_max = 1;
        }
    }

    answer = answer < current_max ? current_max : answer;
}

void check_col(int idx) {
    char current = arr[0][idx];
    int current_max = 1;

    for (int row = 1; row < n; ++row) {
        if (current == arr[row][idx])
            current_max++;
        else {
            answer = answer < current_max ? current_max : answer;
            current = arr[row][idx];
            current_max = 1;
        }
    }

    answer = answer < current_max ? current_max : answer;
}

int main() {
    cin >> n;

    arr = new char*[n];
    for (int i = 0; i < n; ++i)
        arr[i] = new char[n];
    for (int row = 0; row < n; ++row)
        for (int col = 0; col < n; ++col)
            cin >> arr[row][col];

    for (int i = 0; i < n; ++i) {
        check_row(i);
        check_col(i);
    }

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n - 1; ++col) {
            swap(arr[row][col], arr[row][col + 1]);
            check_row(row);
            check_col(col);
            check_col(col + 1);
            swap(arr[row][col], arr[row][col + 1]);
        }
    }

    for (int row = 0; row < n -1; ++row) {
        for (int col = 0; col < n; ++col) {
            swap(arr[row][col], arr[row + 1][col]);
            check_row(row);
            check_row(row + 1);
            check_col(col);
            swap(arr[row][col], arr[row + 1][col]);
        }
    }

    cout << answer << endl;
}
