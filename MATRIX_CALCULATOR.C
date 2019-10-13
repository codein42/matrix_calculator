//* FUNCTIONS - call by refrence = MATRIX CALCULATOR            *//
#include<stdio.h>
#include<conio.h>

//DEFINED function scan

void scan(int s[10][10])
{
 int i,j;
 for (i=1;i<=3;i++)
 {
  for (j=1;j<=3;j++)
  {
   printf("enter element at [%d,%d]:\t ",i,j);
   scanf("%d",&s[i][j]);
  }
 }
}


// DEFINED function print

void print(int p[10][10])
{
 int i,j;
 for (i=1;i<=3;i++)
 {
  for(j=1;j<=3;j++)
  {
   printf("%d\t",p[i][j]);
  }
  printf("\n");
 }
}


// PRE-DEFINED main function

void main()
{
 int a[10][10],b[10][10],c[10][10],q[10][10],w[10][10],m[10][10],i,j,k,sum;
 printf("\t\t\t\tMATRIX\t ADDITION\n\n");
 printf("Enter the elements of matrix A\n\n");

 //function calling to scan
 scan(a);

 printf("\n");
 printf("Enter the elements of matrix B\n\n");

 //function calling to scan
 scan(b);

 printf("\n");
 printf("MATRIX A\n");

 //function calling to print
 print(a);

 printf("\n");
 printf("MATRIX B\n");

 //function calling to print
 print(b);

 printf("\n");

 //Addition Argument

 for (i=1;i<=3;i++)
 {
  for (j=1;j<=3;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  }
 }

 printf("Addition of matrix is as follows:\n");
 //Function calling to print
 print(c);
 printf("\n");

 //*                    MULTIPLICATION OF MATRIX                *//

 printf("\t\t\tMULTIPLICATION OF MATRIX\n\n");

 printf("Enter the elements of matrix Q\n\n");

 //function calling to scan
 scan(q);
 printf("\n");
 printf("Enter the elements of matrix W\n\n");

 //function calling to scan
 scan(w);
 printf("\n");
 printf("MATRIX q\n\n");

 //function calling to print
 print(q);
 printf("\n");
 printf("MATRIX w\n\n");

 //function calling to print
 print(w);
 printf("\n");

 //multiplication argument
 for (i=1;i<=3;i++)
 {
  for (j=1;j<=3;j++)
  {
   sum = 0;
   for (k=1;k<=3;k++)
   {
	sum = sum + q[i][k] * w[k][j];
	m[i][j] = sum;
   }
  }
 }
 printf("Multiplicatio of matrix is as follows:\n\n");

 //function calling to print
 print(m);
 getch();
 clrscr();
}
