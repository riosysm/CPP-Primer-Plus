//
//  limits.cpp
//  CPP primer plus
//
//  Created by betaween on 16/1/1.
//  Copyright © 2016年 betaween. All rights reserved.
//

#include <iostream>
#include <climits>              // use limits.h for older systems. also can use `limits.h`,but nowaday you'd better use the former.
int main(int argc, const char * argv[])
{
    using namespace std;
    int n_int = INT_MAX;        // initialize n_int to max int value
    /*initialize:(brace):
     int emus{7};       // set emus to 5 <-----------------------------------¬
     int rheas = {12};  // set rheas to 12                                   |
     left empty:                                                             |
     int rocs = {};     // set rocs to 0                                     |
     int psychics{};    // set psychics to 0                                 |
     |
     int owls = 101; // traditional C initialization, sets owls to 101       |
     int wrens(432); // alternative C++ syntax, set wrens to 432 <-----------¡
     */
    
    
    
    short n_short = SHRT_MAX;   // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    
    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;
    
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;
    
    cout << "Minimum int value = " << INT_MIN << endl;          //int is singnal int so it has nagetive
    cout << "Bits per byte = " << CHAR_BIT << endl;             //because char cost only one bit.
    return 0;
}

/*————————————————————————————————————————————————
 output:
 int is 4 bytes.
 short is 2 bytes.
 long is 8 bytes.
 long long is 8 bytes.
 
 Maximum values:
 int: 2147483647
 short: 32767
 long: 9223372036854775807
 long long: 92233a72036854775807
 
 Minimum int value = -2147483648             value max - minimum + 1(0) = 2^8^4
 Bits per byte = 8
 Program ended with exit code: 0
 */


/*
 size of :
 
 You can apply the sizeof operator to a type name or to a variable name. When you use the sizeof operator with a type name, such as int, you enclose the name in parentheses. But when you use the operator with the name of the variable, such as n_short, parentheses are optional:
 
 cout << "int is " << sizeof (int) << " bytes.\n";
 cout << "short is " << sizeof n_short << " bytes.\n";
 
 ————————————————————————————————————————————————
 */

/*
 CHAR_BIT
 Length of a char variable in bits.
 CHAR_MAX
 Maximal value which can be stored in a char variable.
 CHAR_MIN
 Minimal value which can be stored in a char variable.
 INT_MAX
 Maximal value which can be stored in an int variable.
 INT_MIN
 Minimal value which can be stored in an int variable.
 LONG_MAX
 Maximal value which can be stored in a long int variable.
 LONG_MIN
 Minimal value which can be stored in a long int variable.
 SCHAR_MAX
 Maximal value which can be stored in a signed char variable.
 SCHAR_MIN
 Minimal value which can be stored in a signed char variable.
 SHRT_MAX
 Maximal value which can be stored in a short int variable.
 SHRT_MIN
 Minimal value which can be stored in a short int variable.
 UCHAR_MAX
 Maximal value which can be stored in an unsigned char variable.
 UINT_MAX
 Maximal value which can be stored in an unsigned int variable.
 ULONG_MAX
 Maximal value which can be stored in an unsigned long int variable.
 USHRT_MAX
 Maximal value which can be stored in an unsigned short variable.
 */


//http://tigcc.ticalc.org/doc/limits.html    chick it out to learn about limits.h



// A short integer is at least 16 bits wide.
// A int integer is at least as big as short.
// A long integer is at least 32 bits wide and at least as big as int.
// A long long integer is at least 64 bits wide and at least as big as long.

