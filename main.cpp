#include <iostream>
#include <string>

using namespace std;

// Function to check if the input string consists of digits only
bool isValidNumberString(const string& inputString) {
    int length = inputString.length();
    for (int i = 0; i < length; i++) {
        if (inputString[i] < '0' || inputString[i] > '9')
            return false;
    }
    return true;
}

int main() {
    string creditCardNumber;
    
    cout << "💳 Welcome to the *Ultimate* Credit Card Validator!" << endl;
    cout << "Enter 'exit' anytime to quit." << endl;
    
    while (true) {
        cout << "\nDrop your credit card number: ";
        cin >> creditCardNumber;
        
        // Exit the program if the user enters "exit"
        if (creditCardNumber == "exit") {
            cout << "Alright, catch you later! :) Stay safe!" << endl;
            break;
        }
        
        // Check if the input is a valid number string
        if (!isValidNumberString(creditCardNumber)) {
            cout << "Hmm, that doesn't look right. Please enter digits only!" << endl;
            continue;
        }
            
        int cardLength = creditCardNumber.length();
        int sumOfDigits = 0;

        /* 
         * Step 1: Double every second digit from the right. 
         * If the result is two digits, sum them to get a single digit.
         * Accumulate the results in 'sumOfDigits'.
         */
        for (int i = cardLength - 2; i >= 0; i -= 2) {
            int doubledDigit = ((creditCardNumber[i] - '0') * 2);
            if (doubledDigit > 9) {
                doubledDigit = (doubledDigit / 10) + (doubledDigit % 10);  // Sum digits of two-digit number
            }
            sumOfDigits += doubledDigit;
        }
        
        // Step 2: Add digits at odd positions (starting from the right) to 'sumOfDigits'.
        for (int i = cardLength - 1; i >= 0; i -= 2) {
            sumOfDigits += (creditCardNumber[i] - '0');
        }
        
        // Step 3: Check if the total sum is divisible by 10, indicating a valid card.
        if (sumOfDigits % 10 == 0) {
            cout << "Nice! That's a valid credit card number!" << endl;
        } else {
            cout << "Oops! That credit card number is not valid. Try again!" << endl;
        }
    }

    return 0;
}
