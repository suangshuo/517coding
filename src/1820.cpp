#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int ret=0;
    for(int i=0;i<n;i++){
        if(x%7!=6&&x%7!=0){
            ret+=250;
        }
        x++;
    }
    cout<<ret;

    return 0;
}
