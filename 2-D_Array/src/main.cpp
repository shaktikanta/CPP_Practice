#include "main.h"

//Dynamic 2-D array creation
int main()
{
    int row=0, col=0;
    cout << "Enter the no of rows and cols\n";
    cin >> row >> col;
    cout << row << " -- " <<col << endl;

    int **arr;
    allocate_array(arr, row, col);
    
    assign_values(arr, row, col);

    print_array(arr, row, col);    
    
    return 0; 
}