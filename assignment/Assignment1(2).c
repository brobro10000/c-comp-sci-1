
///* sscanf example */
//#include <stdio.h>
//#include <stdlib.h>
//int main ()
//{
////  char sentence []="5 3 Car 3 Hat 3 Cat 3 Dog ";
////  char str [20];
////  int i;
////
////  sscanf (sentence,"%*d %d %s",&i,str);
////  printf ("%s -> %d\n",str,i);
////  
//
//  return EXIT_SUCCESS;
//}

#include <stdio.h>
#include <stdlib.h>
typedef struct ship{
	int cargoSize;
	char type[100];
	int id;
}ship_t;
typedef struct Identification{
	
	int position;
	ship_t *ship;
}id_t;



int main(){
	int function;// entry function
	int numCargo;// num of cargo
	int idCount = 0;//id counter
	int idPosition=0;//id arry pos
	int posCount = 0;//position counter
	int posPlace; //pos arry pos
	id_t * idArr;//id struct
	idArr = (id_t*)calloc(25, sizeof(id_t));//id struct mem
	ship_t *shipArr;// ship struct
	
	
	while(function != -1)
	
	{
	//initial input scan
	scanf("%d",&function);
	if(function == 0)
	{
		return EXIT_FAILURE;
	}
	//adding ships
	if(function == 1)
	{
		
		int j; //variable for loop
		int i;// variable for for loop

	//		idArr[posPlace].ship[idPosition] = (ship_t*)calloc(10, sizeof(ship_t));
//			for(j=0; j<1;j++)
//			{
//			idArr[posPlace].position = ++posCount;
//			idArr[posPlace].ship[idPosition].id = ++idCount;	
//			posPlace++;
//			idPosition++;	
//			}
			
			scanf("%d",&numCargo);//scan for dynamic cargo
			for(i=0;i<numCargo;i++)
			{
			scanf(" %d", &idArr[idPosition].ship[i].cargoSize);
			scanf(" %s", idArr[idPosition].ship[i].type);
			}
		
	}
	}
	int j;
	int i;


	for(j=0; j<numCargo; j++){
		printf("\n %d %s", shipArr[j].cargoSize, shipArr[j].type);
	}
//	for(i=0; i<posCount; i++)
//		printf("\n%d %d", idArr[i].position, idArr[i].ship[i].id);
	return EXIT_SUCCESS;
}

	
