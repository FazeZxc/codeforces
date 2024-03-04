// 282A

#include<iostream>
using namespace std;

int main() {
    int n = 0;
    int ans =0;
    string l = "";
    cin >> n;
    while (n--) {
        cin >> l;
        if(l[0]  == '+') {
            ans++ ;
        }else if(l[l.length()-1]== '+') {
            ans++;
        }
        else {
            ans-- ;
        }
    }
    cout << ans ;
    return 0;
}