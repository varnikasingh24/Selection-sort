#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[50],n;
void inputnos();
void selection_sort();
void print_array();
void exit();

void inputnos()
{
int i;
printf("\nEnter the no. of elements:");
scanf("%d",&n);

printf("\nEnter the elementsof array:\n");

for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
}

void print_array()
{
int i;
printf("\n");
for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
}
getch();

int select_min(int i,int U)
{
int min,minloc,k;
min=a[i];
minloc=i;
for(k=i+1;k<=U;k++)
 {
   if(min>a[k])
    {
      min=a[k];
      minloc=k;
    }
 }
return(minloc);
}

void selection_sort()
{
int i,j,L,U,temp;
L=0;
U=n-1;
for(i=0;i<=(U-1);i++)
 {
 j=select_min(i,U);
  if(i!=j)
  {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  }
 print_array();
 }
}

void main()
{
clrscr();
inputnos();
selection_sort();
getch();
}
