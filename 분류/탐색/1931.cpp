#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
	cin >> N;
	vector<pair<int, int>> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i].second >> a[i].first;
	}
	sort(a.begin(), a.end());
	int time = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		if (time <= a[i].second) {
			time = a[i].first;
			ans++;
		}
	}
  cout << ans;

}