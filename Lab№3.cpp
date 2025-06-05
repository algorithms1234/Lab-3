#include <iostream>
#include "output_table.h"

using namespace std;

double calculateY(double x, int n) {
    if (x <= 0) {
        double productResult = 1;
        for (int i = 0; i <= n - 1; i++) {
            productResult *= (pow(i, 2) - x);
        }
        return x + productResult;
    }
    else {
        double sumResult = 0;
        for (int i = 1; i <= n - 1; i++) {
            for (int j = 0; j <= n - 1; j++) {
                sumResult += x / (i + j);
            }
        }
        return sumResult;
    }
}

double squareX(double x, int n) {
    return x * x;
}

int main() {
    double start, end, step;
    int n;

    cout << "Enter start, end, step, and n: ";
    cin >> start >> end >> step >> n;

    cout << "\nTable for calculateY:" << endl;
    outputTable(start, end, step, n, calculateY);

    cout << "\nTable for squareX:" << endl;
    outputTable(start, end, step, n, squareX);

    return 0;
}
