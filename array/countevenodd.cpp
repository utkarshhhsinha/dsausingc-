#include <iostream>
using namespace std;
int main(){
    int arr[]={1,21,3,41,5};
    int even=0;
    int odd=0;
    if (sizeof(arr)/sizeof(arr[0])==0){
        cout<<"Array is empty";
    }else{
        for(int i:arr){
            if (i%2==0){
                even++;
            }else{
                odd++;
            }
        }
    }
    cout<<"Number of even elements in array is: "<<even<<endl;
    cout<<"Number of odd elements in array is: "<<odd;

}