#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	map<long long, int> d;
	long long sum = 0;
	int ans = n - 1;
	    for (int i = 0; i < n; i++) {
	    int t;
	    cin >> t;
	    sum += t;
	    d[sum]++;
	    ans = min(ans, n - d[sum]);
	}
	cout << ans << endl;
	return 0;
}
