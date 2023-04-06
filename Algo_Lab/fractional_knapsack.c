#include<stdio.h>
//#define Swap(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)
void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}
typedef struct item
{
    int w;
    int r;
    int u;
} item;

int main()
{
    int n;
    scanf("%d",&n);
    item arr[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i].w);
        scanf(" %d",&arr[i].r);
        scanf(" %d",&arr[i].u);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if((float) arr[j].r/(float) arr[j].w< (float) arr[j+1].r/ (float) arr[j+1].w)
            {
                swap(&arr[j+1].w,&arr[j].w);
                swap(&arr[j+1].r,&arr[j].r);
                swap(&arr[j+1].u,&arr[j].u);
            }
        }
    }
    int x,t=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==0) break;
        if(arr[i].u*arr[i].w<=x)
        {
            t+=arr[i].u*arr[i].r;
            x-=arr[i].u*arr[i].w;
        }
        else
        {
            t+=(x/arr[i].w)*arr[i].r;
            x-=(x/arr[i].w)*arr[i].w;
        }
    }
    printf("%d",t);
      }
    // for(int i=0;i<n;i++)
    // {
    //     printf(" %d %d %d\n",arr[i].w,arr[i].r,arr[i].u);
    // }