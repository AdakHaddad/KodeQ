#include <iostream>
using namespace std;
//echelon form of matrix 4x4 with 0 shown blank in array
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0){
                cout << " ";
            }else{
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}