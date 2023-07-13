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

03.Problem: Back to the Past
Ivan is 18 years old and receives an inheritance that consists of X money and a time machine. He 
decides to return to 1800 but does not know if the money will be enough to live without working. 
Write a program that calculates if Ivan will have enough money to not have to work until a particular 
year (inclusive). Assuming that for every even (1800, 1802, etc.) year he will spend 12 000 dollars. 
For every odd one (1801, 1803, etc.) he will spend 12 000 + 50 * [the age he will have reached in 
the given year].
Input Data
The input is read from the console and contains exactly 2 lines:
• Inherited money – a real number in the range [1.00 … 1 000 000.00].
• Year, until which he has to live in the past (inclusive) – integer number in the range [1801 … 
1900].
Output Data
Print on the console 1 line. The sum must be formatted up to the two symbols after the decimal point:
• If money is enough:
o "Yes! He will live a carefree life and will have {N} dollars left." – where N is the money that 
will remain.
• If money is NOT enough:
o "He will need {М} dollars to survive." – where M is the sum that is NOT enough.
Sample Input and Output
Input   Output                        Explanations 
50000   Yes! He will live a carefree  1800 → even
1802    life and will have 13050.00    → Spends 12000 dollars
        dollars left.                  → Remain 50000 – 12000 = 38000
                                      1801 → odd
                                      → Spends 12000 + 19*50 = 12950 dollars
                                      → Remaining 38000 – 12950 = 25050
                                      1802 → even
                                      → Spends 12000 dollars
                                      → Remaining 25050 – 12000 = 13050
                                      
Input      Output                     Explanations                                       
100000.15  He will need 12399.85      1800 → even   
1808       dollars to survive.        → Remaining 100000.15 – 12000 = 88000.15 
                                      1801 → odd
                                      → Remaining 88000.15 – 12950 = 75050.15
                                      … 
                                      1808 → odd → -399.85 - 12000 = -12399.85
                                      12399.85 is not enough
Hints and Guidelines
Let’s solve the problem step by step: read the input data, iterate over the years, check the heritage 
and print the output.

04.Problem: Hospital
For a certain period of time, patients arrive at the hospital every day for an examination. It has initially 
7 doctors. Each doctor can treat only one patient per day, but sometimes there is a shortage of 
doctors, so the remaining patients are sent to other hospitals. Every third day the hospital makes 
calculations and if the count of untreated patients is greater than the count of treated ones, another 
doctor is appointed. Appointment takes place before the daily patient acceptance begins.
Write a program, that calculates for a given period of time, the count of treated and untreated 
patients.
Input Data
Input is read from the console and contains:
• On the first line – the period, for which you need to make calculations. Integer in the range of 
[1 … 1000].
• On the next lines (equal to the count of days) – count of the patients, who arrive for 
treatment for the current day. Integer in the range of [0 … 10 000].
Output Data
Print on the console 2 lines:
218 Programming Basics with C#
• On the first line: “Treated patients: {count of treated patients}.”
• On the second line: “Untreated patients: {count of untreated patients}.”
Sample Input and Output
Input Output                  Comments 
4     Treated patients: 23.   Day 1: 7 treated and 0 untreated patients for the day
7     Untreated patients: 21. Day 2: 7 treated and 20 untreated patients for the day
27                            Day 3: By this moment the treated patients are 14,
9                             and untreated ones – 20 –> New doctor is appointed. 
1                             –> 8 treated and 1 untreated patients for the day
                              Day 4: 1 treated and 0 untreated patients for the day
                              Total: 23 treated and 21 untreated patients.
Input Output
3     Treated patients: 21.
7     Untreated patients: 0.
7
7
Input Output
6     Treated patients: 40.
25    Untreated patients: 87.
25
25
25
25
2
Hints and Guidelines
Let’s solve the problem step by step: read the input data, calculate the number treated and untreated 
patients and print the output.

05.Problem: Division without Remainder
We have n integers in the range of [1 ... 1000]. Among them, some percentage p1 are divisible without 
remainder by 2, percentage p2 are divisible without remainder by 3, percentage p3 are divisible 
without remainder by 4. Write a program that calculates and prints the p1, p2 and p3 percentages.
Example: We have n = 10 numbers: 680, 2, 600, 200, 800, 799, 199, 46, 128, 65. We get the 
following distribution and visualization:
Division without 
remainder by Numbers Count Percent 
2 680, 2, 600, 200, 800, 46, 128 7 p1 = (7 / 10) * 100 = 70.00%
3 600 1 p2 = (1 / 10) * 100 = 10.00%
4 680, 600, 200, 800, 128 5 p3 = (5 / 10) * 100 = 50.00%
Input Data
On the first line of the input is the integer n (1 ≤ n ≤ 1000) – count of numbers. On each of the next
n lines we have one integer in the range of [1 … 1000] – numbers that needs to be checked for 
division.
Output Data
Print on the console 3 lines, each of them containing a percentage between 0% and 100%, two digits 
after the decimal point, for example 25.00%, 66.67%, 57.14%.
• On the first line – percentage of the numbers that are divisible by 2.
• On the second line – percentage of the numbers that are divisible by 3.
• On the third line – percentage of the numbers that are divisible by 4.
Sample Input and Output
Input Output   Input Output   Input  Output 
10    70.00%   3     33.33%   1      100.00%
680   10.00%   3     100.00%  12     100.00%
2     50.00%   6     0.00%           100.00%
600            9
200
800
799
199
46
128
65

Hints and Guidelines
For the current and for the next problem you will need to write by yourself the program code, 
following the given guidelines.
