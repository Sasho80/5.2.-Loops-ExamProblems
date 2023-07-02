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

02.Problem: Smart Lilly
Lilly is N years old. For each birthday she receives a present. For each odd birthday (1, 3, 5, …, n) she 
receives toys, and for each even birthday (2, 4, 6, …, n) she receives money. For her second birthday
she received 10.00 lv, and the amount is increased by 10.00 lv for each following even birthday
(2 -> 10, 4 -> 20, 6 -> 30 etc.). Over the years Lilly has secretly saved her money. Lilly's brother, in 
the years when she received money, took 1.00 lv from each of the amounts. Lilly has sold the toys, 
received over the years, each one for P lv and added the sum to the amount of saved money. With 
the money she wanted to buy a washing machine for X lv.
Write a program that calculates how much money she has saved and if it is enough to buy a washing 
machine.
Input Data
We read from the console 3 numbers, each on a separate line:
• Lilly's age – integer in the range of [1 … 77].
• Price of the washing machine – number in the range of [1.00 … 10 000.00].
• Unit price of each toy – integer in the range of [0 … 40].
Output Data
Print on the console one single line:
• If Lilly's money is enough:
o “Yes! {N}” – where N is the remaining money after the purchase
• If the money is not enough:
o “No! {M}” – where M is the insufficiency amount
o Numbers N and M must be formatted up to the second digit after the decimal point.
Sample Input and Output
Input     Output      Comments 
 21       No! 997.98  She has saved 550 lv. She has sold 11 toys 3 lv each = 33 lv. 
 1570.98              Her brother has taken for 10 years 1 lv each year = 10 lv. 
 3                    Remaining amount: 550 + 33 - 10 = 573 lv.
                      573 < 1570.98: she did not manage to buy a washing machine. The 
                      insufficiency amount is 1570.98 - 573 = 997.98 lv.

Input    Output    Comments 
 10      Yes!      5.00 For the first birthday she gets a toy; 2nd -> 10 lv; 3rd -> toy; 4th -
 170.00            > 10 + 10 = 20 lv; 5th -> toy; 6th -> 20 + 10 = 30 lv; 7th -> 
 6                 toy; 8th -> 30 + 10 = 40 lv; 9th -> toy; 10th -> 40 + 10 = 50 lv.
                   She has saved -> 10 + 20 + 30 + 40 + 50 = 150 lv. She sold 5 toys 
                  for 6 lv each = 30 lv. Her brother took 1 lv 5 times = 5 lv.
                  Remaining amount -> 150 + 30 - 5 = 175 lv. 175 >= 170 (price of 
                  the washing machine): she managed to buy it and is left with 175 -
                  170 = 5 lv.
Hints and Guidelines
The solution of this problem, like the previous one, can also be split into three parts – reading the 
input data, processing them and printing the output.
