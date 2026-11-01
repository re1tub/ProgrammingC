# [[Chapter 1]]
## 1.0
- Goal of the book:
	- show the essential elements of the langue in real programs
	- There is no intent on being complete nor percise
	- Get familar and comfortable quickly as possible
## 1.1
#### A tutorial introduction
First learning how the print hello world statement is excuted in C
*In C program, here is how you write hello world:*

```
#include <stdio.h>
main ()
{
printf("hello, world\n");
}
```

- to run this program, it depends on the operating system that you are running it on. For example in UNIX, you would create a file called: hello.c
- the key is that you include ".c" when writing and running a C program file
- you can then use a command "a.out" which will give the output of your c program
	- in this case: hello, world
- "Main":
	- Main means that your program will begin its execution at the begging of main
	- every program that you write must have a main somewhere
	- main will typically call other functions to help perform its job
		- some that you wrote and others from library that are provided for you
- "#include <stdio.h>"
	- This is the first line of your program
	- it tells the complier to include information about the standard input/output library
- A method for communicating data between functions is for the calling function to provide a list of values called *arguements* to the function that it calls
- The parentheses after the function's name surrounds the argument list
- In the hello world statement earlier, the function expects no arguments hence the empty list ()
- The statements of a function are enclosed in brackets { }.
- A sequence in double quotes "" is called a string 
- "\n" means new line
	- The C complier never supplies a new line so you must always include \n unlike python

## 1.2 
#### Variables and Arithmetic Expressions
The next program uses the formula C = (5/9)(F-32) to print the following table of Fahrenheit temperatures and their celsius equivalent:

| Celcius | Farhrenheit |
| ------- | ----------- |
| 0       | -17         |
| 20      | -6          |
| 40      | 4           |
| 60      | 15          |
| 80      | 26          |
| 100     | 37          |
| 120     | 48          |
| 140     | 60          |
| 160     | 71          |
| 180     | 82          |
| 200     | 93          |
| 220     | 104         |
| 240     | 115         |
| 260     | 126         |
| 280     | 137         |
| 300     | 148         |
```
#include <stdio.h>
/* print Fahrenheit-Celscius table for fahr = 0,20, ..., 300 */
main(){
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	lower = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celcius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
```

- The two lines:
		`/* print Fahrenheit-Celscius table for fahr = 0,20, ..., 300 */`
	- Are simply just comments which can be useful in noting down thoughs are or writing out what your thinking without actual code

- In C all variables must be declared before they are used, this is typically done at the beginning of a function before any excutables statments
- A declaration announces the properties of variables; it consist of a type name and a list of variables such as:
	- `int fahr, celsius;`
	- `int lower, upper, step;`
- The type int means that the variables listed are integers, by contrast with float
-  AI note:
	- We represent integers with variables because variables act as storage containers that hold data that can change during a program's execution. Instead of rewriting a specific number like 5 or 10 dozens of times throughout your code, you store it in a named variable (like score or counter). This makes your code dynamic, easier to read, and simpler to update.
- The type float means that the variables are listed as a number that has a fractional value
- The range can vary based on your system;
	- 16-bit ints: $-32768$ and $+32767$
	- 32-bit ints: $10^{-38}$ and $10^{+38}$
- C provides several other types of data points
	- char: character-a single byte
	- short: short integer
	- long: long integer
	- double: double-precision floating point
- The size of these objects are also machine-dependent. There are also arrays. structures and unions of these basic data types, pointers to them, and functions that return them
- Computations in the tempter conversion begin with assignment statements:
	- `lower = 0;`
	- `upper = 300;`
	- `step = 20`
	- `fahr = lower;`
- This sets the variables to their initial starting values
- Each statement gets read once you add a semicolon ";"
- We use a while loop to avoid rewriting the same math for every row; the loop simply repeats the calculation for each line of output.
```
while (fahr <= upper){
...
}
```

