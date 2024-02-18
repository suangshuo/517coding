#include<bits/stdc++.h>
using namespace std;
int a[10*10*10*10*10+100];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0,ret=0;
    for(int i=0;i<n;i++){
        if(cnt+a[i]<=m){
            cnt+=a[i];
            a[i]=0;
        }else{
            cnt=a[i];
            ret++;
        }
    }
    cout<<ret;

    return 0;
}
