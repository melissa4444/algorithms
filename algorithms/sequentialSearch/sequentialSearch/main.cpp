//
//  main.cpp
//  sequentialSearch
//  simpliest search is applicable to a table organized either as an array or a linked list
//  best case is one comparison , worst case is n comparisons O(n), avaerage case (n+1)/2 O(n)
//  Created by Melissa Nguyen on 6/29/20.
//

#include <iostream>
using namespace std;
int main() {
   
    int array[10];
    int numOfelements, key;
    bool found = false;
    cout << "enter number of elements: ";
    cin >> numOfelements;
    
    for (int i = 0; i < numOfelements; i++){
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }
    cout << "enter search value: ";
    cin >> key;
    for (int i =0; i < numOfelements; i++){
        if (key== array[i]){
            found = true;
            cout << " value found at index array[" << i << "] " ;
            
        }
    }
    if (!found){
        cout << "key not found";
    }
    
    
    return 0;
}
