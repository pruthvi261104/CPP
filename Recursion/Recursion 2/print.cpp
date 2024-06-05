#include<iostream>
using namespace std;

int main(){
    int low, high;
    cin >> low >> high;

    while (low <=high) {
        int flag = 0;

        if (low <= 1) {
            low++;
            continue;
        }

        for (int i = 2; i <= low / 2; i++) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            cout << low << " "<<endl;
        }

        low++;
    }

    return 0;
}
