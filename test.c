// #include<stdio.h>
// #include<stdlib.h>
// struct node{
// 	int data;
// 	struct node *next;

// };

// void print(struct node *ptr){
// 	while(ptr != NULL){
// 		printf("%d",ptr->data);
// 		printf("\a");
// 		ptr=ptr->next;
// 	}

// }

// // struct node *insertatbegin(struct node *head, int data){

// // 	struct node *ptr=(struct node *)malloc(sizeof(struct node));
// // 	ptr->next=head;
// // 	ptr->data=data;
// // 	head=ptr;
// // 	return head;
// // }

// int main(){

// 	// struct node *head;
// 	// struct node *second;
// 	// struct node *third;

// 	// head=(struct node *)malloc(sizeof(struct node));

// 	// second=(struct node *)malloc(sizeof(struct node));

// 	// third=(struct node *)malloc(sizeof(struct node));

// 	// head->data=7;
// 	// head->next=second;

// 	// second->data=7;
// 	// second->next=third;

// 	// third->data=7;
// 	// third->next=NULL;

// 	// // print(head);
// 	// struct node *ptr=(struct node *)malloc(sizeof(struct node));

// 	// ptr=insertatbegin(head,9);
// 	// print(head);

// 	int n;
// 	scanf("%d",&n);
// 	struct node *head,*newnode,*temp;
// 	head=0;
// 	temp=head;
// 	for(int i=0;i<n;i++){

// 	newnode=(struct node *)malloc(sizeof(struct node));

// 	// int data;
// 	printf("enter the data :");

// 	if(head==0){
// 		head->next=newnode;
// 		scanf("%d",&newnode->data);
// 		// newnode->data=data;
// 	}

// 	else{
// 		temp->next=newnode->next;
// 	}

// 	print(head);

// 	}

// }

#include <stdio.h>

// #include <stdlib.h>

// #include <string.h>

// #include<math.h>

// #define ll long long int

// int ans(int a){
// 	return a-1;
// }

// int main()
// {
// 	ll n, m;
// 	scanf("%lld %lld", &n, &m);
// 	ll arr[n + 1];

// 	memset(arr, 0, sizeof(arr));
// 	int i = 0;

// 	// Initialization of first loop..........


// 	while (i < m)
// 	{
// 		int z, h;
// 		scanf("%d", &z);

// 		scanf("%d", &h);
		
// 		arr[z]++;

// 		arr[h]++;

// 		i++;
// 	}
// 	ll flag = 0;

// 	// Initialization of second loop..........

// 	for (int j = 1; j <= n; j++)
	
// 	{
	
// 		ll count = (n - arr[j] - 1) * arr[j];
	
// 		flag += count;
	
// 	}

// 	// printing the result...........

// 	int val=ans(n);

// 	int val2=n-2;
	
// 	printf("%lld\n", (n * val * val2 ) / 6ll - flag / 2ll);

// 	return 0;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//     } 

//     int key;
//    scanf("%d",&key);
//     int ct=0;
//     int ans=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             ct++;
//             ans=i;
//             break;
//         }
//     }
//     if(ct == 0){
//         printf("element not found \n");
//     }
//    else{
//     printf("Element found at position : %d\n" ,ans);
//    }

// }
// merge sort...........
#include<stdio.h>
void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int fr[l1];
    int sc[l2];
    int k=s;
    for(int i=0;i<l1;i++)
    {
        fr[i]=arr[k++];
    }
    for(int i=0;i<l2;i++)
    {
        sc[i]=arr[k++];
    }
    int i1=0,i2=0,i=s;
    while(i1<l1 && i2<l2)
    {
        if(fr[i1]<=sc[i2])
        arr[i++]=fr[i1++];
        else
        arr[i++]=sc[i2++];
    }
    while(i1<l1)
    {
        arr[i++]=fr[i1++];
    }
    while(i2<l2)
    {
        arr[i++]=sc[i2++];
    }
}


void merge_sort(int *arr, int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int n=15;
    int arr[15]={7,2,5,3,4,0,-3,2,11,44,11,44,0,2,2};
    int s=0,e=n-1;
    merge_sort(arr,s,e);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

