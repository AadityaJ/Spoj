#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int n,m;
	cin>>n>>m;
	if(abs(n-m)<2) cout<<"YES";
	else cout<<"NO";
	return 0;
}
