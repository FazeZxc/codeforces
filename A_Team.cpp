#include<iostream>
using namespace std;

int main() {
    int n;
    int numberOfQues = 0;
    int p=0 ,v=0 ,t=0; 
    cin >> n;
    while(n--) {
        cin >> p >> v >> t;
        if(p+v+t >= 2) {
            numberOfQues += 1;
        }
    }
    cout << numberOfQues;
    return 0;
}