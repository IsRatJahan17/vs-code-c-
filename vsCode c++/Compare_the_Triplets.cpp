#include<bits/stdc++.h>
using namespace std;
void result(vector<int> &m, vector<int> &n){
    int x=0,y=0;
    for(int j=0;j<3;j++){
        if(m[j]>n[j]) x++;
        else if(m[j]<n[j]) y++;
    }
    cout<<x<<" "<<y<<"\n";
}
int main(){
    vector<int> a,b;
    int temp;
    for(int h=0;h<3;h++){
        cin>>temp;
        a.push_back(temp);
        // cin>>temp;
        // a.push_back(temp);
    }
    for(int h=0;h<3;h++){
        cin>>temp;
        b.push_back(temp);
        // cin>>temp;
        // a.push_back(temp);
    }
    
    result(a,b);
    return 0;

}