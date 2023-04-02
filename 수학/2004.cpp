#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
typedef unsigned long long ull;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ull N, M;
    cin >> N >> M;
 
    ull count[2] = { 0 };
    
    for (ull i = 2; i <= N; i *= 2) {
        count[0] += N / i;
    }
    for (ull i = 2; i <= (N - M); i *= 2) {
        count[0] -= (N - M) / i;
    }
 
    for (ull i = 2; i <= M; i *= 2) {
        count[0] -= M / i;
    }
 
    for (ull i = 5; i <= N; i *= 5) {
        count[1] += N / i;
    }
    for (ull i = 5; i <= (N - M); i *= 5) {
        count[1] -= (N - M) / i;
    }
    for (ull i = 5; i <= M; i *= 5) {
        count[1] -= M / i;
    }
 
    cout << min(count[0], count[1]);
 
    return 0;
}