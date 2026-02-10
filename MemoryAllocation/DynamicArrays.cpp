#include<iostream>//library
using namespace std;//standard library

int getSum(int *arr, int n) {//function

    int sum = 0;//sum variable
    for(int i=0; i<n; i++) {//loops
        sum += arr[i];
    } 
    return sum;//return statement
}

int main() {//main function

    int n;//number of elements
    cin >> n;
    
    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {//loop
        cin >> arr[i];
    }

    int ans = getSum(arr, n);//recursive function passed to answer

    cout << "answer is "<< ans << endl;//printing the output

//case 1
    while(true) {
        int i = 5;
    }
    
//case 2
    while(true) { //using while loop for the pointer
        int* ptr = new int;
    }




    return 0;
}
