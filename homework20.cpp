#include <stdio.h>  

#include <stdlib.h> 

struct phone 

{

   char i[16],y[10];

   int t,r;

}; 

int main(void)

{

    int i;


	printf("To Introduce  Phone \n");

	printf("-------------------------------------------------\n"); 

    struct phone p[5]={  

	"¤p¦Ì", "A1", 2017,6000, 

    "Samsung", "S10", 2018,35000, 

    "NOKIA", "3310", 2000,8000, 

    "OPPO", "R15", 2018, 9000, 

    "APPLE", "IPHONE X", 2018, 52000

	};

    

    for (i=0; i<5; i++) 

    {

        printf("%s %s %4d %5d\n", p[i].i, p[i].y, p[i].t, p[i].r);

    }

    system("pause"); 

    return 0;

}

