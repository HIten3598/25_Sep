#include <iostream>

class Matrix {
private:
    int size;
    int* data;

public:
    // Constructor to initialize the matrix with size
    Matrix(int s) : size(s), data(new int[s]) {}

    // Copy constructor
    Matrix(const Matrix& other) : size(other.size), data(new int[other.size]) {
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    // Destructor to release memory
    ~Matrix() {
        delete[] data;
    }

    // Overloaded + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            std::cerr << "Error: Matrices of different sizes cannot be added." << std::endl;
            // Returning a matrix with size 0 to indicate an error condition
            return Matrix(0);
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create two matrices
    Matrix matrix1(5);
    Matrix matrix2(5);

    // Initialize matrices with some values
    for (int i = 0; i < 5; ++i) {
        matrix1.display();
        matrix2.display();
    }

    // Perform matrix addition using operator overloading
    Matrix resultMatrix = matrix1 + matrix2;

    // Display the result matrix
    std::cout << "Result Matrix:" << std::endl;
    resultMatrix.display();
}