#include <iostreams>//library function
using namespace std;

int main() {
   int n;
    cin>>n;
    
    int i =1;
    while(i<=n) {
        int j=1;
        while(j<=i) {//using a while loop for the condition 
            char ch = 'a'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
