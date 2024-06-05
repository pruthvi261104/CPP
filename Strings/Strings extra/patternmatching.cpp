#include <iostream>
#include <vector>
#include <string>
using namespace std;

void lpsfind(vector<int>& lps, string a) {
    int pre = 0, suf = 1;
    while (suf < a.size()) {
        if (a[pre] == a[suf]) {
            lps[suf] = pre + 1;
            pre++, suf++;
        } else {
            if (pre == 0) {
                lps[suf] = 0;
                suf++;
            } else {
                pre = lps[pre - 1];
            }
        }
    }
}

int occurences(string p, string q) {
    vector<int> lps(p.size(), 0);
    lpsfind(lps, p);
    int count = 0;
    int i = 0, j = 0;
    while (i < q.size()) {
        if (p[j] == q[i]) {
            i++;
            j++;
        }
        if (j == p.size()) {
            count++;
            j = lps[j - 1];
        } else if (i < q.size() && p[j] != q[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return count;
}

int main() {
    // int t;
    // cin >> t;
    // cin.ignore(); // Ignore the newline character

    
        string input;
        getline(cin, input);
        string a, b;
        size_t pos = input.find(' ');
        if (pos != string::npos) {
            a = input.substr(0, pos);
            b = input.substr(pos + 1);
        } else {
            a = input;
            b = "";
        }
        int res = occurences(a, b);
        cout << res << endl;
    

    return 0;
}
