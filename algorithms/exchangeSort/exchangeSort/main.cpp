//
//  main.cpp
//  exchangeSort
//  similar to bubble
//  sometimes better then bubble sort no need for final pass
//  compares the first element with each element of the array
//  Created by Melissa Nguyen on 6/29/20.
//

#include <iostream>
using namespace std;
int main(void) {

    
    int array[4];
    int length = 4;
    int i, j;
    int temp;
    
    for(i =0; i <4; i++){
        cout << "enter a number: ";
        cin >> array[i];
    }
    
    //algorithm
    for(i =0; i < (length -1); i++){
        for (j=(i +1); j < length; j++){
            if (array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    for (i =0; i < 4 ; i++){
        cout << array[i] << endl;
    }
    
}
