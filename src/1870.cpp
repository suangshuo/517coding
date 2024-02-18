#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
int a[40];
int main (int argc, char *argv[]) {
    int i=0,sum=0;
    while(scanf("%d",&a[i])==1){
        sum+=a[i];
        i++;
    }
    printf("%lld",(long long)(sum*pow(2,i-1)));

    return 0;
}
