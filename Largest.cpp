#include<iostream>
using namespace std;
int main(){
  int arr[]={5,6,7,9,8};
  int n= sizeof(arr)/sizeof(int);
  int max=arr[0];
  for(int i=0;i<n;i++){
  
    if(arr[i]>max){
      max=arr[i];

    }
    cout<<"Assigning the Value"<< "to max\n";
    return 0;

  }
}