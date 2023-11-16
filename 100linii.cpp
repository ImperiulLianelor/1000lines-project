#include <iostream>
#include <cmath>
#include<limits>


// Elementary functions

// 1. Absolute value
double absolute(double num) {
    return abs(num);
}

// 2. Square root
double squareRoot(double num) {
    return sqrt(num);
}

// 3. Exponential function
double exponential(double num) {
    return exp(num);
}

// 4. Natural logarithm
double naturalLog(double num) {
    return log(num);
}

// 5. Sine function
double sine(double radians) {
    return sin(radians);
}

// 6. Cosine function
double cosine(double radians) {
    return cos(radians);
}

// 7. Tangent function
double tangent(double radians) {
    return tan(radians);
}

// 8. Arcsine function
double arcsine(double value) {
    return asin(value);
}

// 9. Arccosine function
double arccosine(double value) {
    return acos(value);
}

// 10. Arctangent function
double arctangent(double value) {
    return atan(value);
}
// 11. Ceiling function
double ceilValue(double num) {
    return ceil(num);
}

// 12. Floor function
double floorValue(double num) {
    return floor(num);
}

// 13. Power function
double power(double base, double exponent) {
    return pow(base, exponent);
}

// 14. Hyperbolic sine function
double hyperbolicSine(double num) {
    return sinh(num);
}

// 15. Hyperbolic cosine function
double hyperbolicCosine(double num) {
    return cosh(num);
}

// 16. Hyperbolic tangent function
double hyperbolicTangent(double num) {
    return tanh(num);
}

// 17. Absolute difference
double absoluteDifference(double x, double y) {
    return fabs(x - y);
}

// 18. Hypotenuse calculation
double hypotenuse(double side1, double side2) {
    return sqrt((side1 * side1) + (side2 * side2));
}

// 19. Round a number to the nearest integer
double roundToNearest(double num) {
    return round(num);
}

// 20. Convert radians to degrees
double radiansToDegrees(double radians) {
    return radians * (180.0 / M_PI);
}
// 21. Convert degrees to radians


// 22. Absolute value of an integer
int absoluteInt(int num) {
    return abs(num);
}

// 23. Cube root
double cubeRoot(double num) {
    return cbrt(num);
}

// 24. Logarithm base 10
double logBase10(double num) {
    return log10(num);
}

// 25. Exponential minus one
double exponentialMinusOne(double num) {
    return expm1(num);
}

// 26. Hyperbolic arc sine
double hyperbolicArcSine(double num) {
    return asinh(num);
}

// 27. Hyperbolic arc cosine
double hyperbolicArcCosine(double num) {
    return acosh(num);
}

// 28. Hyperbolic arc tangent
double hyperbolicArcTangent(double num) {
    return atanh(num);
}

// 29. Fused multiply-add (x * y + z)
double fusedMultiplyAdd(double x, double y, double z) {
    return fma(x, y, z);
}

// 30. Next representable value
double nextRepresentableValue(double num) {
    return nextafter(num, INFINITY);
}

// 31. Absolute difference between integers
int absoluteDifferenceInt(int x, int y) {
    return abs(x - y);
}

// 32. Check if a number is finite
bool isFinite(double num) {
    return std::isfinite(num);
}

// 33. Check if a number is infinite
bool isInfinite(double num) {
    return std::isinf(num);
}

// 34. Check if a number is NaN (Not a Number)
bool isNaN(double num) {
    return std::isnan(num);
}

// 35. Check if a number is negative
bool isNegative(double num) {
    return num < 0;
}

// 36. Check if a number is positive
bool isPositive(double num) {
    return num > 0;
}

// 37. Check if a number is zero
bool isZero(double num) {
    return num == 0;
}

// 38. Round down to the nearest integer
double roundDown(double num) {
    return std::floor(num);
}

// 39. Round up to the nearest integer
double roundUp(double num) {
    return std::ceil(num);
}

// 40. Check if a number is odd
bool isOdd(int num) {
    return num % 2 != 0;
}

// 41. Check if a number is even
bool isEven(int num) {
    return num % 2 == 0;
}

// 42. Maximum of two numbers
double maximum(double x, double y) {
    return std::fmax(x, y);
}

// 43. Minimum of two numbers
double minimum(double x, double y) {
    return std::fmin(x, y);
}

