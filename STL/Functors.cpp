#include <iostream>
#include <functional> // Required for predefined functors
using namespace std;

int main() {
    // Arithmetic Functors
    plus<int> add;
    minus<int> subtract;
    multiplies<int> multiply;
    divides<int> divide;
    modulus<int> mod;
    negate<int> negateValue;

    int a = 10, b = 3;

    cout << "Arithmetic Functors:\n";
    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;
    cout << "Division: " << divide(a, b) << endl;
    cout << "Modulus: " << mod(a, b) << endl;
    cout << "Negation: " << negateValue(a) << endl;

    // Relational Functors
    equal_to<int> isEqual;
    not_equal_to<int> isNotEqual;
    greater<int> isGreater;
    greater_equal<int> isGreaterOrEqual;
    less<int> isLess;
    less_equal<int> isLessOrEqual;

    cout << "\nRelational Functors:\n";
    cout << "Equal to: " << isEqual(a, b) << endl;
    cout << "Not equal to: " << isNotEqual(a, b) << endl;
    cout << "Greater: " << isGreater(a, b) << endl;
    cout << "Greater or equal: " << isGreaterOrEqual(a, b) << endl;
    cout << "Less: " << isLess(a, b) << endl;
    cout << "Less or equal: " << isLessOrEqual(a, b) << endl;

    // Logical Functors
    logical_and<bool> logicalAnd;
    logical_or<bool> logicalOr;
    logical_not<bool> logicalNot;

    bool x = true, y = false;

    cout << "\nLogical Functors:\n";
    cout << "Logical AND: " << logicalAnd(x, y) << endl;
    cout << "Logical OR: " << logicalOr(x, y) << endl;
    cout << "Logical NOT: " << logicalNot(x) << endl;

    // Bitwise Functors
    bit_and<int> bitwiseAnd;
    bit_or<int> bitwiseOr;
    bit_xor<int> bitwiseXor;

    int p = 5, q = 2; // Binary: 5 = 0101, 2 = 0010

    cout << "\nBitwise Functors:\n";
    cout << "Bitwise AND: " << bitwiseAnd(p, q) << endl;
    cout << "Bitwise OR: " << bitwiseOr(p, q) << endl;
    cout << "Bitwise XOR: " << bitwiseXor(p, q) << endl;

    return 0;
}
