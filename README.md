# Simple GPA Calculator

This is a simple GPA calculator designed for first-year Computer Science students at the University of Dar es Salaam. It calculates the GPA for the first-semester courses based on the grades entered by the user.

## Features
- Calculates GPA for six first-semester courses:
  - **CS151**: Introduction to Computer Science
  - **MT100**: Basic Mathematics
  - **CL111**: Communication Skills
  - **DS112**: Discrete Structures
  - **CS174**: Programming Fundamentals
  - **IS162**: Information Systems
- Uses Tanzanian grading scale (A, B+, B, C, D, F) and corresponding grade points.
- Provides GPA rounded to two decimal places.

## How It Works
1. Enter your grade for each course (A, B+, B, C, D, F).
2. The program calculates your GPA using the formula:

   \[
   \text{GPA} = \frac{\text{Total Grade Points}}{\text{Total Credits}}
   \]

3. The GPA is displayed with two decimal places.

## Requirements
- C compiler (e.g., GCC).

## How to Use
1. Clone or download this repository.
2. Compile the program using a C compiler:
   ```bash
   gcc -o gpa_calculator gpa_calculator.c
   ```
3. Run the program:
   ```bash
   ./gpa_calculator
   ```
4. Enter your grades when prompted.

## Example
**Input:**
```
Enter the grades for each course:
CS151: A
MT100: B+
CL111: B
DS112: A
CS174: B+
IS162: C
```

**Output:**
```
Your GPA is: 3.92
```

## Notes
- Grades must be entered as uppercase (A, B+, B, etc.).
- The program assumes fixed credit values for the courses based on the curriculum.

## License
This project is open-source and available for personal and educational use.