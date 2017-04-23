/*
   Author: Aditya P. Nambiar
   Branch: IT-A
   Roll no.: 65

   Title: 4 Patterns in C
*/
#include <stdio.h>
#include <conio.h>
//#include <graphics.h>
int diamond();  // To print the diamond pattern output.
int rect(); //To print the rectangle pattern output.
int triangle(); // To print the triangle pattern output.
int rhombus(); // To print the rhombus pattern output.

int main(){
	int choice;//gd=DETECT,gm;
	clrscr();
	//initgraph(&gd,&gm,"C:\\TurboC4\\TC\\BGI\\");
	textcolor(370);
	cprintf("\n What would you like to see?\n");
	//rectangle(100,100,200,200);
	//textcolor(370);
	printf("\n Shape \t\t       Key \n");
	printf("\n Diamond \t\t 1 ");
	printf("\n Rectangle \t\t 2 ");
	printf("\n Triangle \t\t 3 ");
	printf("\n Rhombus \t\t 4 ");
	printf("\n\n Enter the key for a shape you want: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		diamond();
		goto down;

	}
	else if(choice==2)
	{
		rect();
		goto down;
	}
	else if(choice==3)
	{
		triangle();
		goto down;
	}
	else if(choice==4)
	{
		rhombus();
		goto down;
	}
	else
	{
		textcolor(55+128);
		cprintf("\n Invalid choice! \n\n");
	}
	down: getch();
	//getch();
	//closegraph();
	//getch();
	return 0;
}

int diamond() {
	int i, j,space;
	int n;
	char outline[30];
	clrscr();

	printf("\n Enter the symbol of which you would want the pattern to be made from: ");
	scanf("%s",outline);
	printf("\n Enter n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)    // n = no. of rows.
	{
		for (space=n-i;space>=1;space--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{     // textcolor(255);
		       printf("%s",outline);
		     //  delay(1000);

		}
		printf("\n");
       }
       for(i=0;i<=n;i++)
       {

		for (space=i;space>=1;space--)
		{
			printf(" ");
		}
		for(j=1;j<=2*(n-i)-1;j++)
		{      //textcolor(255);
		       printf("%s",outline);

		}
		printf("\n");
       }
       getch();
       return 0;
}

int triangle() {
	int i, j, space, n;
	char outline[30];
	clrscr();
	printf("\n Enter the symbol of which you would want the pattern to be made from: ");
	scanf("%s",outline);
	textcolor(59);    // To make it blink with color: put two such numbers whose addition results in a value less than 255.
	//gotoxy(15,10);
	cprintf("\n Enter no. of rows: ");
	//gotoxy(40,12);
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(space=n-i;space>=1;space--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%s",outline);
		}
		printf("\n");
	   }
	   getch();
	   return 0;
}

int rect() {
	int i, j, space, rows, cols;
	char outline[30];
	clrscr();
	printf("\n Enter the symbol of which you would want the pattern to be made from: ");
	scanf("%s",outline);
	printf("\n Enter no of rows and cols: ");
	scanf("%d%d",&rows,&cols);
	for(i=1;i<=rows;i++)   //rows
	{
		for(j=1;j<=cols;j++)  //cols
		{
			if((i>1)&&(i<=rows-1))
			{
				if((j>1)&&(j<=cols-1))
				{
					for(space=j;space<=j;space++)
					{
						printf(" ");
					}
				}
				else
				{
					textcolor(420);
					printf("%s",outline);
				}
			}
			else
			{
				textcolor(359);
				printf("%s",outline);
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}

int rhombus() {
    int i, j, rows;
    char outline[30];
    clrscr();


    printf("\n Enter the symbol of which you would want the pattern to be made from: ");
    scanf("%s",outline);

    // Input number of rows from user
    printf("Enter rows : ");
    scanf("%d", &rows);


    for(i=1; i<=rows; i++)
    {
	// Print trailing spaces
	for(j=1; j<=rows-i; j++)
	{
	    printf(" ");
	}


	// Print stars and center spaces
	for(j=1; j<=rows; j++)
	{
	    if(i==1 || i==rows || j==1 || j==rows)
		printf("%s",outline);
	    else
		printf(" ");
	}

	printf("\n");
    }
    getch();
    return 0;
}