- The condition in the parenthesis gets tested
- If the condition is true, function will be continued
- This becomes a loop until the condition in the parenthesis is false
- In this case, there are no more functions in the program so it terminates
- The braces are only necessary if you want the loop to run multiple lines of code
	- If body after the condition is only one line, the braces become optional
	- Example:
```
while (i < j)
	i = 2 * i;
```
- here there is no brace however the while function will still operate properly
- The celsius temperature is assigned to the variable *celsius* by the statement
```
celsuis = 5 * (fahr-32) / 9;
```
This example also shows a bit how the printf works. It's first argument is a string of characters to be printed, with each % indicating where one of the other arguments is to be substituted. 

| Language | How it works                                                            | Example             |
| -------- | ----------------------------------------------------------------------- | ------------------- |
| C        | Uses sequential placeholders. The text cannot read your variable names. | printf("%d", fahr); |
| Python   | Directly injects the variable into the text using `{}`.                 | print(f"{fahr}")    |

For instance, in the printf statement we have 
```
printf("%d\t%d\n", fahr, celsius);
```
This will cause the values of the two integers fahr and celsius to be printed with a tab (\t) between them. 

To improve the accuracy of the conversion, we need to specify the decimal points. In C these decimal values must be represented with float instead of int.
```
#include <stdio.h>
/* print Fahrenheit-Celscius table for fahr = 0,20, ..., 300 */
main(){
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	lower = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
```

Another thing that the float allows use to do is preform the operation 5/9 * (fahr-32.0) instead of 5 * (fahr-32) / 9

## 1.3
#### The for Statement
Another way to write the temperature converter is like so:
```
# include <stdio.h>
main(){
	int fahr;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
```
- One major change with this code is the elimination of the extra variables; only fahr remains. 
- Upper, lower, and step are now just constants in the for statement
- The expression that computes celsius is now just the 3rd argument printf instead 
- In the for statement, the condition are the first two statements followed by ; and fahr = fahr + 20 is the body of the program. The printf statement is the output that gives fahr and celsius where celsius is just the constant of computation instead of it being represented by a variable

## 1.4
#### Symbolic Constants
Use "#define" to define a value so that other people who read your program understand what the values represent. You'll find yourself needing this mostly when you don't have variables 

```
# include <stdio.h>

#define Lower 0
#define Upper 300
#define Step 20

/*Now others can see what the numbers represent*/
main(){
	int fahr;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
```
## 1.5
#### Character Input and Output
The standard library provides several functions for reading or writing one charcter at a time, of which *getchar* and *putchar* are the simplest. Each time it is called, ***getchar* reads the next *input character* from a text stream and returns that as its value. that is, after**
```
c = getchar()
```
the variable c contains the next character of input. The characters normally come from the keyboard. 

**The function *putchar* prints a character each time it is called:**
```
putchar(c)
```
prints the contents of the integer variable c as a character, usually on the screen. Calls to *putchar* and *printf* may be interleaved. You can alternate between using both functions in the same program, and the combined output will appear seamlessly on the screen in the exact chronological order they were called.
```
#include <stdio.h>

int main() {
    printf("Hello");      // Step 1: Outputs a string
    putchar(' ');         // Step 2: Outputs a single space character
    printf("World");      // Step 3: Outputs another string
    putchar('\n');        // Step 4: Outputs a newline character
    
    return 0;
}

```
## 1.5.1
#### File Copying
Given *getchar* and *putchar*, you can write a surprising amount of useful code without knowing anything more about input and output. The simplest example is a program that copies its input to its output one character at a time:
```
#include <stdio.h>
main(){
	int c;
	
	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}
```
Here is the program in English
```
read a character
while(character is not end-of-file indicator)
	output the character just read
	read a character
```
- the relational operator != means not equal to
- The value being stored is just some bit pattern
- Type char is specifically meant for storing such character data but any integer can be used
- The reason for int 
	- There is an issue with disgusting the end of the input from valid data
	- The solution is that getchar returns a distictive value when there is no more input
	- This value is EOF, "end of file"
	- We must declare C to be a value big enough to hold any value that getchar returns
	- We can't just use char since c must be big enough to hold EOF in addtion to any char
	- Therefore we use int
	- EOF is an integer defined in <stdio.h>
	- The specific numerical value of EOF doesn't matter as long as it is not the same as any char value
	- By using the symbolic constant, we are assured that that nothing in the program depends on the specific numerical value
