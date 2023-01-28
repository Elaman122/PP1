#include <iostream>
#include <cmath>

using namespace std;


void Ortega(int arr1[], int arr2[], int n){
    for(int i = 0; i < n; i++){
        cout << abs(arr2[i] - arr1[i]) << " ";
    }
}

    

int main(){
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

   Ortega(arr1, arr2, n);
    
    return 0;
}