//https://www.codechef.com/DEC16/problems/BASE
#include <cmath>
#include <iostream>
using namespace std;
long int floor_log(long a,int b){
    long int pow_er=b;
    long int i=1;
    for(i=1;i<=a;i++){
        if(a<=pow_er || (a<pow_er*b))
            return i;
        pow_er*=b;
    }
    return i;
}
int main(int argc, char const *argv[]) {
    //int t;
    //cin>>t;
    //while(t--){
        //cout<<floor_log(17179869180,2)<<endl;
        double n;
        for(n=0;n<100;n++){
    //    cin>>n;
        cout<<n<<" ";
        if(n==0){cout<<"0"<<endl;continue;}
        if(n==1){cout<<"INFINITY\n";continue;}
        double count=1;
        for(int i=3;i<=n;i++){
            int j=pow(i,(int)(floor_log(n,i)));
            if(j<=n && n<(2*j)) count++;
        }
        std::cout << count << std::endl;
    }
    //}
    return 0;
}
