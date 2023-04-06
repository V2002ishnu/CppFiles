// #include <stdio.h>
// #include <stdlib.h>
// #define n 5
// int stack[n];
// int top = -1;

// void push(int x)
// {
//     if (top == n - 1)
//     {
//         printf("overflow\n");
//     }
//     else
//     {
//         top++;
//         stack[top] = x;
//     }
// }

// void pop()
// {
//     if (top == -1)
//     {
//         printf("underflow\n");
//     }
//     else
//     {
//         top--;
//     }
// }
// void peek()
// {
//     if (top == -1)
//     {
//         printf("Stack is empty!!\n");
//     }
//     else
//     {
//         printf("%d", stack[top]);
//     }
// }

// void printStack()
// {
//     for (int i = top; i >= 0; i--)
//     {
//         printf("%d", stack[i]);
//         }
// }
// int main()
// {

//     int choice;
//     scanf("%d", &choice);
//     int t;
//     printf("enter the value until u stop:");
//     scanf("%d", &t);
//     while (t--)
//     {
//         switch (choice)
//         {

//         case 1:
//             int x;
//             printf("enter the value u want to insert: ");
//             scanf("%d", &x);
//             push(x);
//             printStack();
//             break;

//         case 2:
//             pop();
//             break;

//         case 3:
//             peek();

//         case 4:
//             printf("entire stack is :\n");
//             printStack();
//         }
//     }
//     // printStack();
//     return 0;
// }
#include<stdio.h>

#include<stdlib.h>

void bubblesort(int arr[], int n){
	for(int i=1;i<n;i++){                                   
		for(int j=0;j<n-i;j++){                             
			if(arr[j] > arr[j+1]){
				// swap(arr[j],arr[j+1]);
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
			}
		}
	}
}

int binarysearch(int arr[], int n, int key){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;                     
		if(key==arr[mid]){
			return mid;
		}
		
		else if(key>arr[mid]){
			start=mid+1;
		}
		
		else if(key<arr[mid]){
			end=mid-1;
			
		}
	
		mid=start+(end-start)/2;
		}
		return -1;
	}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int key;
    scanf("%d",&key);
    bubblesort(arr,n);
    printf("afer sorting :");
        for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
	int ans=binarysearch(arr,n,key);
	// cout<<"the value at index :"<<ans<<endl;
	printf("the value at index : %d", ans);
	return 0;
	
}



