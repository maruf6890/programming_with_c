#include<stdio.h>
int main(){
    // gpa calculation using c programming using  if/else
    int n;
    printf("Enter your Number (must submit number between 1-100):");
    scanf("%d", &n);
    if(n>= 0 && n<=100){
    
    if(n<=100 &&  n>80)
    printf("Your grade Point: 4.00 and Letter grade: A+");
    if(n<80 &&  n>=75)
    printf("Your grade Point: 3.75 and Letter grade: A");
    if(n<75 &&  n>=70)
    printf("Your grade Point: 3.50 and Letter grade: A-");
    if(n<70 &&  n>=65)
    printf("Your grade Point: 3.25 and Letter grade: B+");
    if(n<65 &&  n>=60)
    printf("Your grade Point: 3.00 and Letter grade: B");
    if(n<60 &&  n>=55)
    printf("Your grade Point: 2.75 and Letter grade: B-");
    if(n<55 &&  n>=50)
    printf("Your grade Point: 2.50 and Letter grade: C+");
    if(n<50 &&  n>=45)
    printf("Your grade Point: 2.25 and Letter grade: C");
    if(n<45 &&  n>=40)
    printf("Your grade Point: 2.00 and Letter grade: D");
    if(n<40 &&  n>=0)
    printf("Your grade Point: 00 and Letter grade: F");
    }else printf("Dont try to be smart just input number is instrucion");

    // using switch
    return 0; 
}
