#include <bits/stdc++.h>

using namespace std;

int gcd(int d, int n) {
	int r;
	while((r = d % n) != 0) {
		d = n;
		n = r;
	}
	return n;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << "\n";
	return 0;
}
