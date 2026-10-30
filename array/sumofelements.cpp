#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    long sum=0;
    for(int i:arr){
        sum+=i;
    }
    cout<<"Sum of elements in array is: "<<sum;
}