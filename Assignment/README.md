## Introduction to C

The purpose of this project is to get a basic understanding of C by implementing a math function that can perform 5 basic opererations.

# Function

The function will take in two int numbers followed by one of the five operator

```c
	int math(int num1, int num2, char Operator);
```
# Operations

The 5 operations implemented in the math function include:
	
	- Addition (+)
	- Subtraction (-)
	- Multiplication (*)
	- Division (/)
	- Modulus (%)

# Code Example

The math function uses a switch statement to determine the operation to perform on the two numbers and then returning the resultant.

```c
	int math(int num1, int num2, char Operator) // Math function inputs
	{
    	switch (Operator)  // Switch statement used to perform a specific function depending on the Operator type
    	{
        	case '+':		// If the operation is addition
            	return num1+num2;	// Value returned is num1 plus num2
            	break;			// Terminates enclosing switch statement
```
If the users inputs an unknown operator the program will output "Error operator invalid"

```c
	default:				//If none of the conditions are met
            printf("Error operator invalid");
```