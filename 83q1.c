#include<stdio.h>
void main(){
	int i,j;
	int sum=0;
	int count=0;
	int a[3][3]={
	{2,3,4},
	{5,6,7},
	{7,8,9},
	};
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d \n",a[i][j]);
			count++;
			sum+=a[i][j];
		}
	}
	printf("the length of array:%d\n",count);
	printf("average of array: %d",sum/count);
}
	
		
		
	

