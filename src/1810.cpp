#include<bits/stdc++.h>
using namespace std;
int s[10010];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s[i]>s[j]){
                int a=0;
                cnt++;
                a=s[i];
                s[i]=s[j];
                s[j]=a;
            }
        }
    }
    cout<<cnt;

    return 0;
}
