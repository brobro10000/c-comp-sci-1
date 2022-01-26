#include <stdio.h>
#include <stdlib.h>

typedef struct ship{	
	int cargoSize;
	char type[101];
	int numCargo;
}ship_t;
typedef struct Identification{	
	int position;
	int id;
	ship_t *ship;
}id_t;

int main(void){
	int function;
	int shipPosition, positionCount=0, positionLocation, containerLocation, removePosition;
	int shipID;
	int i,j,k;
	int numCargo;
	shipPosition = 1;
	shipID = 1;
	
	id_t * idArr;
	idArr = (id_t*)calloc(25, sizeof(id_t));

//	idArr[positionCount].position = shipPosition;

	
//	idArr[positionCount].ship[idCount].id = shipID;	
//	
	
	while(function != -1)
	{
	scanf("%d", &function);
//add ship
		if(function == 1)
		{
		scanf("%d", &numCargo);
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
			}
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
			if((containerLocation)<=0)
			{
				printf("-1\n");
				continue;
			}
			printf("%s\n",idArr[positionLocation-1].ship[containerLocation-1].type);
			
		}
	
	// remove ship Work in progress
		if(function == 0)
		{	
			scanf("%d", &removePosition);
			free(idArr[removePosition-1].ship);
			idArr[removePosition-1].ship = NULL;
			positionCount--;
			
		}
	}
	return EXIT_SUCCESS;
}
