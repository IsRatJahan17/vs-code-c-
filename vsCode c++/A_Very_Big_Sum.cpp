#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos=0,neg=0,zer=0;
    cin>>n;
    int* arr= new int[n];
    while(n--){
        cin>>arr[n-1];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0) ++pos;
        else if(arr[i]<0) neg++;
        else zer++;
    }
    cout<<pos<<neg<<zer;
    return 0;
}
