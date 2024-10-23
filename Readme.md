# 💳 Credit Card Validator using Luhn's Algorithm 

Welcome to the **Credit Card Validator** project! This program uses **Luhn's Algorithm**, an industry-standard formula, to validate credit card numbers with precision and ease. 🚀

## 📘 What is Luhn's Algorithm?
Luhn's Algorithm (also known as the "modulus 10" algorithm) is used to verify the validity of credit card numbers. Here's how it works step by step:

1. **Double every second digit from the right**, starting with the second-to-last digit.
   - For example, if the number is `1234567812345670`, the doubled digits are: `2, 6, 10, 14, 18, 12, 4, 0`.

2. If any of the doubled values result in **two digits**, sum them to make a **single digit**.
   - Continuing from the example above: `2, 6, 1 (from 10), 5 (from 14), 9 (from 18), 3 (from 12), 4, 0`.

3. **Sum** all of these processed digits together along with the digits that were not doubled.
   - Sum for our example: `2 + 6 + 1 + 5 + 9 + 3 + 4 + 0 + (digits not doubled) 1 + 3 + 5 + 7 + 2 + 4 + 6 = 54`.

4. If the total sum is divisible by 10, the credit card number is **valid**. If not, it is **invalid**.
   - In our example, 54 is not divisible by 10, so the number `1234567812345670` is **invalid**.

This simple yet powerful algorithm ensures that credit card numbers are mathematically verified!

## 🎯 How It Works
1. **Input a credit card number**.
2. The program applies **Luhn's Algorithm** to determine if it's valid.
3. Receive a **"Valid"** or **"Invalid"** result instantly! ⚡

## 🚀 Get Started

1. **Clone this repository** to your local machine.
   ```bash
   git clone https://github.com/yourusername/credit-card-validator.git
   ```

2. **Compile and run** the program.
   ```bash
   g++ credit_card_validator.cpp -o cc_validator
   ./cc_validator
   ```

3. **Enter a credit card number** to validate and get results in real-time!

## 📈 Example Output

```bash
This program uses Luhn's Algorithm to validate a credit card number.
You can enter 'exit' anytime to quit.
Please enter a credit card number to validate: 1234567812345670
Invalid credit card number!

Please enter a credit card number to validate: 4532015112830366
Valid credit card number!
```

