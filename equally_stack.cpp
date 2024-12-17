#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int sun = 0;
    for (int i = 0; i < size; i++) {
        sun += arr[i];
    }
    return sun;
}

int equal(int &ad, int &add, int &dd, int arr1[], int arr2[], int arr3[],int a,int b ,int c) {
    while (ad != add || add != dd) {
        if (ad > dd && ad > add) {
            arr1[a-1]-1;
        } else if (add > ad && add >dd) {
            arr2[b-1]-1;
        } else if (dd > add && dd > ad) {
            arr3[c-1]-1;
        }
        ad= sum(arr1,3);
        add= sum(arr2,3);
        dd= sum(arr3,2);
    }
    return 0;
}

int print(int arr1[], int arr2[], int arr3[]) {
    cout << "arr1: ";
    for (int i = 0; i < 3; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "arr2: ";
    for (int i = 0; i < 3; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "arr3: ";
    for (int i = 0; i < 2; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}

int main() {
    int a,b,c;
    int arr1[a] = {4, 3, 3};
    int arr2[b] = {2, 5, 8};
    int arr3[c] = {4, 3};

    int ad = sum(arr1, a);
    int add = sum(arr2, b);
    int dd = sum(arr3, c);

    cout << ad << " " << add << " " << dd << endl;

    int equ = equal(ad, add, dd, arr1, arr2, arr3, a, b, c);
    int show = print(arr1, arr2, arr3);

    return 0;
}
