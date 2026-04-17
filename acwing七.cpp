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
// class Solution {
// public:
//     int getSum(int n) 
//     {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) 
//         { 
//             sum += i;
//         }
//     return sum;
//     }
// };
// 在0(1)时间删除链表结点
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     void deleteNode(ListNode* node) 
//     {
//         ListNode* temp = node->next;
//         node->val = temp->val;
//         node->next = temp->next;
//         delete temp;
//     }
// };
// 合并两个排序的链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode* merge(ListNode* l1, ListNode* l2) 
//     {
//         ListNode newhead(0);
//         ListNode* new_head=&newhead;
//         while(l1&&l2)
//         {
//             if(l1->val<l2->val)
//             {
//                 new_head->next=l1;
//                 l1=l1->next;
//             }
//             else
//             {
//                 new_head->next=l2;
//                 l2=l2->next;
//             }
//             new_head=new_head->next;
//         }
//         new_head->next=l1?l1:l2;
//         return newhead.next;
//     }
// };
// 左旋转字符串
// class Solution {
// public:
//     string leftRotateString(string str, int n) {
//         string s1(str.begin() + n, str.end());
//         string s2 (str.begin(), str.begin() + n);
//         return s1 + s2;
//     }
// };
// 把字符串转换成整数
// class Solution {
// public:
//     int strToInt(string s) {
//         s += '\0';
//         int i = 0;
//         while(s[i] == ' ') ++i;
//         long ret = 0;
//         bool isPos = false;
//         if(s[i] == '-' || s[i] == '+'){
//             if(s[i] == '-') isPos = true;
//             ++i;
//         } 
//         while(s[i] >= '0' && s[i] <= '9'){
//             ret = ret * 10 + s[i] - '0';
//             ++i;
//             if(!isPos && ret >= INT32_MAX) return INT32_MAX;
//             if(isPos && ret - 1 >= INT32_MAX) return INT32_MIN; 
//         }
//         return isPos ? -ret : ret;
//     }
// };
