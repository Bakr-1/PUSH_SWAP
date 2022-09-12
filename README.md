# 💡PUSH_SWAP

This project will make you sort data on a stack, with a limited set of instructions, using


the lowest possible number of actions. To succeed you’ll have to manipulate various


types of algorithms and choose the most appropriate solution (out of many) for an


optimized data sorting.

# ℹ️Introduction

The Push swap project is a very simple and a highly straightforward algorithm project:
data must be sorted.


You have at your disposal a set of integer values, 2 stacks, and a set of instructions
to manipulate both stacks.


Your goal? Write a program in C called push_swap which calculates and displays
on the standard output the smallest program, made of Push swap language instructions,
that sorts the integers received as arguments.

# ❗️REQUIREMENT 

The rules

  • You have 2 stacks named a and b.
  
  • At the beginning:
  
    ◦ The stack a contains a random amount of negative and/or positive numbers
    which cannot be duplicated.
    
    ◦ The stack b is empty.
  
  • The goal is to sort in ascending order numbers into stack a. To do so you have the
  following operations at your disposal:
  
  sa (swap a): Swap the first 2 elements at the top of stack a.
  Do nothing if there is only one or no elements.
  
  sb (swap b): Swap the first 2 elements at the top of stack b.
  Do nothing if there is only one or no elements.
  
  ss : sa and sb at the same time.
  
  pa (push a): Take the first element at the top of b and put it at the top of a.
  Do nothing if b is empty.
  
  pb (push b): Take the first element at the top of a and put it at the top of b.
  Do nothing if a is empty.
  
  ra (rotate a): Shift up all elements of stack a by 1.
  The first element becomes the last one.
  
  rb (rotate b): Shift up all elements of stack b by 1.
  The first element becomes the last one.
  
  rr : ra and rb at the same time.
  
  rra (reverse rotate a): Shift down all elements of stack a by 1.
  The last element becomes the first one.
  
  rrb (reverse rotate b): Shift down all elements of stack b by 1.
  The last element becomes the first one.
  
  rrr : rra and rrb at the same time.

# 👨‍💻Usage


The function is written in C language and thus needs the gcc compiler and some standard C libraries to run.

This project works for both MacOS and Linux

Compiling the project

To compile, clone the repository and run the following inside the folder:
```bash
$>make
```


It will work as follows:

```bash
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>
```

```bash
$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
      6
```

If you want to make sure of the output that it's sorted correctly you can use the tester provided by the school 

for linux you can use checker_linux and for MacOS checker_Mac as follow
```bash
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
$>
```

If the program checker_OS displays "KO", it means that your push_swap came up
with a list of instructions that doesn’t sort the numbers.
