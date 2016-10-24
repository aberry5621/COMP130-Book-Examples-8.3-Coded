//
//  main.cpp
//  COMP130 Book Examples 8.3 Coded
//
//  Created by ax on 10/24/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#define prog 6

#if(prog == 6)

// which row has the largest sum?

#include<iostream>
using namespace std;

int main() {
    
    cout << "Find row with the largest sum" << endl;
    
    // seed random
    srand(time(0));
    
    const int ROW_SIZE = 3;
    const int COL_SIZE = 4;
    int matrix[ROW_SIZE][COL_SIZE];
    
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int col = 0; col < COL_SIZE; col++) {
            matrix[row][col] = rand() % 100;
            cout << "Initializing matrix cell [" << row << "][" << col << "] with " << matrix[row][col] << endl;
        }
    }
    // end it all with a clean break
    cout << endl;
    
    // find largest sum row
    
    int max_row_sum = 0;
    int max_row_idx = 0;

    for (int col = 0; col < COL_SIZE; col++) {
        max_row_sum += matrix[0][col];
    }
    
    cout << "Row sum value for first row: " << max_row_sum << endl;
    
    for (int row = 1; row < ROW_SIZE; row++) {
        int current_row_sum = 0;
        for (int inner_col = 0; inner_col < COL_SIZE; inner_col++) {
            current_row_sum += matrix[row][inner_col];
        }
        
        cout << "Row sum value for row " << row << ": " << current_row_sum << endl;
        
        if (current_row_sum > max_row_sum) {
            max_row_sum = current_row_sum;
            max_row_idx = row;
        }
        
    }
    
    
    return 0;
    
}

#elif(prog == 5)

#include<iostream>
using namespace std;

int main() {
    
    cout << "Sum elements by columns" << endl;
    
    const int ROW_SIZE = 4;
    const int COL_SIZE = 5;
    int matrix[ROW_SIZE][COL_SIZE];
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; matrix[0][3] = 4; matrix[0][4] = 5;
    matrix[1][0] = 6; matrix[1][1] = 7; matrix[1][2] = 8; matrix[1][3] = 9; matrix[1][4] = 10;
    matrix[2][0] = 11; matrix[2][1] = 12; matrix[2][2] = 13; matrix[2][3] = 14; matrix[2][4] = 15;
    matrix[3][0] = 16; matrix[3][1] = 17; matrix[3][2] = 18; matrix[3][3] = 19; matrix[3][4] = 20;
    
    int overall_total = 0;
    
    for (int col = 0; col < COL_SIZE; col++) {
        int col_total = 0;
        {
            for (int row = 0; row < ROW_SIZE; row++) {
                col_total += matrix[row][col];
            }
            cout << "Sum for column: " << col << " " << col_total << endl;
            overall_total += col_total;
        }
    }
    
    cout << "Sum overall: " << overall_total << endl;
    
    return 0;
}


#elif(prog == 4)

#include <iostream>
using namespace std;

int main() {
    
    cout << "Sum All Elements of M Arrays" << endl;
    
    const int ROW_SIZE = 4;
    const int COL_SIZE = 5;
    int matrix[ROW_SIZE][COL_SIZE];
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; matrix[0][3] = 4; matrix[0][4] = 5;
    matrix[1][0] = 6; matrix[1][1] = 7; matrix[1][2] = 8; matrix[1][3] = 9; matrix[1][4] = 10;
    matrix[2][0] = 11; matrix[2][1] = 12; matrix[2][2] = 13; matrix[2][3] = 14; matrix[2][4] = 15;
    matrix[3][0] = 16; matrix[3][1] = 17; matrix[3][2] = 18; matrix[3][3] = 19; matrix[3][4] = 20;
    
    int our_total = 0;
    
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int col = 0; col < COL_SIZE; col++) {
            cout << "Add it up! " << our_total << endl;
            our_total += matrix[row][col];
        }
    }
    
    // end it all with a clean break
    cout << endl;
    
    cout << "Added it up: " << our_total << endl;
    
    return 0;

}

#elif(prog == 3)

#include <iostream>
using namespace std;

int main() {
    
    cout << "Display M Arrays" << endl;
    
    const int ROW_SIZE = 3;
    const int COL_SIZE = 5;
    int matrix[ROW_SIZE][COL_SIZE];
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; matrix[0][3] = 4; matrix[0][4] = 5;
    matrix[1][0] = 6; matrix[1][1] = 7; matrix[1][2] = 8; matrix[1][3] = 9; matrix[1][4] = 10;
    matrix[2][0] = 11; matrix[2][1] = 12; matrix[2][2] = 13; matrix[2][3] = 14; matrix[2][4] = 15;
    matrix[3][0] = 16; matrix[3][1] = 17; matrix[3][2] = 18; matrix[3][3] = 19; matrix[3][4] = 20;
    
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int col = 0; col < COL_SIZE; col++) {
            cout << matrix[row][col] << endl;
        }
    }
    // end it all with a clean break
    cout << endl;
    
    return 0;

}

#elif(prog == 2)

#include <iostream>
using namespace std;

int main() {
    
    cout << "Initialize Arrays with Rand Vals" << endl;
    // seed random
    srand(time(0));
    
    const int ROW_SIZE = 3;
    const int COL_SIZE = 4;
    int matrix[ROW_SIZE][COL_SIZE];
    
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int col = 0; col < COL_SIZE; col++) {
            matrix[row][col] = rand() % 100;
            cout << "Initializing matrix cell [" << row << "][" << col << "] with " << matrix[row][col] << endl;
        }
    }
    // end it all with a clean break
    cout << endl;
    
    return 0;
    
}

#elif(prog == 1)

#include <iostream>
using namespace std;

int main() {
    
    cout << "Example 8.3.1 Initialize Array with input valeus! \n";
    
    // declare array like: element_type array_name[row_size][column_size]
    
    const int ROW_SIZE = 3;
    const int COL_SIZE = 4;
    int matrix[ROW_SIZE][COL_SIZE];
    
    cout << "Enter " << ROW_SIZE << " rows and " << COL_SIZE << " columns: " << endl;
    
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
    
    return 0;
}

#endif