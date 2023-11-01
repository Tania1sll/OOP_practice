#pragma once
template <typename T>
class Vector {
private:
    T* array;
    int size;
    int capacity;

public:
    Vector() : size(0), capacity(10) {
        array = new T[capacity];
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    void push_back(T element) {
        if (size == capacity) {
            T* newArray = new T[capacity * 2];
            for (int i = 0; i < size; i++) {
                newArray[i] = array[i];
            }
            delete[] array;
            array = newArray;
            capacity *= 2;
        }
        array[size++] = element;
    }

    void pop_back() {
        if (size > 0)
            size--;
    }

    T at(int index) {
        if (index >= 0 && index < size) {
            return array[index];
        }
    }

    T operator[](int index) {
        return at(index);
    }

    ~Vector() {
        delete[] array;
    }
};

