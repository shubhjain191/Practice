#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the values: ";
    cin>>n;


    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<< num<< " ";
            num++;
        }
        cout<<endl;
    }
return 0;
}


// Output: 
// Enter the values: 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

