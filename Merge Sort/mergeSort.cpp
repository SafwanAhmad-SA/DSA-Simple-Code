#include<iostream>
using namespace std;

void merge(int left[], int leftSize, int right[], int rightSize, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] < right[j]) {
            result[k] = left[i];
            i++;
        }
        else {
            result[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        result[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        result[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return;
    }

    int mid = size / 2;

    int leftHalf[mid];
    int rightHalf[size - mid];

    for (int i = 0; i < mid; i++) {
        leftHalf[i] = arr[i];
    }

    for (int i = mid; i < size; i++) {
        rightHalf[i - mid] = arr[i];
    }

    mergeSort(leftHalf, mid);
    mergeSort(rightHalf, size - mid);

    merge(leftHalf, mid, rightHalf, size - mid, arr);
}

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, size);

    cout << "Sorted array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
