#include<iostream>
#include<algorithm>
using namespace std;

long long N, B;
long long arr[5][5];
long long tmp[5][5];
long long answer[5][5];


// 행렬 곱셈
void mul(long long X[5][5], long long Y[5][5])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			tmp[i][j] = 0;
			for (int k = 0; k < N; k++)
				tmp[i][j] += (X[i][k] * Y[k][j]);
  		tmp[i][j] %= 1000;
		}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			X[i][j] = tmp[i][j];
}

int main()
{
	cin >> N >> B;

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
		answer[i][i] = 1; // 단위 행렬 : 곱했을때 자기 자신이 나오게 함
	}

	while (B > 0){
		if (B % 2 == 1){
			mul(answer, arr); // 홀수 일때, 제곱이 아니라 1 번만 곱셈
		}
		mul(arr, arr);
		B /= 2;
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			cout << answer[i][j] << " ";
    cout <<"\n";
	}

}