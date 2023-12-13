#include <iostream>

template<typename T>
class vectorClass {
    T *arr;
    int capacity;
    int current;

public:
    vectorClass() {
        arr = new T[1];
        capacity = 1;
        current = 0;
    }
    ~vectorClass() { delete[] arr; }

    void push(T data) {
        if (current == capacity) {
            T *temp = new T[2 * capacity];

            for (int i = 0; i < capacity; i++) {
                temp[i] = arr[i];
            }

            delete[] arr;
            capacity *= 2;
            arr = temp;
        }

        arr[current] = data;
        current++;
    }

    void pushByIndex(T data, int index) {
        if (index == capacity)
            pushByIndex(data);
        else
            arr[index] = data;
    }

    T get(int index) {
        // if index is within the range
        if (index < current)
            return arr[index];
        // if index is not within range
        return -1;
    }

    void pop() { current--; }


    int size() { return current; }

    int getCapacity() { return capacity; }

    void print() {
        for (int i = 0; i < current; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    bool empty() {
        return size() == 0;
    }

    T& back(){
        if (current > 0){
            return arr[current - 1];
        } else
            throw std::out_of_range("Vector is empty!");
    }
};