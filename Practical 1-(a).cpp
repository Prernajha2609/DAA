#include<iostream>
using namespace std;
void insertion_sort(int*arr,int size){
    int comp=0;
    for (int i = 1; i <size; i++)
    {   
        
        int j=0;
        int x =arr[i];
        for(j=i-1;j>=0; j--)
        {
            if(x<arr[j]){
                comp=comp+1;
                arr[j+1]=arr[j];
            }
            else{
                comp=comp+1;
                break;
            }
        }
        arr[j + 1] = x; 
    }
    cout<<"total comparisons  :- "<<comp<<endl;
}
int main(){
    int array[]={66,7,34,2};
    insertion_sort(array,4);  
    cout<<"Sorted array is :"<<endl;
    for (int i = 0; i <4 ; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}
