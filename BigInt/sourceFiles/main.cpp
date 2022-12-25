#include <BigInt.h>

int main() {
	BigInt num1; // num1 = 0
	num1 = "15"; // num1 = 15
	BigInt num2 = 7; // num2 = 7;
	BigInt result = num1 + num2; // result = 22
	result = num1 - num2; // result = 8
	result = num1 * num2; // result = 105
	result = num1 / num2; // result = 2
	num1 += num2; // num1 = 22;
	num1 -= num2; // num1 = 15
	num1 *= num2; // num1 = 105
	num1 /= num2; // num1 = 15
	result = num1++; // result = 15, num1 = 16
	result = ++num1; // result = 17, num1 = 17
	result = num1--; // result = 17, num1 = 16
	result = --num1; // result = 15, num1 = 15
	result = +num1; // result = 15
	result = -num1; // result = -15
	std::cout << "num1: " << num1 << ", num2: " << num2 << ", result: " << result;
}