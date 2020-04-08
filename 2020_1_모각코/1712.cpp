#include <iostream>
#include <string>

using namespace std;
#define MAX 2'100'000'000
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B, C, x;
	cin >> A >> B >> C;
	if (B >= C) {
		cout << -1 << '\n';
		return 0;
	}
	x = A / (C - B);
	cout << x+1 << '\n';
	return 0;
}