/*#include<stdio.h>
int main()
{
	int marks[4];
	marks[0]=35;
	marks[1]=35;
	marks[2]=35;
	marks[3]=35;
	printf("marks of 1st student is :%d\n",marks[0]);
	printf("marks of 2nd student is :%d\n",marks[1]);
	printf("marks of 3rd student is :%d\n",marks[2]);
	printf("marks of 4th student is :%d\n",marks[3]);
	return 0;
	
}
*/
/*#include<stdio.h>
int main()
{
	int arr[2]={1,3};
	printf("the address of the first element of array is:%d\n",&arr[0]);                                    
	// 1 integer=4 bytes
	// 1 char=1 byte
	// 1 float=4 bytes	
	arr[0]++;
	printf("the value is %d",&arr[0]);																					
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int marks[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the marks of student %d",i+1);
		scanf("%d",&marks[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("the marks of the student %d is :%d\n",i,marks[i]);
	}
	return 0;
	
}























