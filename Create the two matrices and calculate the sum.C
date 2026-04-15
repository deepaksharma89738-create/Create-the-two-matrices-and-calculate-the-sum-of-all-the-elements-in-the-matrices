// Create the two matrices and calculate the sum of all the elements in the matrices easist way.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum=0,i,j;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=a[i][j]+b[i][j];
        }
    }
    printf("The sum of all the elements in the matrices is: %d",sum);
    return 0;
}