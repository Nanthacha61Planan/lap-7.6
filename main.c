#include <stdio.h>


  printf("PROGRAM METRIX CALCULATOR\n");
  int metrix1[6][4];
  int metrix2[4][5];
  for(int m = 0 ; m < 6 ; m++){
  for(int n = 0 ; n < 4 ; n++){
    printf("Enter Number Metrix - 1 Column %d Row %d : ",m+1,n+1);
    scanf("%d",&metrix1[m][n]);
  }
  }
  for(int x = 0 ; x < 4 ; x++){
  for(int y = 0 ; y < 5 ; y++){
    printf("Enter Number Metrix - 2 Column %d Row %d : ",x+1,y+1);
    scanf("%d",&metrix2[x][y]);
  }
  }
printf(" |  %5d   %5d   %5d   %5d   |\n",metrix1[0][0],metrix1[0][1],metrix1[0][2],metrix1[0][3]);
printf(" |  %5d   %5d   %5d   %5d   |\n",metrix1[1][0],metrix1[1][1],metrix1[1][2],metrix1[1][3]);
printf(" |  %5d   %5d   %5d   %5d   |\n",metrix1[2][0],metrix1[2][1],metrix1[2][2],metrix1[2][3]);
printf(" |  %5d   %5d   %5d   %5d   |\n",metrix1[3][0],metrix1[3][1],metrix1[3][2],metrix1[3][3]);
printf(" |  %5d   %5d   %5d   %5d   |\n",metrix1[4][0],metrix1[4][1],metrix1[4][2],metrix1[4][3]);
printf(" |  %5d   %5d   %5d   %5d   |\n",metrix1[4][0],metrix1[4][1],metrix1[4][2],metrix1[4][3]);
printf("-----------------------------------------\n");
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",metrix2[0][0],metrix2[0][1],metrix2[0][2],metrix2[0][3],metrix2[0][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",metrix2[1][0],metrix2[1][1],metrix2[1][2],metrix2[1][3],metrix2[1][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",metrix2[2][0],metrix2[2][1],metrix2[2][2],metrix2[2][3],metrix2[2][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",metrix2[3][0],metrix2[3][1],metrix2[3][2],metrix2[3][3],metrix2[3][4]);

printf("Calculation (Metrix 1) X (Metrix 2)\n");
int result[6][5] = {
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0}};
for(int i = 0 ; i < 6 ; i++){
	for(int j = 0 ; j < 5 ; j++){
		for(int k = 0 ; k < 4; k++){
			result[i][j] += (metrix1[i][k] * metrix2[k][j]);
		}
	}
}
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",result[0][0],result[0][1],result[0][2],result[0][3],result[0][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",result[1][0],result[1][1],result[1][2],result[1][3],result[1][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",result[2][0],result[2][1],result[2][2],result[2][3],result[2][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",result[3][0],result[3][1],result[3][2],result[3][3],result[3][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",result[4][0],result[4][1],result[4][2],result[4][3],result[4][4]);
printf(" |  %5d   %5d   %5d   %5d   %5d  |\n",result[5][0],result[5][1],result[5][2],result[5][3],result[5][4]);
  return 0;
}