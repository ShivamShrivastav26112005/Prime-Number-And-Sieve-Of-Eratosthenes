// #include <iostream>
// using namespace std;

// int binary_to_decimal(string &binary)
// {
//     int n = binary.size();
//     int result = 0;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         char ch = binary[i];
//         // change character into number to multiply in power of 2
//         // 2 ki power se multiply karne ke liye character se number me convert kar diye
        
//         int num = ch - '0';

//         // 1 ka ascii 0 ke ascii se minus karne per 1 aata h and 0 ka 0 aata h
//         result = result + num * (1 << (n - i - 1));
//     }
//     return result;
// }

// string decimal_to_bianry(int num)
// {
//     string result = "";
//     while (num > 0)
//     {
//         if (num % 2 == 0) // even
//         {
//             result = '0' + result;
//         }
//         else // odd
//         {
//             result = '1' + result;
//         }
//         num = num / 2;
//     }
//     return result;
// }
// int main()
// {

//     // string str = "001101"; // 13 right
//     string str = "001101"; // 11 right
//     cout << binary_to_decimal(str) << endl;
//     cout << decimal_to_bianry(19) << endl;

// }




// Ques-> Find the number of set bits for any integer n.

// set bits-> vo bit position jaha per 1 ho 
// Q-> binary representation me set bits kitne h 
// Q-> hme decimal no. given hota h , hme uske binary representation 
// me kitne total set bits (1) given h find karna h 
// set bits (1) find karna h binary form or no. me se 

// (1) -> set bits in binary representation 
// (0) -> off bits or unset bits in binary form 

// set calculate karne ke liye c++ build-in function 
//       __builtin_popcount(n);    (_)-> underscore 

// ex-> 13-> 8 bit binary form -> 00001101 -> set bit = 3 becoz 3 one's present h
// ex-> 19-> 8-bit no -> 00010011 -> set bits = 3 



// #include<iostream>
// using namespace std;

// int count_set_bits(int n)
//     {
//         return __builtin_popcount(n);
//     }

// int count_set_bits2(int n)
// {
//     int count=0;
//     while(n>0)
//     {
//         count++;
//         n=(n&(n-1)); // n (bitwise and(&)) n-1 
//     }
//     return count;

// }

// int main()
// {

//     // cout<<count_set_bits(13)<<endl; // 3
//     // cout<<count_set_bits(19)<<endl; // 3
//     // cout<<count_set_bits(8)<<endl;  // 1 becoz power of 2 hai to 1 hoga ans.
//     cout<<count_set_bits(64)<<endl; // 1 beocz power of 2 hai to 1 
//     cout<<count_set_bits2(64)<<endl;

//     cout<<count_set_bits(19)<<endl;
//     cout<<count_set_bits(19)<<endl;

//     cout<<count_set_bits(13)<<endl;
//     cout<<count_set_bits(13)<<endl;

// }





#include <iostream>
using namespace std;

int binary_to_decimal(string &binary)
{
    int n = binary.size();
    int result = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = binary[i];
        // change character into number to multiply in power of 2
        // 2 ki power se multiply karne ke liye character se number me convert kar diye
        int num = ch - '0';
        // 1 ka ascii 0 ke ascii se minus karne per 1 aata h and 0 ka 0 aata h
        result = result + num * (1 << (n - i - 1));
    }
    return result;
}
int main()
{

    // string str = "001101"; // 13 right
    string str = "001011"; // 11 right
    cout << binary_to_decimal(str) << endl;

}