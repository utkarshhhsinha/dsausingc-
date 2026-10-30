#include <iostream>
using namespace std;
int main(){
    int arr[]={10,30,20,88,99,2,3,1};
    int max=arr[0];
    for(int i:arr){
        if(i>max){
            max=i;
        }else{
            continue;
        }
    }
    cout<<"Maximum element in array is: "<<max;
}