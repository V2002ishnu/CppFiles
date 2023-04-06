#include <iostream>
using namespace std;

// Partition kr le..

int Partition(int arr[] , int s, int e){
    int pivot=arr[s];
    int ct=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot)
        ct++;
    }
    
    // Pivot Element ko sahi place pe phucha do..
    
    int pivotindex = s + ct;
    swap(arr[pivotindex] , arr[s]);
    
    // left aur right waala part sambhal loo..
    
    int i=s;
    int j=e;
    
    while(i < pivotindex && j > pivotindex){
        
        while(arr[i] <= pivot){
            i++;
        }
        
        while(arr[j] > pivot){
            j--;
        }
        
        if(i < pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    
    return pivotindex;
    
}

void QuickSort(int arr[] , int s, int e) {
    if(s >= e){
        return ;
    }
    // Partition krna hai...
    
    int p=Partition(arr,s,e);
    
    // Left part ko sort kr lo..
    
    QuickSort(arr,s,p-1);
    
    // Right part sort kr lo..
    
    QuickSort(arr,p+1,e);
}

int main()
{
    int arr[6]={3,1,5,4,9,2};
    int n=6;
    
    QuickSort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}