#include <stdio.h>
using namespace std;
int main() {
   int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=i) {
            cout<<((i*(i-1))/2+j)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
