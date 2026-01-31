
#include <iostream>//standard library
using namespace std;
class Heap{//class heap declared
    public:
    int arr[100];//array declared
    int size;
    
    Heap(){
        arr[0]=-1;
        size=0;
    }
    
    void insert(int val){//insert function
        
        size = size+1;
        int index = size;
        arr[index] = val;
        
        while(index > 1){//using while loop to iterate
            int parent = index /2;
            
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    
    void print(){//print function
        for(int i=1;i<=size;i++){
            cout<<arr[i] << " ";//printing the output
        }cout<<endl;//using for new line
    }
        
};
int main()
{
    Heap h;//Heap made
    h.insert(50);//used to insert the elements
    h.insert(55);//used to insert the elements
    h.insert(53);
    h.insert(52);
    h.insert(51);
    h.print();
    

    return 0;
}
