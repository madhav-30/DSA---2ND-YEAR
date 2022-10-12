#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s,t,a,b,m,n,app =0,orn=0;
    cin>>s>>t>>a>>b>>m>>n;
    vector <long long int> apple(m);
    vector <long long int> orange(n);
    for(int i=0;i<m;i++){
        cin>>apple[i];
        apple[i]+=a;
    }
    for(int i=0;i<n;i++){
        cin>>orange[i];
        orange[i]+=b;
        }
    for(int i=0;i<m;i++){
        if(apple[i]>=s && apple[i]<=t){
            app++;
        }
    }
    for(int i=0;i<n;i++){
        if(orange[i]>=s && orange[i]<=t){
            orn++;
        }
    }
    cout<<app<<"\n"<<orn;
    
}
