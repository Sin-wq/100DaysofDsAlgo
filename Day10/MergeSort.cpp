#include<iostream>

using namespace std;

void merge(int *arr, int s, int e){

    int mid = (s+e)/2;

    //size
    int len1 = mid - s + 1;
    int len2 = e - mid;

    //new arrays
    int *first = new int[len1];
    int *sec = new int[len2];

    //copy values
    int k = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }
    
    k = mid + 1;
    for(int i=0; i<len2; i++){
        sec[i] = arr[k++];
    }

    //merge 2 sorted arrays
    int i=0, j=0;
    k=s;

    while(i<len1 && j<len2){
        if(first[i]<sec[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = sec[j++];
        }
    }

    //copy elements remaining in the first array
    while(i<len1){
        arr[k++] = first[i++];
    }

    //copy elements remaining in the second array
    while(j<len2){
        arr[k++] = sec[j++];
    }

    delete []first;
    delete []sec;
}

void mergeSort(int *arr, int s, int e){
    
    //base case
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    //left part sort
    mergeSort(arr, s, mid);

    //right part sort
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}

int main(){

    int arr[7] = {55,23,45,35,16,867,23};
    int n = 7;
    
    mergeSort(arr , 0 , n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}