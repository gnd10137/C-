//#include <stdio.h>
//int main()
//{
//	int n;
//	n = 10;
//	int *p;
//	p = &n;
//	printf("%d %d",p,*p);
//}

//#include <stdio.h>
//int main(){
//	int arr1[4][5];
//	int arr2[7][5];
//	float arr3[4][5];
//	double arr4[4][5];
//	char arr5[9][12];
//}

//#include <stdio.h>
//int main()
//{
//	int ar1[3][4] = {0};
//	int ar3[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//	
////	for(int i = 0; i < 10; i++){
////		printf("%d ", ar1[i]);
////	}
//	
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 4; j++){
//			printf("%d ", ar3[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
//				   {0,0,0,0,0,0,0,2,0},
//				   {0,0,0,0,1,0,0,0,0},
//				   {0,2,0,1,0,0,1,0,0},
//				   {0,0,0,1,0,0,0,0,0},
//				   {0,0,1,0,0,0,1,0,0},
//				   };
//				   
//	int count = 0;
//	for(int i = 0; i <= 5; i++){
//		for(int j = 0; j <= 8; j++){
//			
//			if(ar[i][j]==1){
//				count++;
//			}
//		}
//	}
//	printf("1의 개수 : %d",count);
//}

//#include <stdio.h>
//int main()
//{
//	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
//				   {0,0,0,0,0,0,0,2,0},
//				   {0,0,0,0,1,0,0,0,0},
//				   {0,2,0,1,0,0,1,0,0},
//				   {0,0,0,1,0,0,0,0,0},
//				   {0,0,1,0,0,0,1,0,0},
//				   };
//				   
//	int count = 0;
//	for(int i = 0; i <= 5; i++){
//		for (int j = 0; j <= 8; j++){
//			if (ar[i][j]==2){
//				printf("%d행 %d열\n", i, j);
//			}
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
//				   {0,0,0,0,0,0,0,2,0},
//				   {0,0,0,0,1,0,0,0,0},
//				   {0,2,0,1,0,0,1,0,0},
//				   {0,0,0,1,0,0,0,0,0},
//				   {0,0,1,0,0,0,1,0,0},
//				   };
//				   
//	int count = 0;
//	for(int i = 0; i <= 5; i++){
//		for(int j = 0; j <= 8; j++){
//			if(ar[i][j]==2){
//				ar[i-1][j]=5;
//				ar[i+1][j]=5;
//				ar[i][j-1]=5;
//				ar[i][j+1]=5;
//			}
//		}
//	}
//	for(int i = 0; i <= 5; i++){
//		for(int j = 0; j <= 8; j++){
//			printf("%d ",ar[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
//				   {0,0,0,0,0,0,0,2,0},
//				   {0,0,0,0,1,0,0,0,0},
//				   {0,2,0,1,0,0,1,0,0},
//				   {0,0,0,1,0,0,0,0,0},
//				   {0,0,1,0,0,0,1,0,0},
//				   };
//	int count = 0;
//	for(int i = 0; i <= 5; i++){
//		for(int j = 0; j <= 8; j++){
//			if (ar[i][j]==0){
//				ar[i][j]=1;
//			}
//			else if(ar[i][j]!=0){
//				ar[i][j]=0;
//			}
//		}
//	}
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int ar[6][6] = {0};
	int i, j;
	int max = 0;
	srand(time(NULL));
	
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			ar[i][j] = rand()%99+1;
		}
	}
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(ar[i][j]>max){
				max = ar[i][j];
			}
		}
	}
	
	i = 0;
	while(i < 6)
	{
		j = 0;
		while(j < 6)
		{
			printf("%3d", ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("%d",max);
	return 0;
}
