#include <bits/stdc++.h>

using namespace std;


int main()
{
    float n,s=0,d=0,f=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            s++;
        }
        else if(arr[i]<0){
            d++;
        }
        else{
            f++;
        }
    }
    cout<<s/n<<endl<<d/n<<endl<<f/n;
    
    return 0;
}
