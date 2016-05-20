/*

   May 20th, 2016
   Joshua Morris
   This is a Final Grade Calculator. It accepts no arguments. Just compile it and run it.
*/
#include <stdio.h>
#include <stdlib.h>


float getHomework(){
  printf("Enter points earned for Homework and total possible points for Homework\n");
  float homework;
  float totalhomework;
  scanf("%f %f",&homework,&totalhomework);

  double percentage = 34;
  percentage = (homework / totalhomework);

	return percentage;
}

float getTests(){
  float testPoints;
  float totalSum = 0;
  float testTotal;
  float testAverage = 0;
	for(int i = 1; i<4;i++){
		printf("Enter points earned and total points possible for Test %d\n",i);
		scanf("%f %f",&testPoints,&testTotal);
		totalSum = totalSum + (testPoints/testTotal);
		
		testAverage = totalSum/i;
	}
	
	return testAverage;
}
float getPrograms(){
  float programPoints;
  float programTotal;

	
	printf("Enter points earned and total possible points for Programming Assignments\n");
	scanf("%f %f", &programPoints, &programTotal);

	return programPoints/programTotal;
}

float getFinal(){
  float finalPoints;
  float finalTotal;

	printf("Enter points earned and total posible points for the Final Exam\n");
	scanf("%f %f",&finalPoints,&finalTotal);

	return finalPoints/finalTotal;

}
void printHeader(){
printf("\n\n");
printf("----------------------\n");
printf("|                    |\n");
printf("|   Joshua Morris    |\n");
printf("|                    |\n");
printf("|                    |\n");
printf("|  Grade Calculator  |\n");
printf("|                    |\n");
printf("----------------------\n\n");
}


int main(){
//Print Header
printHeader();

//Total Weight
int homeworkWeight = 15;
int testWeight = 30;
int programmingWeight = 35;
int finalExamWeight = 20;
int TotalWeight = homeworkWeight + testWeight + programmingWeight + finalExamWeight; 

//Get Scores
float homeworkpercentage = getHomework();
float testPercentage = getTests();
float programmingPercentage = getPrograms();
float finalExamPercentage = getFinal();

//Calculate Values
float homeworkValue = homeworkpercentage*homeworkWeight;
float testValue = testPercentage*testWeight;
float programmingValue = programmingPercentage * programmingWeight;
float finalExamValue = finalExamPercentage * finalExamWeight;

float finalGrade = ((homeworkValue + testValue + programmingValue + finalExamValue)/(TotalWeight))*100;

printf("Your final grade is %.1f%% \n" , finalGrade); 

exit(0);
}




