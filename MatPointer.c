#include<stdio.h>
int main(){
    int mat[3][3],i,j;
    printf("Input elements in the matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int *ptr = &mat;
    for(i=0;i<3;i++){
            for(j=0;j<3;j++)
            printf("%d ",*((ptr+i*3)+j));
            printf("\n");
    }
    int sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           if(i==j){
               sum=sum+mat[i][j];
           }
        }
    }
    printf("Sum of First diogonal is=%d\n",sum);
    sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           if(i+j==3-1){
               sum=sum+mat[i][j];
           }
        }
    }
    printf("Sum of Second diogonal is=%d\n",sum);
    return 0;
}
