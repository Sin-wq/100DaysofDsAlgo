#include<iostream>

using namespace std;

int search(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start) / 2;

    while(start <= end){

        if(key==arr[mid]){
            return mid;
        }

        if(key >= arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start) / 2;

    }
    return -1;

}

int main(){

    int even[6] = {2,4,6,8,9,12};
    
    int odd[5] = {1,3,5,7,9};

    int evenindex = search(even,6,12);

    cout << "Index of 12 is " << evenindex;

    int oddindex = search(odd,5,7);

    cout << "\nIndex of 7 is " << oddindex;

}