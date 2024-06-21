#include<stdio.h>

double getAverageScore( double scores[5]){

    double sum = 0.0;
    for(int i = 0; i < 5; ++i){
        sum = sum + scores[i];
    }
    double average = sum / 5;
    return average;

}

char computeGrade(double averageScore){
    char grade;

    if(averageScore >= 80.0){
        grade = 'A';
    }

    else if(averageScore >= 60.0){
        grade = 'B';
    }

    else if(averageScore >= 50.0){
        grade = 'C';
    }

    else{
        grade = 'F';
    }

    return grade;
}


int main(){

    double scores[5] = {55.0, 64.0, 75.0, 80.0, 65.0};

    double averageScore = getAverageScore(scores);

    char grade = computeGrade(averageScore);

    printf("Average Score: %.2lf\n", averageScore);
    printf("Grade: %c", grade);

    return 0;

}