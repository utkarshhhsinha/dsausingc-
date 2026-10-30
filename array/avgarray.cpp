#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    long avg=0;
    for(int i:arr){
        avg+=i;
    }
    avg/=5;
    cout<<"Average of elements in array is: "<<avg;
}