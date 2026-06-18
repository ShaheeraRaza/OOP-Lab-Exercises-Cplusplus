#include <iostream>
using namespace std;
class Array2D {
private:
    int rows, cols;
    int** arr;
public:
    Array2D() {
        rows = 0;
        cols = 0;
        arr = nullptr;
    }
    Array2D(int r, int c) {
        rows = r;
        cols = c;

        arr = new int*[rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
        }
    }
    Array2D(const Array2D& other) {
        rows = other.rows;
        cols = other.cols;

        arr = new int*[rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                arr[i][j] = other.arr[i][j];
            }
        }
    }
    Array2D& operator=(const Array2D& other) {
        if (this != &other) {
            // Free old memory
            for (int i = 0; i < rows; i++)
                delete[] arr[i];
            delete[] arr;

            rows = other.rows;
            cols = other.cols;

            arr = new int*[rows];
            for (int i = 0; i < rows; i++) {
                arr[i] = new int[cols];
                for (int j = 0; j < cols; j++) {
                    arr[i][j] = other.arr[i][j];
                }
            }
        }
        return *this;
    }
    Array2D operator+(const Array2D& other) {
        Array2D result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.arr[i][j] = arr[i][j] + other.arr[i][j];
            }
        }
        return result;
    }
    Array2D operator*(const Array2D& other) {
        Array2D result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.arr[i][j] = arr[i][j] * other.arr[i][j];
            }
        }
        return result;
    }
    int* operator[](int i) {
        return arr[i];
    }
    ~Array2D() {
        for (int i = 0; i < rows; i++) {
            delete[] arr[i];
        }
        delete[] arr;
    }

    void input() {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> arr[i][j];
}
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    int getRows() { return rows; }
    int getCols() { return cols; }
};
int main() {
    Array2D A(2,2), B(2,2);

    cout << "Enter Matrix A:\n";
    A.input();

    cout << "Enter Matrix B:\n";
    B.input();

    Array2D C = A + B;
    cout << "Addition:\n";
    C.display();

    Array2D D = A * B;
    cout << "Multiplication:\n";
    D.display();

    return 0;
}
