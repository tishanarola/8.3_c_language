#include<stdio.h>
void main(){
	int i,j,sum=0, a[3][3];
	printf("enter elements of matrix");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix is:");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d \t", a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(i==j){
				sum=sum+a[i][j];
				
			}
		}
	}
	printf("sum of diagonal is:%d",sum);
}
