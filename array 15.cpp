#include <stdio.h>
int main()
{
	int a[3][3];
    int i,j;
	for (i=0;i<3;i++)	
   {
		for (j=0;j<3;j++)
		{
			printf ("enter the value ");
			scanf ("%d",&a[i][j]);
			
		}
	}
		for (i=0;i<3;i++)
    {
			for (j=0;j<3;j++)
			{

		        printf ("%4d",[i][j]);
	        }
	  }
	  printf ("\n");
	
	return 0;
}