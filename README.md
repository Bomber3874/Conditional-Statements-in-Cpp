# Conditional-Statements-in-Cpp

# AIM - Learning how to use Conditional statements in C++

# Theory

# If - Else If - Else Statements

  These are decision-making structures that let a program choose between different paths.

  The program checks the first condition; if it’s true, it runs the associated instructions.

  If the first condition is false, it checks the next condition, and so on.

  If none of the conditions are true, it can run a default set of instructions.

  It’s useful when you want to test multiple conditions in a specific order.

# Switch Case Statement

  This is another decision-making tool, but it’s used when you want to compare one variable against many fixed values.

  The program matches the variable’s value to one of the predefined options.

  When it finds a match, it runs the code related to that choice.

  If no match is found, it can run a default option.

  Switch cases are often easier to read than many if-else statements when checking a single variable against many values.

# Stepwise Algorithm for Finding the Greatest Number

1.Input: Read three numbers from the user — num1, num2, and num3.

2.Compare num1 and num2:

  If num1 is greater than num2:

    Compare num1 and num3:

      If num1 is greater than num3, then num1 is the largest.

      Else, num3 is the largest.

3.Else if num2 is greater than num1:

  Compare num2 and num3:

    If num2 is greater than num3, then num2 is the largest.

    Else, num3 is the largest.

4.Output the largest number.

# Stepwise Algorithm for Calculator using Switch Case

1.Display the calculator menu with four options: Addition, Subtraction, Multiplication, and Division.

2.Take user input for their choice of operation.

3.Use switch-case to handle the choice:

  Case 1 (Addition):

    Prompt user to enter two numbers.

    Read the two numbers.

    Calculate the sum and display the result.

  Case 2 (Subtraction):

    Prompt user to enter two numbers.

    Read the two numbers.

    Calculate the difference and display the result.

  Case 3 (Multiplication):

    Prompt user to enter two numbers.

    Read the two numbers.

    Calculate the product and display the result.

  Case 4 (Division):

    Prompt user to enter two numbers.

    Read the two numbers.

    Check if the second number is zero:

      If not zero, perform division and display the result.

      If zero, display an error message for division by zero.

  Default case:

    If the user enters a choice not in 1-4, display “Invalid choice”.

4.End program

