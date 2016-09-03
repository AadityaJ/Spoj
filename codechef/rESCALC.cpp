#include <iostream>
using namespace std;
int getReward(int a){
    switch(a){
        case 6: return 4;
        case 5: return 2;
        case 4: return 1;
        default: return 0;
    }
}
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int type[n][20];
        int score[n];
        int max=0,index=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j=1;j<7;j++) type[i][j]=0;
            for(int j=0;j<x;j++){
                int temp;
                cin>>temp;
                //if(!type[i][temp]) score[i]++;
                type[i][temp]++;

            }
            //cout<<score[i]<<endl;
            //score[i]=getReward(score[i])+x;
            int num_1=0,num_2=0,num_3=0;
            for(int j=1;j<7;j++){
                if(type[i][j]>=1) num_1++;
                if(type[i][j]>=2) num_2++;
                if(type[i][j]>=3) num_3++;
            }
            score[i]=getReward(num_1)+getReward(num_2)+getReward(num_3)+x;
            //cout<<i<<" "<<score[i]<<" \n";
            if(max<score[i]){index=i;max=score[i];}
        }
        //cout<<max<<" "<<index<<endl;
        //check if this exits anywhere else
        bool isTie=0;
        for(int i=0;i<n;i++){
            if(score[i]==max && i!=index){isTie=1;break;}
        }
        //cout<<isTie;
        if(isTie){cout<<"tie\n";}
        else if(index==0){cout<<"chef\n";}
        else cout<<index+1<<endl;
    }
    return 0;
}
