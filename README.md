# Push_Swap Project Overview
## Introduction
The Push_Swap project challenges us to delve into the world of algorithms and complexity to create a highly efficient sorting program utilizing two stacks and a defined set of instructions to manipulate these stacks. The goal here is to craft a C program, named "push_swap", which ingeniously uses the least number of given instructions to sort a stack of unique integers in ascending order, thus garnering an understanding of sorting algorithms and their complexity, a topic often discussed in job interviews.

## Objective
the project involves writing a C program that receives a list of integers as arguments and displays the most concise set of instructions possible that, when executed, would sort the integers in ascending order using two stacks. The underlying aspiration is to bring the notion of complexity to life while working with basic algorithms, emphasizing the gravity of understanding and managing the complexity in the realm of software development.

## Key Concepts and Rules
_Stacks and Operations_
You have two stacks at your disposal: stack a, containing a random set of non-duplicating integers, and stack b, initially empty. Here are the operations you can perform:

sa (swap a): Swap the top two elements of stack a.
sb (swap b): Swap the top two elements of stack b.
ss: Execute sa and sb simultaneously.
pa (push a): Move the top element of stack b to the top of stack a.
pb (push b): Move the top element of stack a to the top of stack b.
ra (rotate a): Shift up all elements of stack a by one, making the first element the last.
rb (rotate b): Likewise, but for stack b.
rr: Execute ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by one, making the last element the first.
rrb (reverse rotate b): Do the same for stack b.
rrr: Execute rra and rrb simultaneously.
The ultimate goal is to sort the integers in stack a in ascending order using the fewest instructions possible.
