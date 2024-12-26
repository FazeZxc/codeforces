#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> programmers, mathematicians, athletes;
    for (int i = 1; i <= n; i++) {
        int skill;
        cin >> skill;
        if (skill == 1) {
            programmers.push_back(i);
        } else if (skill == 2) {
            mathematicians.push_back(i);
        } else if (skill == 3) {
            athletes.push_back(i);
        }
    }
    int w = min({programmers.size(), mathematicians.size(), athletes.size()});
    cout << w << endl;

    for (int i = 0; i < w; i++) {
        cout << programmers[i] << " " << mathematicians[i] << " " << athletes[i] << endl;
    }

    return 0;
}
