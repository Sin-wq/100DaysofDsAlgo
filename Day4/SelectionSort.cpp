#include<iostream>

using namespace std;

int sort(int arr[], int size){

    for(int i = 0; i < size; i++){\

        int midindex = i;

        for(int j = i+1; j < size; j++){

            if(arr[j] < arr[midindex]){

                midindex = j;

            }
        }
        swap(arr[midindex] , arr[i]);
    }

    cout << "\nArray After: ";

    for(int i = 0; i < 5; i++){

        cout << arr[i] << " ";

    }

}

int main(){

    int arr[5] = {6,4,11,8,2};

    cout << "Array Before: ";

    for(int i = 0; i < 5; i++){

        cout << arr[i] << " ";

    }

    sort(arr , 5); 

}