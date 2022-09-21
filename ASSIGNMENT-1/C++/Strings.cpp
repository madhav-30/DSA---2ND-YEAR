#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,c,d;
    cin>>a>>b;
    int l1,l2;
    c=a;
    d=b;
    l1=a.length();
    l2=b.length();
    cout<<l1<<" "<<l2<<endl<<a+b<<endl;
    c.erase(0,1);
    d.erase(0,1);
    cout<<b[0]+c<<" "<<a[0]+d;
    return 0;
}
