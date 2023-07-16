#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<char> ppap{'p', 'P', 'A', 'p'};

	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		auto isPpap = bool{ true };
		for (auto j = 0; j < 4; ++j) {
			if (ppap[j] != s[i + j]) {
				isPpap = false;
				break;
			}
		}

		if (isPpap) {
			++ans;
			i += 3;
		}
	}

	cout << ans;

	return 0;
}