//
//  main.cpp
//  RandomizedTreeSearch
//
//  Created by Daniel Williams on 02/12/2019.
//  Copyright © 2019 Daniel Williams. All rights reserved.
//

#include "binarySearch.hpp"
#include <iostream>
#include <ctime>

using namespace std;





int getRandom (int l, int r)
{
    srand(time(NULL));
    return(l + rand() % (r-l+1));
}

int binarySearch(int arr[], int l, int r, int x){
    
    if (r >= 1){
        
        int mid = (getRandom(l,r))
        if (arr[mid] == x)
            return mid;
        
        if (arr[mid] > x)
            return binarySearch(arr,l,mid-1,x);

        return binarySearch(arr,mid+1,r,x);
    }
    
    return -1;
}

int main(){
    
    int x;
    int numArr[] = {1,2,4,7,8,22,43,56,89};
    int n = sizeof(numArr)/sizeof(numArr[0]);
    cout << "Enter the number you are looking for in the list: ";
    cin >> x;
    int result = binarySearch(numArr,0,n-1,x);
    if (result == -1)
        cout << "The element is not in the list" << endl;
    cout << "The element is located at index: " << result << endl;
    return 0;
}
