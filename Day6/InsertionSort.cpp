#include<iostream>

using namespace std;

int insort(int arr[], int size){

    for(int i = 1; i < size; i++){

        int temp = arr[i];

        int j = i-1;

        for(; j >= 0; j--){

            if(arr[j] > temp){

                arr[j+1] = arr[j];

            }
            else{

                break;

            }
        }
        
        arr[j+1] = temp;

    }

    cout << "\nArray After: ";

    for(int i = 0; i < size; i++){

        cout << arr[i] << " ";

    }

}

int main(){

    int arr[5] = {6,4,11,2,8};

    cout << "Array Before: ";

    for(int i = 0; i < 5; i++){

        cout << arr[i] << " ";

    }

    insort(arr , 5); 

}