// 44. Round to the nearest integer away from zero
double roundAway(double num) {
    return (num > 0) ? std::ceil(num) : std::floor(num);
}

// 45. Error function (Gaussian error function)
double errorFunction(double num) {
    return std::erf(num);
}

// 46. Complementary error function
double complementaryErrorFunction(double num) {
    return std::erfc(num);
}

// 47. Gamma function
double gammaFunction(double num) {
    return std::tgamma(num);
}

// 48. Logarithm base 2
double logBase2(double num) {
    return std::log2(num);
}

// 49. Check if a number is normal (neither zero, subnormal, infinite, nor NaN)
bool isNormal(double num) {
    return std::isnormal(num);
}

// 50. Floating-point radix (base)
int floatingPointRadix() {
    return std::numeric_limits<double>::radix;
}

// 51. Check if a number is subnormal (denormalized)
bool isSubnormal(double num) {
    return std::fpclassify(num) == FP_SUBNORMAL;
}

// 52. Sign function
int signFunction(double num) {
    return (num > 0) ? 1 : ((num < 0) ? -1 : 0);
}

// 53. Cube function


// 54. Sigmoid function
double sigmoid(double num) {
    return 1 / (1 + exp(-num));
}

// 55. Logistic function
double logistic(double num) {
    return exp(num) / (1 + exp(num));
}

// 56. Gaussian distribution probability density function
double gaussianPDF(double x, double mean, double stddev) {
    return (1 / (stddev * sqrt(2 * M_PI))) * exp(-(pow(x - mean, 2) / (2 * pow(stddev, 2))));
}

// 57. Round to the nearest multiple


// 58. Absolute difference between long integers
long long absoluteDifferenceLong(long long x, long long y) {
    return llabs(x - y);
}

// 59. Exponential distribution cumulative distribution function
double exponentialCDF(double x, double lambda) {
    return 1 - exp(-lambda * x);
}

// 60. Hypergeometric distribution probability mass function
double hypergeometricPMF(int successes, int population, int sampleSize, int observedSuccesses) {
    return (std::tgamma(successes + 1) * std::tgamma(population - successes + 1) * std::tgamma(sampleSize - successes + 1) *
        std::tgamma(population - sampleSize - observedSuccesses + 1)) /
        (std::tgamma(observedSuccesses + 1) * std::tgamma(successes - observedSuccesses + 1) * std::tgamma(population + 1) *
            std::tgamma(sampleSize - successes - observedSuccesses + 1));
}

// 61. Bernoulli numbers


// 62. Catalan numbers


// 63. Fibonacci sequence


// 64. Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 65. Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// 66. Prime number check
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// 67. Square function
double square(double num) {
    return num * num;
}

// 68. Cube function (different from the previous cube function)
double cube(double num) {
    return num * num * num;
}

// 69. Logarithm base e
double logBaseE(double num) {
    return std::log(num);
}

// 70. Round to the nearest multiple (different from the previous roundToMultiple function)
double roundToMultiple(double num, double multiple) {
    return std::round(num / multiple) * multiple;
}


// 71. Exponentiation using a custom iterative method


// 72. Absolute difference between floats
float absoluteDifferenceFloat(float x, float y) {
    return std::fabs(x - y);
}

// 73. Inverse square root

// 74. Truncation of a floating-point number
float truncate(float num) {
    return (num > 0) ? floor(num) : ceil(num);
}

// 75. Cube root using Newton's method
double cubeRootNewton(double num) {
    double x = num;
    double epsilon = 0.000001; // set a small value for accuracy
    while (std::abs(x * x * x - num) > epsilon) {
        x = (2 * x + num / (x * x)) / 3;
    }
    return x;
}

// 76. Fibonacci sequence using recursion
int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// 77. Ackermann function
unsigned int ackermann(unsigned int m, unsigned int n) {
    if (m == 0) return n + 1;
    if (n == 0) return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}

// 78. Rounding towards zero
float roundTowardsZero(float num) {
    return (num >= 0) ? floor(num) : ceil(num);
}

