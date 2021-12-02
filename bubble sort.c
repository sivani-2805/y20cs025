#include<stdio.h>
int main()
{
    int i,j,n,count=0,temp;
    scanf("%d" ,&n);
    int *a=malloc(sizeof(int) * n);
    for(int a_i=0; a_i<n; a_i++)
    scanf("%d" ,&a[a_i]);
    for (int i = 0; i < n; i++) {
    
    for (int j = 0; j < n - 1; j++) {

        if (a[j] > a[j + 1]) {
            int temp= a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            
            count+=1;
        }
    }
    
}
printf("Array is sorted in %d swaps.\n" ,count);
printf("First Element: %d\n" ,a[0]);
printf("Last Element: %d\n" ,a[n-1]);

  return 0;
}
