#include <iostream>
using namespace std;

class Array2D {
private:
    int rows, cols;
    int** data;

public:
    Array2D(int r, int c) {
        rows = r;
        cols = c;

        data = new int*[rows];
        for (int i = 0; i < rows; i++)
            data[i] = new int[cols];
    }

    // Destructor
    ~Array2D() {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }

    // Indexing operator
    int* operator[](int i) {
        return data[i];
    }

    int getRows() { return rows; }
    int getCols() { return cols; }

    void input() {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> data[i][j];
    }
};

// Binary Search in 2D matrix
bool searchMatrix(Array2D& mat, int target) {
    int rows = mat.getRows();
    int cols = mat.getCols();

    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        int r = mid / cols;
        int c = mid % cols;

        if (mat[r][c] == target)
            return true;
        else if (mat[r][c] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main() {
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;

    Array2D mat(r, c);

    cout << "Enter matrix elements (sorted as per question):\n";
    mat.input();

    int target;
    cout << "Enter target: ";
    cin >> target;

    if (searchMatrix(mat, target))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
