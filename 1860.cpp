#include<bits/stdc++.h>
using namespace std;
int f[110][110];
int main(){
    int n,m,r;
    cin>>n>>m>>r;
    int ret=0,x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        for(int a=1;a<=n;a++){
            for(int b=1;b<=n;b++){
                if((a-y)*(a-y)+(b-x)*(b-x)<=r*r){
                    f[a][b]=1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(f[i][j])ret++;
        }
    }
    cout<<ret;

    return 0;
}
