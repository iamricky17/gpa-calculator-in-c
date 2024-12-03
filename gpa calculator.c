#include <stdio.h>
#include <string.h>

// Function to convert grade letter to grade points
int gradeToPoints(char* grade) {
    if (strcmp(grade, "A") == 0)
        return 5;
    else if (strcmp(grade, "B+") == 0)
        return 4;
    else if (strcmp(grade, "B") == 0)
        return 3;
    else if (strcmp(grade, "C") == 0)
        return 2;
    else if (strcmp(grade, "D") == 0)
        return 1;
    else
        return 0;
}

int main() {
    char courses[6][10] = {"CS151", "MT100", "CL111", "DS112", "CS174", "IS162"};
    int credits[6] = {12, 12, 12, 12, 12, 8};
    char grades[6][3]; // Changed to a 2D array to store strings
    float total_grade_points = 0;
    float total_credits = 0;

    // Input grades for each course
    printf("Enter the grades for each course:\n");
    int i;
    for (i = 0; i < 6; i++) {
        printf("%s: ", courses[i]);
        scanf("%s", grades[i]); // Read a string instead of a single character
    }

    // Calculate total grade points and total credits
    for (i = 0; i < 6; i++) {
        total_grade_points += gradeToPoints(grades[i]) * credits[i];
        total_credits += credits[i];
    }

    // Calculate GPA
    float gpa = total_grade_points / total_credits;

    // Display GPA
   // printf("Your GPA is: %.2f\n", gpa);
    
    // Calculate GPA
int truncated_gpa = (int)(gpa * 100); // Multiply by 100 and cast to int
float truncated_gpa_float = (float)truncated_gpa / 100; // Convert back to float with two decimal places

// Display GPA
printf("Your GPA is: %.2f\n", truncated_gpa_float);


    return 0;
}

