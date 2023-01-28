#include <iostream>
using namespace std;

int main(){
    int size1;
    cin >> size1;
    int arr1[size1];

    for(int i = 0; i < size1; i++){
        cin>>arr1[i];
    }

    int size2;
    cin >> size2;

    int arr2[size2];

    for(int i = 0; i < size2; i++){
        cin>>arr2[i];
    }

    int ptr1 = 0;
    int ptr2 = 0;

    while(ptr1 < size1  && ptr2 < size2){
        if(arr1[ptr1] > arr2[ptr2]){
            cout << arr2[ptr2] << " ";
            ptr2++;
        }else{
            cout << arr1[ptr1] << " ";
            ptr1++;
        }
    }

    while(ptr1 < size1){
        cout << arr1[ptr1] << " ";
        ptr1++;
    }

    while(ptr2 < size2){
        cout << arr2[ptr2] << " ";
        ptr2++; 
    }

    return 0;
}