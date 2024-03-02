#include<iostream>
using namespace std;

int main() {
    int n = 0;
    int k = 0;
    int counter=0;
    int arr[50] = {};
    cin >> n >> k;
    int i = 0;  
    for(int j = 0 ; j < n ; j++) {
        cin >> arr[j];
    }
    while(n--) {
        if(arr[i] >= arr[k-1] && arr[i] >0 ) {
            counter += 1;
        }
        i++;
    }
    cout << counter;
    return 0;
}