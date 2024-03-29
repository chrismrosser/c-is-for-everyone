# C++ is for everyone: Notes  

**Jan 10th 2024**

## Chapter 1 Introduction 

### 1.1 What is programming?  

The act of designing and implementing computer programs is called programming.  
  
### 1.2 The anatomy of a computer
  
CPU  
- the heart of the computer  
  
Storage
- Two main types
    - Memory
        - These store data
    - Disks
        - A space where items on a computer can be stored when not in use  
  
I/O  
- Input output which is how you connect keybords headphones and the mouse to the computer  

GCU
- Graphics unit which will allow for the programs to push onto a screen  

### 1.3 Machine code and programming languages  
Computers run on 1s and 0s C++ is a machine langauge that allows humans to communicate with computers in order to simplify the process of a computer over all achiving more effficent forms of working on and with computers.  

### 1.4 Becoming familiar with your programming environment
During this section I practiced using the g++ compiler after creating a "hello world" c++ file (see hello folder) i compiled it and ran it as a program in the terminal (see "hw" in the hello folder)  

### 1.5 Analyzing your first porgram
We took a quick look into the meaning behind most of the lines written in the hw.cpp file (found in the hello folder). A quick and simple dive into understadning why we use #inculde < iostream > or other important parts of simple code.

### 1.6 Errors
Compile time error 
- A violation of the programming language rules that id detected by the compiler.  

Run time error
- An erorr that causes a program ot take an action that the programmer did not intend.  


**Jan 11th 2024**  
  
### 1.7 Problem solving: algorithm design

A squence of steps that is unambiguous, executable and terminating is called an *algorithm*  
  
## Chapter 2 Fundamental data types
  
### 2.1 Variables
  
A variable is a storage location with a name.
  
#### 2.1.1(2) Variable Definitions and number types
  
int and double 
- int is a whole number a negitive number and zero
    - int cans_per_pack= 6;
- double is decimal or part number as well as intergers and exponential notations
    - double can_volume = 0.355
>review assignments  
  
> better understanding of what is scope

*See progam var in folder var in the github.*

### 2.2 Arithmetic

#### 2.2.1 Arithmetic Operators
- +add 
- -subtract
- *multiply
- /divide

#### 2.2.2 Increment and decrement
<++> adds one to an increment 
<--> subtracts one to an increment

### 2.3 Input and out put

Today i took on a side quest and created a program that uses i/o as well as variables and cin funtions. ( see varibles2.cpp and shopping in the variables file). Over all the program worked very well and was able to funtion as designed allowing me to see that i have a basic understanding of the code in said project.
  
### 2.4 Problem solving 
understanding an issue is made easier by understadning what needs to be done by hand first.. by taking a problem and simplifying it by hand you are able to create the simple algorithm that you will need to create the answer on the computer.  

### 2.5 Strings
a sequence of characters that allow you to work with charcters (see program initials in folder 2_variables )

## Chapter 3 Decisions

### 3.1 The if statement

first explination of *if* will be found in (3_decisions folder file if.cpp) where we right a program that will take you to the right floor in an elevator assuming that one floor (13) is skipped.

### 3.2 Comparing numbers and strings

six types of Relational operators  
    >  
    >=  
    <  
    <=  
    ==  
    !=  
### 3.3 Multiple alternatives

in folder 3 under taxes.cpp you will see the use of multiple alternatives.  

today in chapter 3 so far we have used the variables that we learned in chapter 2 as well as the cin >> funciton to create a workable program where we can plug in info and base on said info the program can choose what has to happen next basied on true false statements and the natural flow charts.  

### 3.5 flowcharts

chaper three covered true false statments and how to write that into a program using flow chart like ideaology that brought a new way of interacting with said code. in program if.cpp we wrote directions for an elevator that had not only insturctions on how to run but rules on how to not run if given an input that was not possible (ERROR). 

## Chapter 4 Loops

looking into 4_loops you will find invest.cpp, that is our first intro into the world of loops. In chaper four things are getting a little more meaty. Deeper. and involed. Lets dive into the loops at hand and how to use them.  

### The *While loop*
  
The while loop: while something is ture or false something else must occur until a point where that something is no longer true or false  
  
{  
 double balance = 0; // defined variable out of the loop 
  
while (balance < TARGET) // stating that the loop will contuine until the dfined variavle (balance) is less than TARGET
    
    {
        year++;
        double interest = balance * RATE / 100 
        balance = balance + interest; 
    }  
}
  
The infinite loop **ERROR** if  a condtion never becomes false the loop will never end

### The *For loop*

The ffor loop: this loop is used when a value runs from a starting point to an ending point with a constant increment or decrement.

>  counter = 1; // initialize the counter  
    while (counter <= 10) //  check the counter  
    {  
        cout << counter << endl;  
        counter++;   // update the counter  
    }  


### The *Do loop*

The do loop: this loop is appropriate whenthe loop body must be executed at least once

> do  
{  
   statments     
}  
while (codition);
  
also refered to as the post-test loop becasue the condition is tested after completing the loop body ( using cin >> value )  

>int value:  
do  
{  
    cout << "Enter a value < 100: ";  
    cin >> value;  
}  
while (value is >= 100);

## Chapter 5 Funtions
A sequence of instructions with a name.  
*see 5_functions/cube.cpp  

### parts of funtions

    - Name for the funciton   
    - A variable for each argument
    - and a type for the result

  



## Chapter 6 # hotplate
