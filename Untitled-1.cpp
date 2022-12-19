#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1){
            sum += arr[i];
            count++;
        }
        if(count == 10){
            break;
        }
    }
    cout << sum << endl;
    return 0;
}