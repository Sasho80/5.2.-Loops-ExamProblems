01.Problem: Histogram
We have n integer numbers within the range of [1 … 1000]. Some percent of them p1 are under 200, 
another percent p2 are from 200 to 399, percent p3 are from 400 to 599, percent p4 are from 600 
to 799 and the rest p5 percent are from 800 upwards. Write a program that calculates and prints the 
percentages p1, p2, p3, p4 and p5.
Example: we have n = 20 numbers: 53, 7, 56, 180, 450, 920, 12, 7, 150, 250, 680, 2, 600, 200, 800, 
799, 199, 46, 128, 65. We get the following distribution and visualization:
Group Numbers Numbers Count Percent 
< 200 53, 7, 56, 180, 12, 7, 
150, 2, 199, 46, 128, 65 12 p1 = 12 / 20 * 100 = 60.00%
200… 399 250, 200 2 p2 = 2 / 20 * 100 = 10.00%
400… 599 450 1 p3 = 1 / 20 * 100 = 5.00%
600… 799 680, 600, 799 3 p4 = 3 / 20 * 100 = 15.00%
≥ 800 920, 800 2 p5 = 2 / 20 * 100 = 10.00%
210 Programming Basics with C#
Input Data
On the first line of the input there is an integer n (1 ≤ n ≤ 1000) that represents the count of lines of 
numbers that will be passed. On each of the following n lines we have one integer within range of [1 
… 1000] – numbers, on which we have to calculate the histogram.
Output Data
Print on the console a histogram that consists of 5 lines, each of them containing a number within the 
range of [0% … 100%], formatted up to two digits after the decimal point (for example 25.00%, 
66.67%, 57.14%).
Sample Input and Output
Input  Output   Input Output 
9      33.33%   14    57.14%
367    33.33%   53    14.29%
99     11.11%   7     7.14%
200    11.11%   56    14.29%
799    11.11%   180    7.14%
999             450
333             920
555             12
111             7
9               150
                250
                680
                2
                600
                200
Input Output  Input Output  Input Output 
3     66.67%  4     75.00%  7     14.29%
1      0.00%  53     0.00%  800   28.57%
2      0.00%  7      0.00%  801   14.29%
999    0.00%  56     0.00%  250   14.29%
      33.33%  999   25.00%  199   28.57%
                            399
                            599
                            799

Hints and Guidelines
We can split the program that solves this problem into three parts:
• Reading the input data – in the current problem this includes reading of the number n, followed 
by n count of integers, each on a single line.
• Processing the input data – in this case that means allocating the numbers into groups and 
calculating the percentage breakdown by groups.
• Printing the output – printing the histogram on the console in the specified format.
Before we proceed, we will make a small deviation from the current topic, namely, we will briefly 
mention that in programming every variable has a certain data type. In this problem we will use the 
numeral types int for integers and double for real numbers. Often, to make it easier, programmers 
miss the explicit specification of the type by replacing it with the keyword var. For better 
understanding we will write the type upon declaring the variables.
We will now proceed with the implementation of each of the above points.
