#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string tnk[n];
		for(int i=0;i<n;i++){
			cin>>tnk[i];
		}
		/*for(int i=0;i<n;i++){
			cout<<tnk[i];
			cout<<endl;
		}*/
		bool flg=0;
		for(int i=0;i<n-1;i++){

			for(int j=0;j<m;j++){
				if(tnk[i][j]=='B'&&(tnk[i+1][j]=='A'||tnk[i+1][j]=='W')){flg=1;break;}
			}
		}
		for(int i=0;i<n;i++){
			if(tnk[i][0]=='W'||tnk[i][m-1]=='W'){flg=1;break;}
		}
		/*for(int i=0;i<n;i++){
			bool isBrick=0;
			for(int j=0;j<n;j++){
				if(tnk[i][j]=='B') isBrick=1;
				if(tnk[i][j]=='W' && !isBrick){flg=1;break;}
			}
		}//cout<<flg<<endl;
		for(int i=0;i<n;i++){
			bool isBrick=0;
			for(int j=m-1;j>=0;j--){
				if(tnk[i][j]=='B') isBrick=1;
				if(tnk[i][j]=='W' && !isBrick){flg=1;break;}
			}
		}*/
		for(int i=0;i<n;i++){
			for(int j=1;j<m-1;j++){
				if(tnk[i][j]=='W'&&(tnk[i][j-1]=='A'||tnk[i][j+1]=='A')){flg=1;break;}
			}
		}
		if(flg) cout<<"no\n";
		else cout<<"yes\n";
	}
	 return 0;
}
