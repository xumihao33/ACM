// 斐波那契数列
// class Solution 
// {
// public:
//     int Fibonacci(int n) 
//     {
//         int a=0,b=1;
//         while(n--)
//         {
//             int c=a+b;
//             a=b;
//             b=c;
//         }
//         return a;
//     }
// };
//替换空格
// class Solution {
// public:
//     string replaceSpaces(string &str) 
//     { 
//         string res;
//         for(char &c : str)
//         {
//             if(c==' ')
//                 res += "%20";
//             else
//                 res += c;
//         }
//         return res;
//     }
// };
// 求1+2+…+n
class Solution {
public:
    int getSum(int n) 
    {
    int sum = 0;
    for (int i = 1; i <= n; i++) 
        { 
            sum += i;
        }
    return sum;
    }
};