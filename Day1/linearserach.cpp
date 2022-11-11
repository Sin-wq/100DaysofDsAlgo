#include<iostream>

using namespace std;

bool search(int *array, int size , int key){
    for (int i=0; i < size; i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int size , key,  *array;
    cout << "Enter the size of the array: ";
    cin >> size ;

    array = new int[size];

    cout << "Enter the elements in the array: ";
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }

    cout << "Enter the element to be searched in the array: ";
    cin >> key ;

    bool found = search(array,size,key); 

    if (found){
        cout<<key<<" Found";
    }
    else{
        cout<<key<<"Not Found";
    }

    // for(int i = 0; i < size; i++)
    //     cin>>array[i];
    
    // for(int i = 0; i < size; i++)
    //     cout<<array[i]<<" ";

    delete [] array;
}
