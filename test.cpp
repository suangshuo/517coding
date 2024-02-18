#include<bits/stdc++.h>
using namespace std;
int a[2][2]={1,2,3,4};
int main(){
    int *tmp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    tmp=a[0];
    tmp[0]=4;
    tmp[1]=3;
    tmp=a[1];
    tmp[0]=2;
    tmp[1]=1;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }


    return 0;
}
