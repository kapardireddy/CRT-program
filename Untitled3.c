#include<stdio.h>
int main()
{
 char ch;
 printf("Enter a character");
 scanf("%c",&ch);
 if(ch>='A'&&ch<='Z')
 {
 	printf("\nIt is in Uppercase");
 }
 else if(ch>='a'&&ch<='z')
 {
 	printf("\nIt is in Lowercase");
 }
 else if(ch>=48&&ch<=57)
 {
 	printf("\nIt is a number");
 }
 else
 {
 printf("\nIt is a special character");
 }
return 0;
}
