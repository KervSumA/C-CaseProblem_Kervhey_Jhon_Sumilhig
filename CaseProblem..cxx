#include <stdio.h>

int main() {
int age;

printf("Name:Sumilhig,Kervhey jhon\n");
 printf("ID:2025304609\n");
 printf("Section:BSIT 1B\n");

printf("Enter Your Grade: ");
scanf("%d", &age);

if(age < 60) {
printf("Failure\n");
}else if(age >=60&&age<=70) {
printf("Need Improvements\n");
}else if(age >=71&&age<=79) {
printf("Good but still need to improve!!");
}else if(age >=80&&age<=90) {
printf("Very Good!!\n");
}else if(age >=95&&age<=100) {
printf("Excellent Grade, Keep it up!!\n");
}
return 0;
}
