/*
 * findmedian001.cpp
 *
 *  Created on: Nov 15, 2023
 *      Author: diegohn
 */

#include <iostream>
#include <vector> //.push_back() ; .size() ;
#include <algorithm> //.sort(.begin(), .end())

double findMedian(int number) {
    // Step 2: Convert the number to a vector of digits
    std::vector<int> digits;

    std::cout << "Digits vector size (before adding elements): " << digits.size() << std::endl;

    int temp = number;

    std::cout << "Digits are (in backwards): " << std::endl;

    // Adding elements to vector
    int i=0;
    do {
        digits.push_back(temp % 10);
        std::cout <<  digits[i] << " ";
        temp /= 10;
        i++;
    } while (temp != 0);

    std::cout << std::endl;
    std::cout << "Sorted digits are: " << std::endl;

    // Step 3: Sort the vector of digits
    std::sort(digits.begin(), digits.end());

    for(std::size_t j=0; j<digits.size(); j++){
    	std::cout <<  digits[j] << " ";
    }

    std::cout << std::endl;
    std::cout << "Digits vector size (after adding elements): " << digits.size();

    // Step 4: Find the median
    int length = digits.size();
    if (length % 2 == 1) {
    	std::cout << " - Size is odd."<< std::endl;
        // Odd length
        return digits[(length - 1) / 2];
    } else {
    	std::cout << " - Size is even."<< std::endl;
        // Even length
        int middleRight = length / 2;
        int middleLeft = middleRight - 1;
        return (digits[middleLeft] + digits[middleRight]) / 2;
    }
}

int main() {
    // Example usage:      18446744073709551615 , 4294967295
    //long int inputNumber = 9223372036854775807; // Maximum value for a variable of type long long 9,223,372,036,854,775,807
	int inputNumber = 4294967296;
    std::cout << "Number: " << inputNumber << std::endl;
    double median = findMedian(inputNumber);
    std::cout << "Median: " << median << std::endl;

    return 0;
}



