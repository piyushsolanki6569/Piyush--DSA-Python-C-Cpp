// A user has three attempts to enter the correct PIN.

// 1. Correct PIN = @5ab7      2. if entered correctly, display : Access Granted      3. Otherwise display : Wrong PIN      4. After three attempts Card Blocked

#include<stdio.h>
#include<string.h>
int main()
{
    char pin[10];
char correctpin[]="@5ab7";

int i;
for(i=1;i<=3;i++)

{
printf("Enter the PIN:");
scanf("%s",pin);

if(strcmp(pin,correctpin)==0)
{
    printf("\n Access Granted....");
}
else
{
    printf("\n Wrong PIN Entered\n");
}}
printf("\n Card Blocked...");

}
