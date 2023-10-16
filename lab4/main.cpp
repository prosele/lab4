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
        long long massi[n];
        for (int i=0; i<=n; i++) {
            if (i==0) {
                massi[i]=0;
            }
            else {
                massi[i]=i;
            }
        }
        long long A[summan(n)/2+1];
        for (int k=0; k<summan(n)/2+1; k++) {
            if (k==0) {
                A[k]=1;
            }
            else {
                A[k]=0;
            }
            
        }
        for (int i=0; i<=n; i++) {
            for (long long j=summan(n)/2-i; j>=0; j--) {
                if (A[j]!=0) {
                    A[j+i]=1;
                }
            }
            if (A[summan(n)/2]==1) {
                cout << "Yes";
                break;
            }
        }
    }
}
