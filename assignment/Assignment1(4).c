#include <stdio.h>
#include <stdlib.h>

//typedef struct Cargo{
//	char type[100];
//}cargo_t;
typedef struct ship{	
	int cargoSize;
	char type[101];
	int numCargo;
//	cargo_t *cargo;
}ship_t;
typedef struct Identification{	
	int position;
	int id;
	ship_t *ship;
}id_t;
void addShip(int cargoLength){
int i,j,k;
int positionCount, idCount=0;
int shipID, shipPosition;
int numCargo;

id_t * idArr;
	idArr = (id_t*)calloc(10, sizeof(id_t));
//			scanf("%d", &numCargo);
			for(i=0; i<1;i++)
			{
			idArr[positionCount].ship = (ship_t *)calloc(10000, sizeof(ship_t));
			idArr[positionCount].position = shipPosition++;
			idArr[positionCount].id = shipID++;
			idArr[positionCount].ship[0].numCargo = numCargo;
		
				for(j=0; j<numCargo;j++)
				{
					scanf(" %d", &idArr[positionCount].ship[j].cargoSize);
					scanf(" %s", idArr[positionCount].ship[j].type);
				}
			positionCount++;
			idCount++;
			}
}
int main(void){
	int function;
	int a;
	int shipPosition, positionCount=0, positionLocation, containerLocation;
	int shipID, idCount=0;
	int i,j,k;
	int numCargo;
	shipPosition = 1;
	shipID = 1;
	
	id_t * idArr;
	idArr = (id_t*)calloc(10, sizeof(id_t));

//	idArr[positionCount].position = shipPosition;

	
//	idArr[positionCount].ship[idCount].id = shipID;	
//	
	
	while(function != -1)
	{
	scanf("%d", &function);
		if(function == 0)
		{
			
		}
	
		if(function == 1)
		{
			scanf("%d", numCargo);
			addShip(numCargo);
//		scanf("%d", &numCargo);
//			for(i=0; i<1;i++)
//			{
//			idArr[positionCount].ship = (ship_t *)calloc(10000, sizeof(ship_t));
//			idArr[positionCount].position = shipPosition++;
//			idArr[positionCount].id = shipID++;
//			idArr[positionCount].ship[0].numCargo = numCargo;
//		
//				for(j=0; j<numCargo;j++)
//				{
//					scanf(" %d", &idArr[positionCount].ship[j].cargoSize);
//					scanf(" %s", idArr[positionCount].ship[j].type);
//				}
//			positionCount++;
//			idCount++;
//			}
		}
		//output id @ ship position
		if(function == 2)
		{
			scanf("%d", &positionLocation);
			if(positionLocation > positionCount)
			{
				printf("-1\n");
				continue;
			}
			if(positionLocation<1)
			{
				printf("-1\n");
				continue;
			}
			printf("%d \n", idArr[positionLocation-1].id );
		}
		//output cargo @ pos and container locale
		if(function == 3)
		{
			scanf("%d", &positionLocation);
			scanf("%d", &containerLocation);
			if((containerLocation)>idArr[positionLocation-1].ship[0].numCargo)
			{
				printf("-1\n");
				continue;
			}
			if((containerLocation)<idArr[positionLocation-1].ship[0].numCargo)
			{
				printf("-1\n");
				continue;
			}
			printf("%s\n",idArr[positionLocation-1].ship[containerLocation-1].type);
		}
	}
//	for(i=0; i<positionCount; i++){
//		
//	printf("%d ", idArr[i].position );
//	printf("%d \n", idArr[i].id );
//	printf("%d %s\n", idArr[i].ship[i].cargoSize, idArr[i].ship[i].type);
//	}




	return EXIT_SUCCESS;
}
