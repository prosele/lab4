#include <iostream>
using namespace std;
long long summan(int n) {
    long long sumres=0;
    for (int i=1; i<=n; i++) {
        sumres+=i;
    }
    return sumres;
}

int main() {
    int n;
    cin >> n;
    if (summan(n)%2!=0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        if (n%2==0) {
            cout << n/2 << endl;
            for (int i=1; i<=n/2; i+=2) {
                cout << i << " " << n-i+1 << " ";
            }
            cout << endl;
            cout << n/2 << endl;
            for (int j=2; j<=n/2; j+=2) {
                cout << j << " " << n-j+1 << " ";
            }
        }
        else {
            cout << (n-1)/2+1 << endl;
            for (int i=1; i<=(n-1)/2; i+=2) {
                cout << i << " " << n-i << " ";
            }
            cout << endl;
            cout << (n-1)/2 << endl;
            for (int j=2; j<=(n-1)/2; j+=2) {
                cout << j << " " << n-j << " ";
            }
            cout << n << endl;
        }
    }
}
