//  main.cpp
//  RandomizedBinarySearch

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
        
        int mid = (getRandom(l,r));
        std::cout << "The randomly selected mid was " << arr[mid] << ", which was located at index " << mid << "\n";
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
    int numArr[] = {1,2,4,7,8,15,19,22,43,56,64,69,73,82,87,89,90,93,96,101,104,129,130,134,150,155,159,165,175,190};
    int n = sizeof(numArr)/sizeof(numArr[0]);
    cout << "Enter the number you are looking for in the list: ";
    cin >> x;
    int result = binarySearch(numArr,0,n-1,x);
    if (result == -1)
    cout << "The element is not in the list" << endl;
    cout << "The element " << x << " is located at index " << result << endl;
    return 0;
}
