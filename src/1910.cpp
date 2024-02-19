#include<bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[]) {
    int n,m;
    cin>>n>>m;
    int cnt=0;
    double v=7,now=0;
    while(now<=n+m){
        if(now<=n+m&&now>=n-m){
            cnt++;
        }
        now+=v;
        v*=0.98;
    }
    if(cnt<2)
        cout<<"NO";
    else  
        cout<<"YES";

    return 0;
}
