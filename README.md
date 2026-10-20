CIS-165 Lab 3
Course Section: CIS-165-W198

INITIAL PLANS

Diamond Program:

My plan was to use 7 cout statements, one for each row. I would use spaces to put the asterisks in the middle. Each row would have 2 more asterisks than the last until the fourth row, and then the pattern would reverse.

Game Time Program:

My plan was to use division to find the number of hours and the % operator to find the remaining minutes. I would do this for both levels and then subtract the two times to find the difference.

HOW TO RUN THE PROGRAMS

I used OnlineGDB to write and run both programs.

1. Open OnlineGDB and select C++.
2. Open diamond.cpp and click Run.
3. Open game_time.cpp and click Run.
4. Check the output at the bottom of the screen.

TESTING

Diamond Program:

Expected output:

       *
      ***
     *****
    *******
     *****
      ***
       *

Actual output: The diamond printed correctly with 7 rows.

Result: Pass. I checked the number of spaces and asterisks in each row against the example.

Game Time Test 1:

Values: 78 and 144 minutes

Expected:
Level 1: 1 hour and 18 minutes
Level 2: 2 hours and 24 minutes
Difference: 1 hour and 6 minutes

Actual: All three results matched.

Result: Pass.

Game Time Test 2:

Values: 85 and 150 minutes

Expected:
Level 1: 1 hour and 25 minutes
Level 2: 2 hours and 30 minutes
Difference: 1 hour and 5 minutes

Actual: All three results matched.

Result: Pass.

Final Testing:

I changed the values back to 78 and 144 minutes for the final version.

After running both of the final programs, I got the expected outputs so I can confirm they both work fine.

CODE EXPLANATIONS

Diamond Program:

The program uses 7 cout statements to make the diamond. Each statement prints a row with a certain number of spaces and asterisks. The number of asterisks increases until the middle row and then decreases. I checked the spaces by comparing each row to the example and counting them.

Game Time Program:

The program uses integer division and the % operator to convert minutes into hours and remaining minutes. Division gives the number of complete hours, and % gives the remainder.

For Level 1, 78 / 60 gives 1 hour and 78 % 60 gives 18 minutes.

For Level 2, 144 / 60 gives 2 hours and 144 % 60 gives 24 minutes.

To find the difference, I subtracted 78 from 144 to get 66 minutes. This equals 1 hour and 6 minutes.

The calculations are stored in variables before cout because it makes the code easier to read and makes it easier to check the calculations separately from the output.