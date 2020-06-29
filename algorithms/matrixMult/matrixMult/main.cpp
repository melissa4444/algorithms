//
//  main.cpp
//  matrixMult
//  add, subtract, multply, and divide matrices
//  take input for num of row, column num first matrix elements and second matrix elements
//  then perfrom
//
//  Created by Melissa Nguyen on 6/29/20.
//

#include <iostream>
using namespace std;

int main() {
    int a[20][20], b[20][20], mul[20][20],m,e,i,j,k;
    
    cout << "enter the number of rows = ";
    cin >> m;
    
    cout << "enter the number of columns = ";
    cin >> e;
    
    cout << "enter the first matrix element= \n";
    for (i =0; i < m; i++){
        for (j=0; j<e; j++){
            cin >>a[i][j];
        }
    }
    
    cout << "enter the second matrix element= \n";
    for (i=0; i <m; i++){
        for (j=0; j <e; j++){
            cin >>b[i][j];
        }
    }
    
    cout << "multiply the matirx = \n";
    
    for (i = 0; i< m; i++){
        for (j=0; j<e; j++){
            mul[i][j]=0;
            for(k=0; k<e; k++){
                mul[i][j]+=a[i][j]*b[k][j];
            }
            
        }
    }
    
    for (i =0; i<m; i++){
        for(j=0; j<e; j++){
            cout << mul[i][j] << "";
            
        }
        cout << "\n";
    }
    
    return 0;
}