There is a more concise way of writing copy input to output. In C, any assignment, such as `c = getchar()` is an expression and has a value, which is the value of the left hand side after the assignment. What this means is that an assignment can appear as part of a larger expression. If the assignment of a character to c is put inside the test part of a while loop, the copy program be written this way:
```
#include <stdio.h>

main(){
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
}
```
==🟣The while gets a character and assigns it to c, and then test the condition(weather or not the character is equal to the end of file). If it was not, then the body of the while is executed printing the character. It then loops until the condition isn't met where the program will be terminated.==

This solution also centralizes the input which means that there is only one reference to getchar, and shrinks the program

The parenthesis around the entire while loop is crucial for the order in which the operations are executed. We want c = getchar() to be read first which is why it is put inside of parathesis other wise:
`c = getchar() != EOF` is the same as `(c = getchar() != EOF)`. Adding the parenthesis is important: `((c = getchar()) != EOF )

**Exercise**: *Print the value of EOF and determine if it is 0 or 1*

## 1.5.2
#### Character Counting
```
#include <stdio.h>
main(){
	long nc;
	
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
```
- In this program "++nc;", the statement ++ means *increment by one*. It's equal to saying "n=n+1" but more efficiently
- We use "%ld" because nc corresponds to a "long integer"
## 1.5.3
#### Line Counting
This program will count lines instead of character inputs
```
#include <stdio.h>

main(){
	int c, nl;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
```
- The if statement tests the parenthesized condition and if it is true, it will execute the condition
- The indentation allows use to see what controls what
- ==🔴Write a program to count blanks, tabs, and newlines
- Write a program to copy its input to output, replacing reach string of one or more blanks by a single blank
- Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b and each backslash by \\\\. This makes tabs and backspaces visible in an unambiguous way

## 1.5.4
#### Word Counting
- A word is considered to be an order of characters and letters that do not include a blank, tab or newline.
```
#include <stdio.h>

int main(){

	int c, nl, nw, nc, state;
	
	state = OUT; #this means that the state of C is not in a word
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n' || c == '\t' || c == ' ')
			state = OUT;
		else if (state == out) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n" nl, nw, nc);
}
```

- OUT and IN translate to the literal values 0 and 1
- nl = nw = nc = 0; just says all values to 0
- the || is a OR operator so the line (c == '\n' || c == '\t' || c == ' ') is saying if C is new line OR if C is tab OR if C is blank, state of the character is OUT or 0
	- && means and
	- || means or
**Exercise problems:**
*1.11: How would you test the word count program? What kind of input are most likely to uncover bugs if there are any?*
*1.12: Write a program that prints its input one word per line*

## 1.6
#### Arrays
A program that counts the number of occurrences of each digit and white space characters(new lines, tabs, and blank spaces). Since there are 12 categories of inputs it is useful to use an array rather then 10 individual variables
```
#include <stdio.h>

int main(){

	int c, i, nwhite, nother;
	int ndigit[10];
	
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
		
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || '\n' || c == '\t')
			++nwhite;
		else 
			++nother;
	printf("digits =")
	for (i = 0; i < 10; ++i)
		printf("%d", ndigit[i]);
	printf("white space = %d, other = $d\n", nwhite, nother);
		
}
```
The output of this program is:
```
digits = 9 3 0 0 0 0 0 0 0  1, white space = 123, other = 345
```

**The declaration**
```
int ndigit[10]
```
- This line declare ndigit to be an array of 10 integers
- The array subcript(or element in python) starts at 0 so position 1 in a an array subcript equals 0 not. In this we have 10 places in the array so it counts digit[0], digit[1], digit[2],...,digit[9]
- A subscript can also be any inter expression
	- integer variables like [x]
	- integer constants[5]
-  This property relies on the digits to be represented by characters(a,b,c,d,....)
- In the line: `if (c >= 0 && c <= 9)`
- we use it to determines if the charcter in c is a digit(0,1,2,3,...). If this line comfirms that C is a digit, then the value of c = c - '0'
	- This line only works if '0', '1', '2',...,'9' have in-indvisual increasing values
	- Fortunately this is true for all character sets so we don't have to worry about this
- `chars` are just small integers
- so the constants of chars are just integers `int` in arithmetic expresions
- so c - '0' is an integer expression with a value between 0 and 9
- this makes it a valid subscript (element) for the array ndigit
- `++ndigit` is telling program to store the index used on the array
	- Supposed the input is `167889`
	- the program process each character:
		- int '1': ndigit[1] = 1
		- int '6': ndigit[6] = 1
		- int '7': ndigit[7] = 1
		- int '8': ndigit[8] = 1
		- int '8': ndigit[8] = 2
		- int '9': ndigit[9] = 1
	- so the array looks like: `ndigit = {0}, {1}, {0}, {0}, {0}, {0}, {1}, {1}, {2}, {1}`
- The ++ operator increments whatever variable or array element follows it.
- The other two if statements check if the C is a white character or other.
- The print statement `printf("digit=")`
	- followed by:
		- `for(i = 0; i < 10; ++i)`
			- `printf("%d", ndigit[i] )`
- This code tells allows us to print the array of each index in the array ndigit
- with out the for loop, it would look like:
```
printf("%d", ndigit[0]);
printf("%d", ndigit[1]);
printf("%d", ndigit[2]);
```
- here you can clearly see what the variable `i` represents
- The if, else if, and else statements work the same as python, I can go in depth on this later, but for now I think I have good understand of if and else statements already
**Exercise Problems:**
*1-13: Write a program that print a histogram of  the length in words of its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging*
*1-14: Write a program that prints a histogram of the frequencies of different characters*

## 1.7
#### Functions

Function is simply a reusable block of code that performs specific task. Some functions are built-in by standard C libraries while others you may need to write your self.
- With functions, it becomes possible to ignore how a job gets know while knowing what is being done is sufficient. 

So far we have only used functions like printf, getchar, and putchar. Here we are going to write our own function. This function is multiplying exponets. Mathmatically, it looks like $X^n = X * x * X...X^{nth}$ 

Another example looks like:
- $2^3 = 2*2*2=8$
We will create a function "power" that looks like this:
```
power(2,3)
returns 8
```

Similarly:
```
power(-3,2)
returns 9
```
Because $(-3)^2 = (-3)(-3)=9$

Here is the entire code that executes this function:
```
#include <stdio.h>

int power(int base, int n);

int main(){

        int i;
  
        for (i = 0; i < 10; ++i)
                printf("%d %d %d\n", i, power(2,i), power(-3,i));
        return 0;
}

int power(int base, int n){
        int i, p = 1;
        
        for (i = 1; i <= n; ++i)
                p = p * base;
        return p;
}
```
- The first line `int power(int base, int n);` is called a function prototype, which is how we declare the function. A function prototype allows you to define a function later in the program while still calling it earlier. If you don't want to write a function prototype, you will have to define the function being for expecting the next function to be able to call it.

![[Pasted image 20261027202654.png|474]]


- the function will return an integer
- the name of the function is power
- the function takes two integer arguments `(int m, int n)`
- the semicolin at the end of the line tells the compiler that this is a declaration and not a definition
- ``int power(int m, int n);       // Declaration''
- ``int power(int base, int n) { }  // Definition (has a function body'{}')``
- Once the function prototype is declared, the actual function can go anywhere in the program.
- Our main function, we simply print the output
- The final function, `int power(int base, int n)` is responsible for defining what int power means.
	- Here int base is the integer being 'squared'
	- and int n is the exponent
- We set p = 1 so that we when fine p in the function, we get 1 * base which is = to base
- Even though both variables are named i, they exist in different functions.
	- `main()`'s `i`: Determines which exponent to calculate, from 0 through 9.
	- `power()`'s` i`: Counts how many times the multiplication has been performed, from 1 through n.
When power() increments its own i, it does not change the i inside main().

## 1.8
#### Arguments - Call by value

- When you pass a variable through a function in C, the function only receives a copy of that variable and not the variable itself. 
- Which means that the changes made inside the function does  change the original variable in `main()`
- Here is an example:
```
#include <stdio.h>

void change(int x) {
	int a = 5;
	
	change(a);
	
	printf("%d\n", a);
	
	return 0;
}

void change (int x) {
	x = 10;

}
```

- the output of this function is a = 5
- C takes the value stored in `a`, which is `5`, and copies that value into the parameter `x`
![[Pasted image 20261030123626.png|700]]

- When `changes()` executes `x = 10`, only the x value is changed, the original a variable is the same

## 1.9
#### Character Arrays
- The most common type of arrays in C are array of characters:
![[Pasted image 20261030141304.png]]
- This visual allows use to see how the program is divided into pieces
	- One piece gets a new line
	- another piece test the new line
	- and another saves it
- We will write it in the same format starting with a `getline` function to fetch the next line of input
	- at its essence, `getline` has to return a signal at `EOF`
	- ideally, it can return the length of line or zero if EOF is encountered
		- zero is acceptable for EOF return because it is never a valid line length
		- a line must have a length of at least 1 or more characters
	- when we find a line that is longer than the previous line, it must be saved somewhere
		- this introduces another function, `copy` which is responsible for copying the new line to safe place
	- Finally we need a main program that tells `getline` and `copy` what to do
	```
	#include <stdio.h>
	#define MAXLINE 1000
	
	int getline(char line[], int maxline);
	void copy(char to[], char from[]);
	
	main(){
		int len; /*current line length */
		int max; /*max line length (so far) */
		char line[MAXLINE]; /*current input line */
		char longest[MAXLINE]; /*longest line saved here */
		
		max = 0;
		while ((len = getline(line, MAXLINE)) > 0)	
			if (len > max) {
				max = len;
				copy (longest, line);
			}
		if (max > 0)
			printf("%s", longest);
		return 0;
	}
	
	int getline(char s[], int lim){
		int c, i;
		
		for (i = 0; i < lim-1 && (c = getchar()) != EOF && c !='\n'; ++i)
			s[i] = c;
		 if (c == `\n`) {
			 s[i] = c;
			 ++i;
		 }
		s[i] = '\0'
		return i;
	}
	
	void copy(char to [], char from []){
		int i;
	
		i = 0;
		while ((to[i] = from[i]) != '\0')
			++i;	
	}
	```
- `getline` and `copy` are declared at the beginning as a function prototype
- `main` and `getline` communicate through a pair of arguments and a returned value
- In `getline` the arguments are declared by the line
    - `int getline(char s[], int lim)` specifies that s is an array and that lim is is an integer
- Note: that getline is a function that is already defined in the stdio.h library so you may have to adjust to another title for the function getline

## 1.10

#### External Variables and Scope

- when a variable is used in an function, it is only a variable to that local function
    - therefore if we have `i` in`getchart` and we have `i` in `copy`, they are unrelated
    - these local variables are called _automatic variables_
- a work around to automatic variables, are external variables
    - external variables go outside of a function and can be accessed by name to any function
    - an external variable must be defined exactly once outside of any function
- Here we can rewrite the program with `line`, `longest`, and `max` as external variables
    - this will require changing the calls, declarations, and bodies all of all three functions
```
#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int my_getline(void);
void copy(void);

int main(void) {
	
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = my_getline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int my_getline(void) {
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i]=c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(void) {
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}

```

- In this program, you can see that the external variables are outside of the functions
- when a extern variable needs to be called inside of a function we use `extern`
	- this is essentially the same as declaring a variable for your function but it is already an external variable
