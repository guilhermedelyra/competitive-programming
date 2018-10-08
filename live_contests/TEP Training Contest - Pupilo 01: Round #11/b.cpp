#include <bits/stdc++.h>
#define fle(i, a, b) for (int (i) = (a); (i) <= (b); (i)++)
#define flt(i, a, b) for (int (i) = (a); (i) < (b); (i)++)
#define fgt(i, a, b) for (int (i) = (a); (i) > (b); (i)--)
#define fge(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define log(var, sep) (cerr << #var << " = " << (var) << (sep))
#define pb push_back
#define nl (cout << endl)
#define pf first
#define ps second

using namespace std;

using ll = long long;
using ii = pair<ll, ll>;
using vi = vector<ll>;
using vp = vector< ii >;

const int MAX { 1000010 }; // 10^6 + 10
const ll oo { (1ll << 62) }; // 2^62
const ll MOD { 1000000007 }; // 10^9 + 7
const double PI = acos(-1.0); // 3.14

int main () {
	string s; cin >> s;
	int last_count, count = 0, changed = 0;
	for (int i = 1; s[i]; ++i) {
		if (s[i] != s[i-1]) {
			changed = 1;
			count = 0;
		}
		last_count = count;
		count++;
		if (changed && ((last_count > 6) || (count > 6))) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}