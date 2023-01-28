#include <iostream>

using namespace std;
int arr[1000][1000];

void Chendler(int n, int m){
   for(int j = 0; j < m; j++){
    for(int i = 0; i < n; i++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
   }
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    Chendler(n, m);
    return 0;
}