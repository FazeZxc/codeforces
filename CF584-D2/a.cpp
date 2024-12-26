#include <iostream>

using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  if (n == 1 && k == 10)
    cout << -1 << endl;

  else if (n >= 2 && k == 10){
    for (int i = 1; i < n; i++){
      cout << 5;
    }
    cout << 0 << endl;
  }
  else if (k < 10){
    for (int i = 0; i < n; i++){
      cout << k;
    }
  }
  else
    cout << -1 << endl;
}