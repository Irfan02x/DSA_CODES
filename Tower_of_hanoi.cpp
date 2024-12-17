#include<iostream>
using namespace std;

void tower(int n, char A, char B, char C) {
    if (n == 0) {
        return;
    }
    if (n == 1) {
        cout << "Moving ring 1 from " << A << " to " << C << endl;
    } else {
        tower(n - 1, A, C, B);
        cout << "Moving ring " << n << " from " << A << " to " << C << endl;
        tower(n - 1, B, A, C);
    }
}

int main() {
    int n = 2;
    tower(n, 'A', 'B', 'C');
    return 0;
}