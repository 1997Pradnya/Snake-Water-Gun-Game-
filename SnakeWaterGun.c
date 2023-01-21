#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int SnakeWaterGun(char You,char Comp)
  {
     // draw condition 
	 // SS
	 // WW
	 // GG
	 
    if(You == Comp)
	{
	 return 0;
	}
	
	 // Non-draw condition 
	 // SW
	 // WS
	 // WG
	 // GW
	 // GS
	 // SG
	 
	if(You=='S' && Comp=='W')
	{
	 return 1;
	}
	else if(You=='W' && Comp=='S')
	{
	 return -1;
	}
	
	if(You=='W' && Comp=='G')
	{
	 return 1;
	}
	else if(You=='G' && Comp=='W')
	{
	 return -1;
	}
	
	if(You=='G' && Comp=='S')
	{
	 return 1;
	}
	else if(You=='S' && Comp=='G')
	{
	 return -1;
	}
  
}


int main()
{
   int Result=0;
   char You='\0',Comp='\0';
   
   srand(time(0));
   int Number = rand()%100 +1;
   
   printf("The random number is: %d\n",Number);
   if(Number<33)
   {
	   Comp = 'W';
   }
   else if(Number>33 && Number<66)
   
   {
	   Comp = 'G';
   }
   else if(Number>66)
   {
	   Comp = 'S';
   }
   
   printf("Enter any one from this 'S' for Snake,'G' gor Gun, 'W' for Water \n");
   scanf("%c",&You);
  
   Result = SnakeWaterGun(You,Comp);
   
   printf("You choose %c and Comp choose %c :\n",You,Comp);
   
   if(Result == 0)
   {
     printf("Game Draw!\n");
   }
   else if(Result == 1)
   {
     printf("You Win!\n");
   }
   else if(Result == -1)
   {
     printf("You Loose!\n");
   }
   
  return 0;
}