/**********************************************************
	file:	Maze.c
	Author: meiyi
	Date:	2014-4-25
**********************************************************/

#include <stdio.h>

#define	MAZE_ZOOM_LENGTH	7
#define	MAZE_ZOOM_WIDTH		7

//define Maze zoom array
unsigned char Maze_zoom[MAZE_ZOOM_LENGTH][MAZE_ZOOM_WIDTH]=
	 	{2,1,2,2,2,2,2,		
	  	 2,1,1,1,1,1,2,
		 2,1,2,1,2,1,2,
		 2,1,1,2,1,2,2,
		 2,2,1,2,1,2,2,
		 2,1,1,1,1,1,1,
	 	 2,2,2,2,2,2,2	
		};

int main()
{
	int i, j;

	//init_Maze_zoom();

	printf("显示迷宫：\n");
	for(i = 0; i < MAZE_ZOOM_LENGTH; i++)
	{	
		for(j = 0; j < MAZE_ZOOM_WIDTH; j++)
		{
			if(Maze_zoom[i][j] == 2)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
}
