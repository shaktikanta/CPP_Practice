#include <iostream>

using namespace std;

void allocate_array(int **&arr, int &row, int &col){
    //array of pointers
    arr = new int*[row];
    for(int i = 0; i < row; i++)
    {
        // *(arr+i) = new int[col];
        arr[i] = new int[col];
    }
}

void assign_values(int **arr, int row, int col){
    //assigning the values
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            // *(*(arr+i)+j) = (i+1) * (j+1);
            arr[i][j] = (i+1) * (j+1);
        }
    }
}

void print_array(int **arr, int row, int col){
    //for printing the values
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            // cout << " arr["<< i << "][" << j <<"]=" << *(*(arr+i)+j) << std::ends;
            cout << " arr["<< i << "][" << j <<"]=" << arr[i][j];
        }
        cout << endl;
    }
}

