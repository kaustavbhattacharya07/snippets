/***
 *	Aman Pratap Singh (www.amanpratapsingh.in)
 *	Indian Institute of Technology Bhubaneswar
 */
 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7

int main() {
	off;
	test {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == b && c == d) {
			cout << "YES" << endl;
			continue;
		}
		else if (a == c && b == d) {
			cout << "YES" << endl;
			continue;
		}
		else if (a == d && b == c) {
			cout << "YES" << endl;
			continue;
		}
		else if (a == b && b == c && c == d) {
			cout << "YES" << endl;
			continue;
		}
		cout << "NO" << endl;

	}

  	return 0;
}