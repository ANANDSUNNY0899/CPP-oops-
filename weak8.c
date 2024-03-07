#include <stdio.h>

int main() {
int n, last_digit, num;
scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%d", &num);
last_digit = num % 10; // extract the last digit of the number
if (i == 0) { // if it's the first number in the array, initialize the result to the last digit
result = last_digit;
} else { // otherwise, append the last digit to the result
result = result * 10 + last_digit;
}
}
if (result % 10 == 0) { // check if the number formed is divisible by 10
printf("Yes");
} else {
printf("No");
}
return 0;
}

