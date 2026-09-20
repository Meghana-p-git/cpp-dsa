#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
       if(arr[j]<pivot){
          i++;
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
       }
     }
     i++;
     int temp=arr[i];
     arr[i]=pivot;
     arr[end]=temp;
     return i;
}
void quicksort(int arr[],int start,int end){
     if(start<end){
        int pidx=partition(arr,start,end);
        
        quicksort(arr,start,pidx-1);
        quicksort(arr,pidx+1,end);
      }

}

int main(){
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;
    
    quicksort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
	cout << arr[i] << " ";
    }

    return 0;
}

