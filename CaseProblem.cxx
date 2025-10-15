#include <stdio.h>

int main() {
int age;

printf("Name:Sumilhig,Kervhey jhon\n");
 printf("ID:2025304609\n");
 printf("Section:BSIT 1B\n");

printf("Enter your age: ");
scanf("%d", &age);

if(age <60) {
printf("Failure\n");
}else if(age >=70&&age<=75) {
printf("Need Improvements\n");
}else if(age >=80&&age<=85) {
printf("Very Good \n");
}else if(age >=90&&age<=100) {
printf("Excellent Grade, Keep it up!!\n");
}
return 0;
}
