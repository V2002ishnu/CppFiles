 /* wap to print first n natural numbers */
 /*#include<stdio.h>
int main()
{
 int i=0,n;
 printf("enter the number:");
 scanf("%d",&n);
 while(i<n)
 {
 	printf("the numbers are :%d\n",i+1);
 	i++;
 	
 }

return 0;
}*/
/* wap to print n natural numbers in reversed order*/
/*#include<stdio.h>
int main()
{
	int i=0,n; 
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=n;i;i--)
	{
		printf("the numbers are in reversed order:%d\n",i);
		
	}
	return 0;
	
}*/

/* wap to print a multiplication of a given number n*/
/*#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("the table of n is:%d\n",i*n);
		
	}
	return 0;
}
*/
/* wap to print a table of 10 in reversed order*/
 /* #include<stdio.h>
int main()
{
	int i=0,n=10;
	for(i=10;i;i--)
	{
		printf("the table of 10 is in reversed order :%d\n",i*n);	
	}
	return 0;
	
}*/
/* wap to print the sum of first 10 natural numbers*/

/*	int n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("sum of the given number is:%d\n",sum);*/
/*	int i=0,n=10,sum=0;
	for(int i=0;i<=n;i++) 
	{
		sum+=i;	
		
	}
	printf("the sum of the first  10 natural number is %d",sum);
		
	return 0;
}*/
/* wap to print a factorial of a given number */
/*int i=0,n,factorial=1;
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	factorial*=i;
}
printf("the factorial of a given number is %d\n",factorial);
return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // gg
    // ww
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sg
    // gs
    // sw 
    // ws
    // gw
    // wg
    

    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }

    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }

    if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
    
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}

















































