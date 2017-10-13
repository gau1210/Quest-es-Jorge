#include<stdlib.h>
#include<stdio.h>

int main(){

	int i,j,m,n;
	
	int a[2][3],b[2][3],c[2][3];

	scanf("%d %d",&m,&n);

	for(i=0; i<m; i++){

		for(j=0; j<n; j++){

			scanf("%d",&a[i][j]);

	for(i=0; i<m; i++){

		for(j=0; j<n; j++){

			scanf("%d",&b[i][j]);

		        }
		    }
		}
	}

	for(i=0; i<m; i++){

		for(j=0; j<n; j++){

			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);

		}
		printf("\n");
	}
system("pause");
return 0;
}
