//
//  main.cpp
//  binarySearch
//  better then sequential faster
//  cuts array in the middle and compares
//  lower_bound	Returns the lower bound element of the range.
//  upper_bound	Returns the upper bound element of the range.
//  equal_range	The function returns the subrange for the equal elements.
//  binary_search	The function tests if the values in the range exists in a sorted sequence or not.
//  Created by Melissa Nguyen on 6/29/20.
//

#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;


int main()
{
    vector<int> v = {3,1,4,6,5};
    
    if (binary_search(v.begin(), v.end(), 4)) {
        cout << "4 found";
    }
    else{
        cout << "4 not found " << endl;
    }
    
    
    return 0;
}
