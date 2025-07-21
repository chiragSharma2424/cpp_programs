#include<iostream>
using namespace std;
void inputArray(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int findMax(int arr[][3], int row, int col) {
    int max = arr[0][0];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}

void printRowSum(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
        }
        cout << "sum of " << i << " row is: " << sum << endl;
    }
}

void printColSum(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j <col; j++) {
            sum = sum + arr[j][i];
        }
        cout << "sum of " << i << " col is: " << sum << endl;
    }
}

void printSumOfWholeMatrix(int arr[][3], int row, int col) {
    int sum = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
        }
    }
    cout << "sum of whole matrix is: " << sum << endl;
}

int findMin(int arr[][3], int row, int col) {
    int min = arr[0][0];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    return min;
}


// printing daoigonal of matrix;
void printDaigonal(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

// zero matrix
void zeroMatrix(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            arr[i][j] = 0;
        }
    }
    printArray(arr, 3, 3);
}

// upper traingular matrix
void upperTriangular(int arr[][3], int row, int col) {
    cout << "printing upper traingular matrix" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i < j) cout << arr[i][j] << " ";
            else  cout << 0 << " "; 
        }
        cout << endl;
    }
}

// lower traingular matrix
void lowerTraingular(int arr[][3], int row, int col) {
    cout << "Printing lower traingular matrix" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i > j) cout << arr[i][j] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}


// unit matrix -> matlab daigonal me 1 hona chahiye
void unitMatrix(int arr[][3], int row, int col) {
    cout << "Printing unit matrxi" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
        cout << endl;
    }
    printArray(arr, 3, 3);
}


// traingular matrix
void traingularMatrix(int arr[][3], int row, int col) {
    cout << "printing traingular matrix" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i <= j) cout << arr[i][j] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}
int main() {
    // declaration of 2d array
    // int arr[3][3] =
    // rows -> 3, indexs are -> 0, 1, 2
    // cols -> 3, index are -> 0, 1, 2
    // arr[0][0] = 24;
    // cout << arr[0][0] << endl;
    // cout << arr[0][1] << endl;


    //  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //  for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    //  }

    // int arr[3][3] = {10,2,3,4,5,6,7,8,9};
    // for(int i = 0; i < 3; i++) {
    //     cout << arr[0][i] << " ";
    // }


    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }




    // int row,col;
    // cout << "Enter number of rows: ";
    // cin >> row;
    // cout << "Enter number of coloumns: ";
    // cin >> col;
    // int arr[row][col];
    // for(int i = 0; i < row; i++) {
    //     for(int j = 0; j < col; j++) {
    //         cin >> arr[i][j];
    //     }
    // }
    // // printing the array
    // for(int i = 0; i < row; i++) {
    //     for(int j = 0; j < col; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // int row,col;
    // cout << "Enter number of rows: ";
    // cin >> row;
    // cout << "Enter number of coloumns: ";
    // cin >> col;
    // int arr[row][col];


    int arr[3][3];
    inputArray(arr, 3, 3);
    cout << endl;
    printArray(arr, 3, 3);
    int ans = findMax(arr, 3, 3);
    cout << "max is: " << ans << endl;
    printRowSum(arr, 3, 3);
    printSumOfWholeMatrix(arr, 3, 3);
    printColSum(arr, 3, 3);
    int ans2 = findMin(arr, 3, 3);
    cout << "minimum element is: " << ans2 << endl;
    cout << "daigonal of matrix are: ";
    printDaigonal(arr, 3, 3);
    cout << endl;
    upperTriangular(arr, 3, 3);
    lowerTraingular(arr, 3, 3);
    unitMatrix(arr, 3, 3);
    cout << endl;
    zeroMatrix(arr, 3, 3);
    return 0;
}