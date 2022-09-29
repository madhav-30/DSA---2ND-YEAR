#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <long> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long sum=0;
    for(int k=0;k<n;k++){
        sum+=arr[k];
    }
    cout<<sum;
}
