#include <bits/stdc++.h>
using namespace std;

void solve() {
	float n, m;
	cin >> n >> m;
	float ten_percent = n * 0.1;
	n -= ten_percent;
	if (n == m)
		cout << "EITHER";
	else if (n < m)
		cout << "ONLINE";
	else
		cout << "DINING";
	cout << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}
