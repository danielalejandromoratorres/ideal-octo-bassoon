#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>




void imprimir(int mapa[20][20]);
int main()
{
	int mapa[20][20]={{3,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4},
				      {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					  {1,8,8,4,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,7,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,0,0,1,0,1,0,0,8,8,8,1,0,0,0,0,0,0,0,1},
					  {1,0,0,1,0,1,0,0,0,0,0,5,8,8,8,0,0,8,8,1},
					  {1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,8,8,1},
					  {1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,0,0,1,0,1,0,0,0,0,0,1,1,1,1,0,0,8,8,1},
					  {1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,0,0,1,0,1,0,0,0,0,0,1,1,1,1,0,0,8,8,1},
					  {1,8,8,6,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,0,0,0,0,1,8,8,8,0,0,1,8,8,8,8,8,8,0,1},
					  {1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
					  {1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,3,8,8,8,1},
					  {1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1},
					  {1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,9,1},
					  {5,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,6}};
					  
	int i,j,fp,cp,con;
	char tecla,R,vec[100];
	imprimir(mapa);
	fp=1;cp=0; 
	mapa[fp][cp]=10;
	con=0;
	
	printf("\n\n\n\ningrese las coordenadas\n");
	gets(vec);
	printf("\npresione R para comenzar\n");
	scanf("%c",&tecla);
	j=strlen(vec);

	for(i=0;i<(j);i++){
		mapa[fp][cp]=0;
		if(vec[i]=='a'){
			if(mapa[fp][cp-1]==0){
				cp--;
				}else{
					system("cls");
					printf("EL ROBOT HA SIDO ATRAPADO\n");
			system("pause");
			}
		
		}
			if(vec[i]=='d'){
			if(mapa[fp][cp+1]==0)
			{
				cp++;
			}else{
				system("cls");
					printf("EL ROBOT HA SIDO ATRAPADO\n");
			system("pause");
					
			}
		}
		if(vec[i]=='w'){
			if(mapa[fp-1][cp]==0)
			{
				fp--;
			}else{
				system("cls");
					printf("EL ROBOT HA SIDO ATRAPADO\n");
			system("pause");
			}
		}
		if(vec[i]=='s'){
			if(mapa[fp+1][cp]==0)
			{
				fp++;
			}else{
				system("cls");
					printf("EL ROBOT HA SIDO ATRAPADO\n");
			system("pause");
			}
		}
		if(mapa[fp-1][cp]==7||mapa[fp+1][cp]==7||mapa[fp][cp-1]==7||mapa[fp][cp+1]==7){
		con++;
		system("cls");
					printf("HAZ GANADO\n");
			system("pause");
					
					
		
	}
	if(mapa[fp-1][cp]==9||mapa[fp+1][cp]==9||mapa[fp][cp-1]==9||mapa[fp][cp+1]==9){
		con++;
	
				system("cls");
					printf("HAZ GANADO\n");
			system("pause");	
			
	}
	
	
	
	
	
	
		mapa[fp][cp]=10;
		
		
		
		
		
		
		
		imprimir(mapa);
		Sleep(80);
	}
	
	
if(con==1){
		for(i=0;i<j;i++);{
		if(vec[i]=='a'){
			if(mapa[fp][cp+1]==0){
				cp++;
				}
			}
		
		
			if(vec[i]=='d'){
			if(mapa[fp][cp-1]==0)
			{
				cp--;
			}
		}
		if(vec[i]=='w'){
			if(mapa[fp+1][cp]==0)
			{
				fp++;
			}
		}
		if(vec[i]=='s'){
			if(mapa[fp-1][cp]==0)
			{
				fp--;
			}
			}
		
		if(mapa[fp-1][cp]==2||mapa[fp+1][cp]==2||mapa[fp][cp-1]==2||mapa[fp][cp+1]==2){
		
		system("cls");
					printf("HAZ GANADO\n");
			system("pause");
	}
		mapa[fp][cp]=10;
		
		
		
		
		
		
		
		imprimir(mapa);
		Sleep(80);
		}
	}

	

	
	
  
}
		
	
	
	
	
	
	
	
	
	
	
void imprimir(int mapa[20][20])
{
	int i,j;
	system("CLS");
	printf("\n\t\t   EMERGENCIA");
	for(i=0;i<20;i++)
	{
		printf("\n\t\t");
		for(j=0;j<20;j++)
		{
			if(mapa[i][j]==0)
			{
				printf(" ");
			}			
			if(mapa[i][j]==10)
			{
				printf("\1");
			}
			if(mapa[i][j]==1)
			{
				printf("%c", 186);
			}
			if(mapa[i][j]==5)
			{
				printf("%c", 200);
			}
			if(mapa[i][j]==3)
			{
				printf("%c", 201);
			}			
			if(mapa[i][j]==4)
			{
				printf("%c", 187);
			}
			 if(mapa[i][j]==6)
			{
				printf("%c", 188);
			}
			if(mapa[i][j]==8)
			{
				printf("%c", 205);
			}
			if(mapa[i][j]==7)
			{
				printf("K" );
			}
			if(mapa[i][j]==9)
			{
				printf("J");
			}
			 if(mapa[i][j]==2)
			{
				printf("%c", 219);
			}
			
			
			
		}
	}

}
