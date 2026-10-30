#include <iostream>
using namespace std;
int main(){
    int arr[]={1,20,-8,7,90,-1,0,66};
    int min=arr[0];
    for(int i:arr){
        if(i<min){
            min=i;
        }else{
            continue;
        }
    }
    cout<<"Minimum element in array is: "<<min;
}