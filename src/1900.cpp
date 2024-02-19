#include<bits/stdc++.h>
using namespace std;
int a[110];
int n;
void out_arr(){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
int main (int argc, char *argv[]) {
    cin>>n;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                a[j]=(a[j]?0:1);
            }
        }
        out_arr();
    }

    return 0;
}
