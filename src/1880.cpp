#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m;
    int cnt=0,ret=1;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(cnt+x<=m){
            cnt+=x;
        }else{
            cnt=x;
            ret++;
        }
    }
    cout<<ret;

    return 0;
}
