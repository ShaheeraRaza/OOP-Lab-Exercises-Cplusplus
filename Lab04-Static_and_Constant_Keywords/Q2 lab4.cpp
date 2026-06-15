#include <iostream>
using namespace std;
class DynamicArray {
private:
    int* arr;
    int capacity;
    int currentSize;
public:
    DynamicArray(int size) {
        capacity = size;
        currentSize = 0;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++)
            arr[i] = 0;
    }
    void push(int value) {
        if (currentSize < capacity) {
            arr[currentSize++] = value;
        } else {
            cout << "Array is full!" << endl;
        }
    }
    int size() const {
        return currentSize;
    }
    void display() const {
        for (int i = 0; i < currentSize; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    ~DynamicArray() {
        delete[] arr;
    }
};
int main() {
    DynamicArray obj(5);
    obj.push(10);
    obj.push(20);
    obj.push(30);

    cout << "Array elements: ";
    obj.display();

    cout << "Current Size: " << obj.size() << endl;
    return 0;
}






