#include<stdio.h>
void read_array(int arr[],int n);
void print_array(int arr[],int n);
int main()
{
int n;
printf("enter the arry size\n");
scanf("%d",&n);
int arr[n];
read_array(arr,n);
print_array(arr,n);
return 0;
}
void read_array(int arr[],int n)
{
printf("enter %d data\n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
void print_array(int arr[],int n)
{
printf("\n arry elements are:\n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}
