#include<stdio.h>
#include<conio.h>
int main (){
	int a,b,i,j,menor,x,y;
	printf("ingrese la primera matriz \n");
	printf("ingrese el numero de filas ");
		scanf("%d",&a);
		printf("ingrese el numero de columnas ");
		scanf("%d",&b);
		int m[a][b];
		for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
			scanf("%d",& m[i][j]);
		}
	}
	printf("la matriz es \n ");
		for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
			printf("%d",m[i][j]);
		printf("\t");
	}
	printf("\n");
}
// ordenar la matriz  ascendente 
for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
			 for (x=1;x<=a;x++){
			 for (y=1;y<=b;y++){	
			if (m[i][j]<m[x][y]){
			
			menor=m[i][j];
			m[i][j]=m[x][y];
			m[x][y]=menor;
		}
}
}
}
}
printf("la matriz ordenada ascendentemente  es \n ");
for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
				printf("%d",m[i][j]);
				printf("\t");	
			}
			printf("\n");
}
printf("ingrese la segunda matriz \n");
	printf("ingrese el numero de filas ");
		scanf("%d",&a);
		printf("ingrese el numero de columnas ");
		scanf("%d",&b);
int n[a][b],mayor;
		for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
			scanf("%d",& n[i][j]);
		}
	}
	printf("la matriz es \n ");
		for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
			printf("%d",n[i][j]);
		printf("\t");
	}
	printf("\n");
}
// ordenar la matriz descendente
for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
			for (x=1;x<=a;x++){
			for (y=1;y<=b;y++){	
			if (n[i][j]>n[x][y]){
			mayor=n[i][j];
			n[i][j]=n[x][y];
			n[x][y]=mayor;
		}
}
}
}
}
printf("la matriz ordenada descendentemente es \n ");
for (i=1;i<=a;i++){
			for (j=1;j<=b;j++){
				printf("%d",n[i][j]);
				printf("\t");	
			}
				printf("\n");
		}
printf("vector fila \n ");{		
		int vector [a];
		vector [a]=m[i][j];
		for (i=1;i<=a;i++)
			scanf("%d",& vector[i]);
			for (i=1;i<=a;i++)
			printf("%d", vector[i]);
			
		printf("\n");
		}
printf("vector columna \n ");{		
		int vector [b];
		vector [b]=n[i][j];
		for (j=1;j<=b;j++)
			scanf("%d",& vector[j]);
			for (j=1;j<=b;j++)
			printf("%d", vector[j]);
			printf("\n");
}

}
