#include<iostream>

using namespace std;

int sort(int arr[], int size){

    for(int i = 1; i < size; i++){

        bool swapped = false;

        for(int j = 0; j < size-1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j] , arr[j+1]);

                swapped = true;

            }
        }
        
        if (swapped == false){

            cout << "\nArray has been Sorted: ";

            break;

        }

    }

    for(int i = 0; i < 5; i++){

        cout << arr[i] << " ";

    }

}

int main(){

    int arr[5] = {6,4,11,2,8};

    cout << "Array Before: ";

    for(int i = 0; i < 5; i++){

        cout << arr[i] << " ";

    }

    sort(arr , 5); 

}