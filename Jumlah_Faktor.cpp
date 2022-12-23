#include <iostream>
using namespace std;
int n;
int m;
int i;
int main(){
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter m: ";
  cin >> m;

  int countN = 0;
  for (int i=1;i<=n;i++){
  while (n % i == 0) {
    countN++;
  }
  break;
  }
  int countM = 0;
  for (int i=1;i<=m;i++){
  while (m % i == 0) {
    countM++;
  }
  break;
  }
cout<<countN+countM;

  return 0;
}