// 79. Square root using Babylonian method
double squareRootBabylonian(double num) {
    double x = num;
    double y = 1;
    double epsilon = 0.000001; // set a small value for accuracy
    while (x - y > epsilon) {
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
}

// 80. Factorial using iterative method
unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 81. Summation of natural numbers using the formula n(n+1)/2
unsigned long long sumOfNaturalNumbers(unsigned long long n) {
    return n * (n + 1) / 2;
}

// 82. Largest Prime Factor
unsigned long long largestPrimeFactor(unsigned long long n) {
    unsigned long long maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    for (unsigned long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2) maxPrime = n;
    return maxPrime;
}

// 83. Trigonometric functions for degrees
double degreesToRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

double cosineDegrees(double degrees) {
    return cos(degreesToRadians(degrees));
}

double sineDegrees(double degrees) {
    return sin(degreesToRadians(degrees));
}

double tangentDegrees(double degrees) {
    return tan(degreesToRadians(degrees));
}

// 84. Arithmetic progression formula
unsigned long long arithmeticProgression(unsigned long long firstTerm, unsigned long long n, unsigned long long commonDifference) {
    return firstTerm + (n - 1) * commonDifference;
}

// 85. Geometric progression formula
unsigned long long geometricProgression(unsigned long long firstTerm, unsigned long long n, unsigned long long commonRatio) {
    return firstTerm * pow(commonRatio, n - 1);
}

// 86. Exponential function with a custom iterative method
double exponentialCustom(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// 87. Round to a specified number of decimal places
double roundToDecimalPlaces(double num, int decimalPlaces) {
    double multiplier = pow(10.0, decimalPlaces);
    return round(num * multiplier) / multiplier;
}

// 88. Factorial using recursive method


// 89. Sum of squares of first n natural numbers
unsigned long long sumOfSquares(unsigned long long n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

// 90. Perfect square check
bool isPerfectSquare(unsigned long long n) {
    unsigned long long squareRootN = sqrt(n);
    return squareRootN * squareRootN == n;
}

// 91. Calculate the area of a circle given its radius
double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

// 92. Calculate the circumference of a circle given its radius
double circumferenceOfCircle(double radius) {
    return 2 * M_PI * radius;
}

// 93. Calculate the area of a triangle given base and height
double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

// 94. Calculate the hypotenuse of a right-angled triangle given its sides
double hypotenuseOfTriangle(double side1, double side2) {
    return sqrt(side1 * side1 + side2 * side2);
}

// 95. Calculate the perimeter of a square given its side
double perimeterOfSquare(double side) {
    return 4 * side;
}

// 96. Calculate the area of a rectangle given its length and width
double areaOfRectangle(double length, double width) {
    return length * width;
}

// 97. Calculate the perimeter of a rectangle given its length and width


// 98. Calculate the volume of a cube given its side
double volumeOfCube(double side) {
    return side * side * side;
}

// 99. Calculate the volume of a rectangular prism given its length, width, and height
double volumeOfRectangularPrism(double length, double width, double height) {
    return length * width * height;
}

// 100. Calculate the volume of a sphere given its radius
double volumeOfSphere(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

// 101. Calculate the diagonal of a rectangle given its length and width
double diagonalOfRectangle(double length, double width) {
    return sqrt(length * length + width * width);
}

// 102. Calculate the surface area of a cube given its side
double surfaceAreaOfCube(double side) {
    return 6 * side * side;
}

// 103. Calculate the surface area of a rectangular prism given its length, width, and height
double surfaceAreaOfRectangularPrism(double length, double width, double height) {
    return 2 * (length * width + length * height + width * height);
}

// 104. Calculate the surface area of a sphere given its radius
double surfaceAreaOfSphere(double radius) {
    return 4 * M_PI * radius * radius;
}

// 105. Calculate the surface area of a cylinder given its radius and height
double surfaceAreaOfCylinder(double radius, double height) {
    return 2 * M_PI * radius * (radius + height);
}

// 106. Calculate the surface area of a cone given its radius and slant height
double surfaceAreaOfCone(double radius, double slantHeight) {
    return M_PI * radius * (radius + slantHeight);
}

// 107. Convert temperature from Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// 108. Convert temperature from Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// 109. Calculate compound interest
double compoundInterest(double principal, double rate, int time) {
    return principal * pow((1 + rate / 100), time);
}

// 110. Calculate the distance between two points in 2D space
double distanceBetweenPoints2D(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// 111. Calculate the midpoint between two points in 2D space
void midpointBetweenPoints2D(double x1, double y1, double x2, double y2) {
    double midX = (x1 + x2) / 2;
    double midY = (y1 + y2) / 2;
    std::cout << "Midpoint between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: (" << midX << ", " << midY << ")" << std::endl;
}

// 112. Check if a number is a power of 2
bool isPowerOfTwo(unsigned int n) {
    return (n && !(n & (n - 1)));
}

// 113. Convert binary number to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        binary /= 10;
        decimal += lastDigit * base;
        base *= 2;
    }
    return decimal;
}

// 114. Convert decimal number to binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, placeValue = 1;
    while (decimal > 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * placeValue;
        placeValue *= 10;
    }
    return binary;
}

// 115. Find the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// 116. Reverse a number
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

// 117. Calculate the factorial of a number using recursion
unsigned long long factorialRecursive(unsigned long long n) {
    if (n == 0 || n == 1) return 1;
    return n * factorialRecursive(n - 1);
}

// 118. Calculate the power of a number using recursion
double powerRecursive(double base, int exponent) {
    if (exponent == 0) return 1;
    else if (exponent > 0) return base * powerRecursive(base, exponent - 1);
    else return 1 / base * powerRecursive(base, exponent + 1);
}

// 119. Check if a number is a palindrome
bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

// 120. Calculate the average of an array of numbers
double averageOfArray(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

// 121. Calculate the sum of an arithmetic series
double sumOfArithmeticSeries(double firstTerm, double lastTerm, double numTerms) {
    return (numTerms / 2) * (firstTerm + lastTerm);
}

// 122. Calculate the sum of a geometric series
double sumOfGeometricSeries(double firstTerm, double commonRatio, double numTerms) {
    if (commonRatio == 1) return firstTerm * numTerms;
    return firstTerm * (1 - pow(commonRatio, numTerms)) / (1 - commonRatio);
}

// 123. Calculate the sum of an infinite geometric series
double sumOfInfiniteGeometricSeries(double firstTerm, double commonRatio) {
    if (std::abs(commonRatio) < 1) return firstTerm / (1 - commonRatio);
    return std::numeric_limits<double>::quiet_NaN(); // Not a valid geometric series
}

// 124. Calculate the nth term of an arithmetic sequence
double nthTermOfArithmeticSequence(double firstTerm, double commonDifference, double n) {
    return firstTerm + (n - 1) * commonDifference;
}

// 125. Calculate the nth term of a geometric sequence

// 126. Check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 127. Calculate the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

// 128. Convert seconds to hours, minutes, and seconds
void secondsToHMS(int seconds) {
    int hours = seconds / 3600;
    int remainingSeconds = seconds % 3600;
    int minutes = remainingSeconds / 60;
    int remainingSecondsFinal = remainingSeconds % 60;
    std::cout << seconds << " seconds is equal to " << hours << " hours, " << minutes << " minutes, and " << remainingSecondsFinal << " seconds." << std::endl;
}

// 129. Calculate the area of a trapezoid
double areaOfTrapezoid(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}

// 130. Calculate the area of a parallelogram
double areaOfParallelogram(double base, double height) {
    return base * height;
}
int main() {
    // Using the elementary functions
    std::cout << "Absolute value of -7.5: " << absolute(-7.5) << std::endl;
    std::cout << "Square root of 25: " << squareRoot(25) << std::endl;
    std::cout << "e raised to the power of 2: " << exponential(2) << std::endl;
    std::cout << "Natural logarithm of 10: " << naturalLog(10) << std::endl;
    std::cout << "Sine of 90 degrees: " << sine(90 * M_PI / 180.0) << std::endl;
    std::cout << "Cosine of 45 degrees: " << cosine(45 * M_PI / 180.0) << std::endl;
    std::cout << "Tangent of 60 degrees: " << tangent(60 * M_PI / 180.0) << std::endl;
    std::cout << "Arcsine of 0.5: " << arcsine(0.5) << std::endl;
    std::cout << "Arccosine of 0.5: " << arccosine(0.5) << std::endl;
    std::cout << "Arctangent of 1: " << arctangent(1) << std::endl;

    std::cout << "Ceiling of 4.3: " << ceilValue(4.3) << std::endl;
    std::cout << "Floor of 4.8: " << floorValue(4.8) << std::endl;
    std::cout << "2 raised to the power of 3: " << power(2, 3) << std::endl;
    std::cout << "Hyperbolic sine of 2: " << hyperbolicSine(2) << std::endl;
    std::cout << "Hyperbolic cosine of 2: " << hyperbolicCosine(2) << std::endl;
    std::cout << "Hyperbolic tangent of 2: " << hyperbolicTangent(2) << std::endl;
    std::cout << "Absolute difference between 5 and 9: " << absoluteDifference(5, 9) << std::endl;
    std::cout << "Hypotenuse of sides 3 and 4: " << hypotenuse(3, 4) << std::endl;
    std::cout << "Round 3.7 to nearest integer: " << roundToNearest(3.7) << std::endl;
    std::cout << "Convert 1.5708 radians to degrees: " << radiansToDegrees(1.5708) << std::endl;

    std::cout << "Convert 90 degrees to radians: " << degreesToRadians(90) << std::endl;
    std::cout << "Absolute value of -8: " << absoluteInt(-8) << std::endl;
    std::cout << "Cube root of 27: " << cubeRoot(27) << std::endl;
    std::cout << "Log base 10 of 1000: " << logBase10(1000) << std::endl;
    std::cout << "Exponential minus one of 2: " << exponentialMinusOne(2) << std::endl;
    std::cout << "Hyperbolic arc sine of 2: " << hyperbolicArcSine(2) << std::endl;
    std::cout << "Hyperbolic arc cosine of 2: " << hyperbolicArcCosine(2) << std::endl;
    std::cout << "Hyperbolic arc tangent of 0.5: " << hyperbolicArcTangent(0.5) << std::endl;
    std::cout << "Fused multiply-add (2 * 3 + 4): " << fusedMultiplyAdd(2, 3, 4) << std::endl;
    std::cout << "Next representable value after 1.5: " << nextRepresentableValue(1.5) << std::endl;

    std::cout << "Absolute difference between 8 and 3: " << absoluteDifferenceInt(8, 3) << std::endl;
    std::cout << "Is 5 finite? " << (isFinite(5) ? "Yes" : "No") << std::endl;
    std::cout << "Is infinity infinite? " << (isInfinite(INFINITY) ? "Yes" : "No") << std::endl;
    std::cout << "Is NaN a number? " << (isNaN(NAN) ? "No" : "Yes") << std::endl;
    std::cout << "Is -7 negative? " << (isNegative(-7) ? "Yes" : "No") << std::endl;
    std::cout << "Is 4 positive? " << (isPositive(4) ? "Yes" : "No") << std::endl;
    std::cout << "Is 0 zero? " << (isZero(0) ? "Yes" : "No") << std::endl;
    std::cout << "Round down 6.8: " << roundDown(6.8) << std::endl;
    std::cout << "Round up 3.2: " << roundUp(3.2) << std::endl;
    std::cout << "Is 9 odd? " << (isOdd(9) ? "Yes" : "No") << std::endl;

    std::cout << "Is 10 even? " << (isEven(10) ? "Yes" : "No") << std::endl;
    std::cout << "Maximum of 7 and 12: " << maximum(7, 12) << std::endl;
    std::cout << "Minimum of 5 and -3: " << minimum(5, -3) << std::endl;
    std::cout << "Round away from zero for -2.6: " << roundAway(-2.6) << std::endl;
    std::cout << "Error function of 1.5: " << errorFunction(1.5) << std::endl;
    std::cout << "Complementary error function of 0.8: " << complementaryErrorFunction(0.8) << std::endl;
    std::cout << "Gamma function of 4: " << gammaFunction(4) << std::endl;
    std::cout << "Log base 2 of 16: " << logBase2(16) << std::endl;
    std::cout << "Is 1000 normal? " << (isNormal(1000) ? "Yes" : "No") << std::endl;
    std::cout << "Floating-point radix (base): " << floatingPointRadix() << std::endl;
    
    std::cout << "Is 0.00001 subnormal? " << (isSubnormal(0.00001) ? "Yes" : "No") << std::endl;
    std::cout << "Sign of -9.5: " << signFunction(-9.5) << std::endl;
    std::cout << "Cube of 3: " << cube(3) << std::endl;
    std::cout << "Sigmoid of 1: " << sigmoid(1) << std::endl;
    std::cout << "Logistic of -2: " << logistic(-2) << std::endl;
    std::cout << "Gaussian PDF of x=1, mean=0, stddev=1: " << gaussianPDF(1, 0, 1) << std::endl;
    std::cout << "Round 7.3 to the nearest multiple of 5: " << roundToMultiple(7.3, 5) << std::endl;
    std::cout << "Absolute difference between 1000000 and 999999: " << absoluteDifferenceLong(1000000, 999999) << std::endl;
    std::cout << "Exponential CDF of x=2, lambda=0.5: " << exponentialCDF(2, 0.5) << std::endl;
    std::cout << "Hypergeometric PMF of successes=3, population=10, sampleSize=5, observedSuccesses=2: "
        << hypergeometricPMF(3, 10, 5, 2) << std::endl;

    
    std::cout << "GCD of 24 and 36: " << gcd(24, 36) << std::endl;
    std::cout << "LCM of 15 and 20: " << lcm(15, 20) << std::endl;
    std::cout << "Is 17 a prime number? " << (isPrime(17) ? "Yes" : "No") << std::endl;
    std::cout << "Square of 5: " << square(5) << std::endl;
    std::cout << "Cube of 4: " << cube(4) << std::endl;
    std::cout << "Natural logarithm of 2.718: " << logBaseE(2.718) << std::endl;
    std::cout << "Round 12.8 to the nearest multiple of 5: " << roundToMultiple(12.8, 5) << std::endl;

  
    std::cout << "Absolute difference between 3.5 and 5.2: " << absoluteDifferenceFloat(3.5f, 5.2f) << std::endl;
    
    std::cout << "Truncate 6.78: " << truncate(6.78f) << std::endl;
    std::cout << "Cube root of 125 using Newton's method: " << cubeRootNewton(125) << std::endl;
    std::cout << "8th number in Fibonacci sequence using recursion: " << fibonacciRecursive(8) << std::endl;
    std::cout << "Ackermann function with m=2, n=3: " << ackermann(2, 3) << std::endl;
    std::cout << "Round towards zero for -4.5: " << roundTowardsZero(-4.5f) << std::endl;
    std::cout << "Square root of 25 using Babylonian method: " << squareRootBabylonian(25) << std::endl;
    std::cout << "Factorial of 7 using iterative method: " << factorialIterative(7) << std::endl;

    std::cout << "Sum of first 100 natural numbers: " << sumOfNaturalNumbers(100) << std::endl;
    std::cout << "Largest prime factor of 88: " << largestPrimeFactor(88) << std::endl;
    std::cout << "Cosine of 60 degrees: " << cosineDegrees(60) << std::endl;
    std::cout << "Sine of 45 degrees: " << sineDegrees(45) << std::endl;
    std::cout << "Tangent of 30 degrees: " << tangentDegrees(30) << std::endl;
    std::cout << "8th term of an arithmetic progression (first term=2, common difference=3): " << arithmeticProgression(2, 8, 3) << std::endl;
    std::cout << "5th term of a geometric progression (first term=3, common ratio=2): " << geometricProgression(3, 5, 2) << std::endl;
    std::cout << "2 raised to the power of 6 using custom method: " << exponentialCustom(2, 6) << std::endl;
    std::cout << "Round 3.14159 to 2 decimal places: " << roundToDecimalPlaces(3.14159, 2) << std::endl;
    std::cout << "Factorial of 10 using recursive method: " << factorialRecursive(10) << std::endl;
    std::cout << "Sum of squares of first 10 natural numbers: " << sumOfSquares(10) << std::endl;
    std::cout << "Is 64 a perfect square? " << (isPerfectSquare(64) ? "Yes" : "No") << std::endl;
   
    std::cout << "Area of a circle with radius 5: " << areaOfCircle(5) << std::endl;
    std::cout << "Circumference of a circle with radius 8: " << circumferenceOfCircle(8) << std::endl;
    std::cout << "Area of a triangle with base 6 and height 4: " << areaOfTriangle(6, 4) << std::endl;
    std::cout << "Hypotenuse of a right-angled triangle with sides 3 and 4: " << hypotenuseOfTriangle(3, 4) << std::endl;
    std::cout << "Perimeter of a square with side 7: " << perimeterOfSquare(7) << std::endl;
    std::cout << "Area of a rectangle with length 5 and width 10: " << areaOfRectangle(5, 10) << std::endl;
   
    std::cout << "Volume of a cube with side 4: " << volumeOfCube(4) << std::endl;
    std::cout << "Volume of a rectangular prism with length 3, width 4, and height 5: " << volumeOfRectangularPrism(3, 4, 5) << std::endl;
    std::cout << "Volume of a sphere with radius 6: " << volumeOfSphere(6) << std::endl;

    std::cout << "Diagonal of a rectangle with length 5 and width 12: " << diagonalOfRectangle(5, 12) << std::endl;
    std::cout << "Surface area of a cube with side 3: " << surfaceAreaOfCube(3) << std::endl;
    std::cout << "Surface area of a rectangular prism with length 2, width 4, and height 6: " << surfaceAreaOfRectangularPrism(2, 4, 6) << std::endl;
    std::cout << "Surface area of a sphere with radius 7: " << surfaceAreaOfSphere(7) << std::endl;
    std::cout << "Surface area of a cylinder with radius 4 and height 5: " << surfaceAreaOfCylinder(4, 5) << std::endl;
    std::cout << "Surface area of a cone with radius 6 and slant height 10: " << surfaceAreaOfCone(6, 10) << std::endl;
    std::cout << "70 degrees Celsius in Fahrenheit: " << celsiusToFahrenheit(70) << std::endl;
    std::cout << "98 degrees Fahrenheit in Celsius: " << fahrenheitToCelsius(98) << std::endl;
    std::cout << "Compound interest on $1000 at 5% for 3 years: " << compoundInterest(1000, 5, 3) << std::endl;
    std::cout << "Distance between points (3, 4) and (7, 9): " << distanceBetweenPoints2D(3, 4, 7, 9) << std::endl;
   
    midpointBetweenPoints2D(1, 2, 3, 4);
    std::cout << "Is 16 a power of two? " << (isPowerOfTwo(16) ? "Yes" : "No") << std::endl;
    std::cout << "Binary equivalent of decimal 25: " << decimalToBinary(25) << std::endl;
    std::cout << "Decimal equivalent of binary 10101: " << binaryToDecimal(10101) << std::endl;
    std::cout << "Sum of digits in 12345: " << sumOfDigits(12345) << std::endl;
    std::cout << "Reverse of 789: " << reverseNumber(789) << std::endl;
    std::cout << "Factorial of 5 using recursion: " << factorialRecursive(5) << std::endl;
    std::cout << "2 raised to the power of 4 using recursion: " << powerRecursive(2, 4) << std::endl;
    std::cout << "Is 12321 a palindrome? " << (isPalindrome(12321) ? "Yes" : "No") << std::endl;

    int array[] = { 1, 2, 3, 4, 5 };
    std::cout << "Average of array [1, 2, 3, 4, 5]: " << averageOfArray(array, 5) << std::endl;
    
    std::cout << "Sum of an arithmetic series (first term=3, last term=99, number of terms=33): " << sumOfArithmeticSeries(3, 99, 33) << std::endl;
    std::cout << "Sum of a geometric series (first term=2, common ratio=3, number of terms=4): " << sumOfGeometricSeries(2, 3, 4) << std::endl;
    std::cout << "Sum of an infinite geometric series (first term=5, common ratio=0.5): " << sumOfInfiniteGeometricSeries(5, 0.5) << std::endl;
    std::cout << "10th term of an arithmetic sequence (first term=2, common difference=3): " << nthTermOfArithmeticSequence(2, 3, 10) << std::endl;
    
    std::cout << "Is 2024 a leap year? " << (isLeapYear(2024) ? "Yes" : "No") << std::endl;
    std::cout << "Number of days in February 2024: " << daysInMonth(2, 2024) << std::endl;
    secondsToHMS(12345);
    std::cout << "Area of a trapezoid with bases 4 and 8 and height 6: " << areaOfTrapezoid(4, 8, 6) << std::endl;
    std::cout << "Area of a parallelogram with base 10 and height 7: " << areaOfParallelogram(10, 7) << std::endl;

    
    return 0;
}
