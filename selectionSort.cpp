#include<bits/stdc++.h>
using namespace std;


//for printing arrays//
void PrintArray(int *arr,int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}




//for swapping//
void swapEle(int *a,int *b){
  int temp = *a;
  *a=*b;
  *b=temp;
}



//for using Selection Sort//

void SelectionSort(int *arr,int n){
  // int minEle;
  int minP;
  for(int i=0;i<n;i++){
    int minEle = arr[i];
    for(int j=i+1;j<n;j++){
      if(arr[j]<minEle){
        minEle = arr[j];
        minP=j;
      }
    }
    swapEle(&arr[i],&arr[minP]);
  }
}

int main(){
  int arr[] = {10,5,8,20,2,18};
  int n = sizeof(arr)/sizeof(*arr);
  cout<<"Array before sorting :::"<<endl;
  PrintArray(arr,n);
  cout<<endl;
  cout<<"Array after sorting :::"<<endl;
  SelectionSort(arr,n);
  PrintArray(arr,n);
  cout<<endl;
}