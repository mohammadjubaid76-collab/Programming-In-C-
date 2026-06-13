#include<iostream>
using namespace std;

int main(){
  int marks[5]={7,5,4,7,2};
  int n=sizeof(marks)/sizeof(int);
  for(int i=0;i<n;i++){
    cout<<marks[i]<<" ";
  }
  return 0;
}