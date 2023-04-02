#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M, N;
	int rt;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		rt = sqrt(i);
		if (rt == 1 && i != 1) {	//2,3인 경우
			cout << i << '\n';
			continue;
		}
		if (i % 2) {	//홀수일 경우
			for (int j = 2; j <= rt; j++) {
				if (!(i%j))
					break;
				if (j == rt) {
					cout << i << '\n';
				}
			}
		}
	}
}