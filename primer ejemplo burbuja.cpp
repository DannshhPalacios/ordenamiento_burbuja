#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
int resp=1,i,n,aux,j;

main()
{
	
	while(resp==1)
	{
		srand(time(NULL));
		printf("Ingrese los datos que quiere:\n");
		scanf("%d",&n);
		int numeros [n];
		for(i=0; i<n;i++)
		{
			numeros[i]=rand()%100;
		}
		printf("\nLos elementos generados son: ");
		for (i=0; i<n; i++)
		{
			printf("\ndato[%d]=%d", i, numeros[i]);
		}
		printf ("\nLos datos ordenados son: ");
		/*//Metodo burbuja
		for(i=0;i<n-1;i++) //para las interacciones
		{
			for(j=0;j<n-1;j++)
			{
				if (numeros[j]>numeros[j+1])
				{
					aux=numeros[j];
					numeros[j]=numeros[j+1];
					numeros[j+1]=aux;
				}
				
			}
		}*/
		for(i=0; i<n; i++)
		{
			printf("\ndato[%d]=%d",i,numeros[i]);
		}
		printf("\nEl dato menor es %d y el dato mayor %d ",numeros[0], numeros[n-1]);
	printf("\npara continuar presione 1: ");
	scanf("%d", &resp);	
	}
}
