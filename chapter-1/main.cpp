//
//  main.cpp
//  chapter-1
//
//  Created by Jacob Quigley on 7/16/18.
//  Copyright © 2018 Jacob Quigley. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    /*
     
    //STREAM CODE FROM SECTION 1
     // output to prompt user for integers
     std::cout << "Enter two numbers" << std::endl;
     // initialize variables to store data
     int v1 = 0, v2 = 0;
     // input to receive numbers
     std::cin >> v1 >> v2;
     //print out final statement that performs the calculation
     std::cout << v1
     << " * "
     << v2
     << " = "
     << v1 * v2
     << "\n"
     << std::endl;
    return 0;
     
     */
    
    /*
     
     // PRINTS ALL INTEGERS BETWEEN TWO NUMBERS
     std::cout << "Enter two numbers" << std::endl;
     int v1 = 0, v2 = 0;
     std::cin >> v1 >> v2;
     int i = v1;
     while (i <= v2) {
     std::cout << i << " ";
     i++;
     }
     i = v2;
     while(i <= v1) {
     std::cout << i << " ";
     i++;
     }
     std::cout << std::endl;
     
     */
    
    /*
    //USES A FOR LOOP TO ADD ALL NUMBERS FROM 1 TO 10
    int sum = 0;
    for(int i = -100; i <= 100; i++) {
        sum += i;
    }
    std::cout << sum << "\n";
     */
    
    /*
     
    // ALLOWS FOR INDETERMINATE NUMBER OF INPUTS
    int sum = 0, value = 0;
    // read until end-of-file, calculating a running total of all values read
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
     
     */
    
    /*
     
    //SOME OTHER CRAZY INPUTS, BUT WITH IF STATEMENTS
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1; // store the count for the current value we're processing
        while (std::cin >> val) { // read the remaining numbers
            if (val == currVal) // if the values are the same
                ++cnt; // add 1 to cnt
            else { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs "
                << cnt << " times" << std::endl;
                currVal = val; // remember the new value
                cnt = 1; // reset the counter
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
        << cnt << " times" << std::endl;
    } // outermost if statement ends here
     
     */
    
    /*
     
     // PRINTS ALL INTEGERS BETWEEN TWO NUMBERS (NOW WITH IFS)
    std::cout << "Enter two numbers" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    if (v1 < v2) {
        while (v1 <= v2) {
            std::cout << v1 << " ";
            v1++;
        }
    } else {
        while(v2 <= v1) {
            std::cout << v2 << " ";
            v2++;
        }
    }
    std::cout << std::endl;
     
     */
    
    return 0;
}
