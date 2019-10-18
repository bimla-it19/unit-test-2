#include<stdio.h>
int main() {
    int n,a[100],find,count=0;
    printf("input size:");
    scanf("%d",&n);
    printf("input vector:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the number u want to find");
    scanf("%d",&find);
    for(int i=0;i<n;i++)
    {
        if(a[i]==find)
        count++;
    }
    if(count>0)
     printf("element %d is found",find);
   else
   printf("element %d is not found",find);
   
   return 0;
}
