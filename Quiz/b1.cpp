#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int x = n;
    while(x--){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j - 1 == x){
                    cout << arr[i][j] << " ";
            }

        }
        
    }
    cout << endl;

    }
    
    
    while(x < n - 1){
        x++;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i - j == x){
                 cout << arr[i][j] << " ";
            }

        }
        
    }
    cout << endl;

    
    }



    return 0;
}