#include <iostream>

using namespace std;


int factorialIterative(int n) {

    if (n == 0) return 1;
    int result = 1;
    for (int i=1; i<=n; i++) {
        result *= i;
    }
    return result;

}

int factorialRecursive(int n) {

    if (n == 0) return 1;
    return factorialRecursive(n-1)*n;
}


int fibonacciIterative(int n) {

    if (n == 0) return 0;
    if (n == 1) return 1;

    int f0 = 0;
    int f1 = 1;
    for (int i = 2; i<=n; i++) {
        int temp = f0;
        f0 = f1;
        f1 = temp+f1;
    }
    return f1;

}

int fibonacciTailRecursiveHelper(int n, int f0, int f1) {

    if (n == 0) return f0;
    return fibonacciTailRecursiveHelper(n-1, f1, f0 + f1);

}

int fibonacciTailRecursive(int n) {
    return fibonacciTailRecursiveHelper(n, 0, 1);
}

int fibonacciRecursive(int n) {

    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);

}




int main() {

    cout << "Hello World" << endl;

    cout << "factorialIterative(0) = " << factorialIterative(0) << endl;
    cout << "factorialIterative(1) = " << factorialIterative(1) << endl;
    cout << "factorialIterative(2) = " << factorialIterative(2) << endl;
    cout << "factorialIterative(3) = " << factorialIterative(3) << endl;
    cout << "factorialIterative(4) = " << factorialIterative(4) << endl;

    cout << "factorialRecursive(0) = " << factorialRecursive(0) << endl;
    cout << "factorialRecursive(1) = " << factorialRecursive(1) << endl;
    cout << "factorialRecursive(2) = " << factorialRecursive(2) << endl;
    cout << "factorialRecursive(3) = " << factorialRecursive(3) << endl;
    cout << "factorialRecursive(4) = " << factorialRecursive(4) << endl;

    cout << "fibonacciIterative(0) = " << fibonacciIterative(0) << endl;
    cout << "fibonacciIterative(1) = " << fibonacciIterative(1) << endl;
    cout << "fibonacciIterative(2) = " << fibonacciIterative(2) << endl;
    cout << "fibonacciIterative(3) = " << fibonacciIterative(3) << endl;
    cout << "fibonacciIterative(4) = " << fibonacciIterative(4) << endl;
    cout << "fibonacciIterative(5) = " << fibonacciIterative(5) << endl;
    cout << "fibonacciIterative(10) = " << fibonacciIterative(10) << endl;
    cout << "fibonacciIterative(50) = " << fibonacciIterative(50) << endl;

    cout << "fibonacciTailRecursive(0) = " << fibonacciTailRecursive(0) << endl;
    cout << "fibonacciTailRecursive(1) = " << fibonacciTailRecursive(1) << endl;
    cout << "fibonacciTailRecursive(2) = " << fibonacciTailRecursive(2) << endl;
    cout << "fibonacciTailRecursive(3) = " << fibonacciTailRecursive(3) << endl;
    cout << "fibonacciTailRecursive(4) = " << fibonacciTailRecursive(4) << endl;
    cout << "fibonacciTailRecursive(5) = " << fibonacciTailRecursive(5) << endl;
    cout << "fibonacciTailRecursive(10) = " << fibonacciTailRecursive(10) << endl;
    cout << "fibonacciTailRecursive(50) = " << fibonacciTailRecursive(50) << endl;

    cout << "fibonacciRecursive(0) = " << fibonacciRecursive(0) << endl;
    cout << "fibonacciRecursive(1) = " << fibonacciRecursive(1) << endl;
    cout << "fibonacciRecursive(2) = " << fibonacciRecursive(2) << endl;
    cout << "fibonacciRecursive(3) = " << fibonacciRecursive(3) << endl;
    cout << "fibonacciRecursive(4) = " << fibonacciRecursive(4) << endl;
    cout << "fibonacciRecursive(5) = " << fibonacciRecursive(5) << endl;
    cout << "fibonacciRecursive(10) = " << fibonacciRecursive(10) << endl;
    // cout << "fibonacciRecursive(50) = " << fibonacciRecursive(50) << endl;
}