#include<iostream>
using namespace std;

int count=0;
void print(int arr[],int l,int r){
    cout<<"array\n";
    for(int i=l;i<=r;i++){
        count++;
        cout<<i<<" : ";
        cout<<arr[i]<<" \n";
    }cout<<endl;
}

int partition(int arr[],int l,int r){
   
   int i=l-1;
   int j=l;
   int pi=arr[r];
   for(j;j<=r-1;j++){
       if(arr[j]<pi){
           i++;
           swap(arr[i],arr[j]);
       }
   }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quickSort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr, l, r);

        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main(){

    int arr[]={66,2,34,7,89,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    print(arr,0,n-1);
 cout<<"The Number of comparisons are : "<<count<<endl;
    return 0;
}
