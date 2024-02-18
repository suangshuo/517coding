#include<bits/stdc++.h>
using namespace  std;
int a[10*10*10*10*10*10];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=0,cnt=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1])cnt++;
        else{
            if(cnt>max)max=cnt;
            cnt=1;
        }
    }
    if(a[n]>a[n-1])cnt++;
    else{
        if(cnt>max)max=cnt;
        cnt=1;
    }

    cout<<max;

    return 0;
}
