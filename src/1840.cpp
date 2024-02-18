#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],b[1010][1010];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int in;
            cin>>in;
            a[i][j]=in;
            b[j][i]=in;
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=0){
                continue;
            }
            int *a2=a[i],*b2=b[j],cnt=0;
            for(int k=0;k<n;k++){
                cnt += a2[k];
                cnt += b2[k];
            }
            if(cnt>max)max=cnt;
        }
    }
    cout<<max;

    return 0;
}
