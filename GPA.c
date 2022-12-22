#include <stdio.h> //GPA Calculator Program
	
int main(){
    int sequence,point,number;
    double creditInput,GPA;
    double grade;
	double credit;
	double totalPoint = 0;
	double totalCredit = 0;
	
    printf("How many subject?: ");
    scanf("%d",&number);
    
    for(sequence = 1 ; sequence <= number ; sequence++)
    {
    printf("%d.subject point: ",sequence);
    scanf("%d",&point);
    if(point >= 80 && point <= 100)
    	grade = 4;
    if(point >= 75 && point <= 79)
    	grade = 3.5;
    if(point >= 70 && point <= 74)
    	grade = 3;
    if(point >= 65 && point <= 69)
    	grade = 2.5;
    if(point >= 60 && point <= 64)
    	grade = 2;
    if(point >= 55 && point <= 59)
    	grade = 1.5;
    if(point >= 50 && point <= 54)
    	grade = 1;
    if(point >= 0 && point <= 49)
		grade = 0;
	
    printf("Enter credit: ");
    scanf("%lf",&creditInput);
    credit = creditInput;
    	totalPoint = totalPoint + grade*credit;
    	totalCredit = totalCredit + credit;
    }
	GPA = totalPoint / totalCredit;
    printf("GPA = %.2lf",GPA);
    return 0;
}


