#include<stdio.h>
void main(){
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("enter the first matrix");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("the first matrix is");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("the second matrix is");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of two matrix is:");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
