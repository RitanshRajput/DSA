
//                            //🔘🔘 STRINGS 🔘🔘 //


//                  //❓Question : 344 Reverse string

// Write a function that reverses a string. 
// The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.


// Example 1:
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Example 2:
// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 
// Constraints:
// 1 <= s.length <= 105
// s[i] is a printable ascii character.

// void reverseString(vector<char>& s) 
//     {   //🔸 approach 1 : using STL
//         // reverse(s.begin(), s.end()) ;

//         //🔸approach 2: by swapping
//         // int st = 0 ;
//         // int ed = s.size()-1;
//         // while( st<=ed ){
//         //     swap(s[st++], s[ed--]) ;
//         // }

//     }
//🔸time complexity: O(n)            //reverse stl   / swapping
//🔸space complexity: O(1)           //reverse stl   / swapping



//                   // ❓ Question : Palindrome String

// Given a string S, check if it is palindrome or not.

// Example 1:
// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome

// Example 2:
// Input: S = "abc" 
// Output: 0
// Explanation: S is not a palindrome
 
// Constraints:
// 1 <= Length of S<= 105

//🔴approach : 1
// int isPalindrome(string S)
// 	{
// 	    int start =  0;
// 	    int end = S.size() - 1;
	    
// 	    while( start <= end) {
// 	        if(S[start] != S[end]) {
// 	            return 0;
// 	        }
// 	        start++ ;
// 	        end-- ;
// 	    }
// 	    return 1;
// 	}
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                   //❓Question : Duplicates in a string

// find all the duplicates in a string

//example 1:
// S = "abcdeafgc"
// input:  2

//example 2:
// S = "abcdefg"
// input:  0

//🔸approach : brute force
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void duplicates(string& s) {
//     int len = s.size() ;
//     sort(s.begin(), s.end()) ;

//     for(int i=0; i<len; i++) {

//         int count = 1 ;

//         while(i < len-1 && s[i] == s[i+1]) {
//             count++ ;
//             i++ ;
//         }

//         if(count > 1) {
//             cout<< s[i] << " count = "<< count <<endl;
//         }
//     }

// }
//🔸time complexity: O(N Log(N))
//🔸space complexity: O(1)

//🔸approach : optimised way using unordered_map
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// void duplicates(string& S) {
//     unordered_map<char ,int> mp ;

//     for(int i=0; i<S.size(); i++) {
//         mp[S[i]]++ ;
//     }

//     for(auto i:mp) {
//         if(i.second > 1){
//             cout<< i.first << " == "<< i.second <<endl ;
//         }
//     }
// }

// int main() {
    
//     string s = "meranamhai gulla" ;
//     duplicates(s) ;

//     return  0;
// }
//🔸time complexity = O(n) 
//🔸space complexity = O(n)        // no. of character



//                //❓Question : WHy is String are immutable in JAVA

// String is immutable in Java because this offers several benefits: 
// String pool is possible because String is immutable in Java. 
// It increases security because any hacker can't change its value and
//  it's used for storing sensitive information such as a database username or password.

//🔸what is string pool ❓ 

// String pool is nothing but a storage area in Java heap where string literals stores. 
// It is also known as String Intern Pool or String Constant Pool.
//  It is just like object allocation. By default, 
//  it is empty and privately maintained by the Java String class. 
//  Whenever we create a string the string object occupies some space in the heap memory.
//   Creating a number of strings may increase the cost and memory too which may reduce the performance also




//                   //❓Question : Check if one string is rotation of another or not

// You are given two Strings 'P'and 'Q'of equal length. Your task is to return 1 if String
//  'P' can be converted into String 'Q' by cyclically rotating it to the right any number of
// times ( Possibly Zero ). else return 0.

//  A cyclic rotation to the right on String 'A' consists of taking String 'A' and moving the
//  rightmost character to the leftmost position. For example, if 'A' = "pqrst", then it will
//  be "tpqrs" after one cyclic rotation on 'A'.

// For Example:
//    Consider the two strings 'P' - "abfyg" and 'Q' = "gabfy"
//    If we cyclically rotate String 'P' to the right once. The resulting
//    string P becomes "gabfy" which is equal to String 'Q'.
//    Therefore it is possible to convert String 'P' to String 'Q'.


// Sample Input 1:
// abac
// baca
// Sample Output 1:
// 1
// Explanation For Sample Input 1:
// Let's try rotating the String 'P' to the right and try all the possible rotations:
// 1) If we rotate "abac" to the right, the resulting string becomes "caba".
// 2) If we rotate "caba" to the right, the resulting string becomes "acab".
// 3) If we rotate "acab" to the right, the resulting string becomes "baca" 
//    which is equal to String 'Q'.
// Therefore it is possible to convert String 'P' to String 'Q'. Hence, we will return 1 in this case.

// Sample Input 2:
// aabca
// bacaa
// Sample Output 2:
// 0

// Constraints:
// 1 <= |P| , |Q| <= 10^5
// |P| = |Q|
// String 'P' and 'Q' have the same length and contain only lowercase English letters.

// Time Limit: 1 sec
// Follow Up:
// Can you solve this in O(N) time?

//🔴approach : Brute force appraoch  // TLE

// int isCyclicRotation(string &p, string &q) 
// {
//     int psize = p.size() ;
//     int qsize = q.size() ;

//     for(int i=0; i<psize; i++) {
//         int temp = p[psize-1] ;

//         for(int j=psize-1; j>=1; j--) {
//             p[j] = p[j-1] ;
//         }

//         p[0] = temp ;

//         int k = 0 ;
//         int l = 0 ;
//         int count = 0 ;
//         while( k < psize && l < qsize){
//             if(p[k] == q[l]) {
//                 count++ ;
//                 k++ ;
//                 l++ ;
//             }
//             else{
//                 break ;
//             }

//             if(count == qsize-1) {
//                 return 1;
//             }
//         }
       
//     }

//     return 0;
// }
//🔸time complexity : O(N^3)       //  O(N*N*2N)
//🔸space complexity :  O(1) 

//🔴approach : Optimised approach using vector
// int isCyclicRotation(string &p, string &q) 
// {
//     vector<char>a;    
//     vector<char>b;    
    
//     for(int i=0;i<p.size();i++){   
//         a.push_back(p[i]);       
//         b.push_back(q[i]);    
//     }   
    
//      if(a==b) return 1;    
     
//      for(int i=0;i<a.size();i++){
//         b.push_back(b[0]);        
//         b.erase(b.begin());        
        
//         if(a==b)  return 1;    
//     }   
    
//     return 0; 
// }
//🔸time complexity : O(N)              // O(N+N)
//🔸space complexity :  O(N)            // O(N+N) 



//                 //❓Question : Check if a string is a valid shuffle of two distinct strings

// Given two strings str1 and str2, and a third-string shuffle, 
// determine if shuffle is a valid shuffle of str1 and str2, 
// where a valid shuffle contains all characters from str1 and str2 occurring the same number of times,
//  regardless of order. Print “YES” if valid, and “NO” otherwise.

// Examples: 

// Input: str1 = BA, str2 = XY, shuffle = XYAB 
// Output: YES

// Input: str1 = BA, str2 = XY, shuffle = XUMB 
// Output: NO

// Input: str1 = ABC, str2 = ZYS, shuffle = YBAZSC 
// Output:YES

//🔴approach : Brute force approach 
// #include<iostream>
// using namespace std;

// string validshuffle(string& a, string& b, string& shuffle) {
//     int asize = a.size() ;
//     int bsize = b.size() ;
//     int shsize = shuffle.size() ;

//     if( (asize + bsize) != shsize) {
//         return "NO" ;
//     }

//     for(int i=0; i<asize; i++) {
//         int count = 0 ;
//         for(int j=0; j<shsize; j++) {
//             if(a[i] == shuffle[j]) {
//                 count++ ;
//                 break ;
//             }
//         }
//         if(count != 1) {
//             return "NO" ;
//         }
//     }

//     for(int i=0; i<bsize; i++) {
//         int count = 0 ;
//         for(int j=0; j<shsize; j++) {
//             if(b[i] == shuffle[j]) {
//                 count++ ;
//                 break ;
//             }
//         }
//         if(count != 1) {
//             return "NO" ;
//         }
//     }

//     return "YES" ;
// }
//🔸time complexity : O(N^2)              //O(N^2 + N^2)
//🔸space complexity: O(1)

// int main() {
//     string a = "BA" ;
//     string b = "XY" ;
//     string shuffle = "XYAB" ;

//     bool result = validshuffle(a, b, shuffle) ;
//     cout<<" answer : "<<result <<endl ;

//     return 0 ;
// }



//                     //❓Question : 38. Count and Say

// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), 
// which is then converted into a different digit string.
// To determine how you "say" a digit string, split it into the minimal number of substrings such that each substring 
// contains exactly one unique digit. Then for each substring, say the number of digits, then say the digit.
// Finally, concatenate every said digit.

// For example, the saying and conversion for digit string "3322251":

//              "3322251"
//    tw0 3's, three 2's, One 5, and one 1
//          2 3 + 3 2 + 1 5 + 1 1
//              "23321511"

// Given a positive integer n, return the nth term of the count-and-say sequence.

// Example 1:

// Input: n = 1
// Output: "1"
// Explanation: This is the base case.

// Example 2:
// Input: n = 4
// Output: "1211"
// Explanation:
// countAndSay(1) = "1"
// countAndSay(2) = say "1" = one 1 = "11"
// countAndSay(3) = say "11" = two 1's = "21"
// countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
 
// Constraints:
// 1 <= n <= 30

//🔴approch : 
// 1  = 1
// 2  = 11
// 3  = 21
// 4  = 1211
// 5  = 111221
// 6  = 312211
// 7  = 13112221
// ...

//  string countAndSay(int n) {
//         if( n == 1) return "1" ;
//         if( n == 2) return "11" ;

//         string s = "11" ;

//         for(int i=3; i<=n; i++) {
//             string t = "" ;
//             s = s + "&" ;
//             int count = 1;

//             for(int j=1; j<s.length(); j++) {
//                 if( s[j] != s[j-1] ){
//                     t = t + to_string(count) ;
//                     t = t + s[j-1] ;
//                     count = 1;
//                 }
//                 else{
//                     count++ ;
//                 }
//             }
//             s = t ;
//         }
//         return s ;
//     }
  
//🔸time complexity :  O(N^2)
//🔸space complexity : O(N)



//                    //❓Question : Longest Palindrome in a string

// Given a string S, find the longest palindromic substring in S. 
// Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
// Palindrome string: A string that reads the same backward. 
// More formally, S is a palindrome if reverse(S) = S. In case of conflict, 
// return the substring which occurs first ( with the least starting index).

// Example 1:
// Input:
// S = "aaaabbaa"
// Output: aabbaa
// Explanation: The longest Palindromic
// substring is "aabbaa".

// Example 2:
// Input: 
// S = "abc"
// Output: a
// Explanation: "a", "b" and "c" are the 
// longest palindromes with same length.
// The result is the one with the least
// starting index.

// Constraints:
// 1 ≤ |S| ≤ 103

// //🔴approach : 
// #include<iostream>
// using namespace std;
//    string longestPalin (string S) {
        
//         string ans="";
//         int n=S.size();
        
//         int maxl=0;
//         int l=0;
//         int r=0;

//         for(int i=0; i<n; i++){
//             //if longest substring palindrome is of  odd length
//             int left=i;
//             int right=i;
//             while(left>=0&&right<=(n-1)&&S[left]==S[right]){
//                   left--;
//                   right++; 
//             }
//             if(right-left+1>maxl){
//                 maxl=right-left+1;
//                 l++;
//                 r--;

//             }
            
//             //if longest substring palindrome is of  even lemgth  
//             left=i;
//             right=i+1;
//             while(left>=0&&right<=n-1&&S[left]==S[right]){
//                 left--;
//                 right++;
//             }
//             if(right-left+1>2&&right-left+1>maxl){
//                 maxl=right-left+1;
//                 l++;
//                 r--;
//             }
//         }
        
//         for(int i=l; i<=r; i++){
//             ans=ans+S[i];
//         }
//         return ans;
//     }
    
//🔸time complexity :  O(N*2N)
//🔸space complexity : O(N)



//                 //❓Question : Longest Repeating subsequence

// Given string str, find the length of the longest repeating subsequence such that it can be 
// found twice in the given string.

// The two identified subsequences A and B can use the same ith character from string str 
// if and only if that ith character has different indices in A and B. 
// For example, A = "xax" and B = "xax" then the index of first "x" must be different in 
// the original string for A and B.

// Example 1:
// Input:
// str = "axxzxy"
// Output: 2
// Explanation:
// The given array with indexes looks like
// a x x z x y 
// 0 1 2 3 4 5

// The longest subsequence is "xx". 
// It appears twice as explained below.

// subsequence A
// x x
// 0 1  <-- index of subsequence A
// ------
// 1 2  <-- index of str 


// subsequence B
// x x
// 0 1  <-- index of subsequence B
// ------
// 2 4  <-- index of str 

// We are able to use character 'x' 
// (at index 2 in str) in both subsequences
// as it appears on index 1 in subsequence A 
// and index 0 in subsequence B.


// Example 2:

// Input:
// str = "axxxy"
// Output: 2
// Explanation:
// The given array with indexes looks like
// a x x x y 
// 0 1 2 3 4

// The longest subsequence is "xx". 
// It appears twice as explained below.

// subsequence A
// x x
// 0 1  <-- index of subsequence A
// ------
// 1 2  <-- index of str 


// subsequence B
// x x
// 0 1  <-- index of subsequence B
// ------
// 2 3  <-- index of str 

// We are able to use character 'x' 
// (at index 2 in str) in both subsequences
// as it appears on index 1 in subsequence A 
// and index 0 in subsequence B.

// Expected Time Complexity: O(n2)
// Expected Space Complexity: O(n2)


// Constraints:
// 1 <= |str| <= 103

//🔴approach :
// int LongestRepeatingSubsequence(string str){
		    
// 		    int n = str.length() ;
// 		    int mat[n+1][n+1] ;
		    
// 		    for(int i=0; i<=n; i++) {
// 		        for(int j=0; j<=n; j++) {
// 		            mat[i][j] = 0 ;
// 		        }
// 		    }
		    
// 	        for(int i=1; i<=n; i++) {
// 	            for(int j=1; j<=n; j++) {
	                
// 	                if(str[i-1] == str[j-1] && i != j) {
// 	                    mat[i][j] = 1 + mat[i-1][j-1] ;
// 	                }
// 	                else{
// 	                    mat[i][j] = max(mat[i][j-1], mat[i-1][j]) ;
// 	                }
// 	            }
// 	        }	    
	        
// 	        return mat[n][n] ;
// 	}
// 🔸 Time Complexity: O(n^2 )
// 🔸 Space Complexity: O(n^2)



//           //❓Question: Print all subsequences of a string

// Given a string, we have to find out all its subsequences of it.
// A String is a subsequence of a given String, that is generated by deleting some character of
// a given string without changing its order.

// Examples: 
// Input : abc
// Output : a, b, c, ab, bc, ac, abc

// Input : aaa
// Output : a, a, a, aa, aa, aa, aaa


//🔴 approch : using Recursion
// void solve(string str, string output, int index, vector<string>& ans) {
	
//       //base case
//       if( index >= str.length()){
//          if( output.length() > 0){          // if condition if dont want to return an empty string as an answers
//            ans.push_back(output) ;
//          }
//         return ;
//       }

//       //exclude
//       solve(str, output, index+1, ans) ;

//       //include
//       char element = str[index] ;
//       output.push_back(element) ;
//       solve(str, output, index+1, ans) ;
// }

// vector<string> subsequences(string str){
	
// 	vector<string> ans ;
// 	string output = "" ;
// 	int index = 0 ;
// 	solve(str, output, index, ans) ;
// 	return ans ;
// }
//🔸time complexity :
//🔸space complexity :



//                       //❓Question: Permutation of Given String

// Given a string S. The task is to print all unique permutations of the given string 
// in lexicographically sorted order.

// Example 1:
// Input: ABC
// Output:
// ABC ACB BAC BCA CAB CBA
// Explanation:
// Given string ABC has permutations in 6 
// forms as ABC, ACB, BAC, BCA, CAB and CBA .

// Example 2:
// Input: ABSG
// Output:
// ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
// BASG BGAS BGSA BSAG BSGA GABS GASB 
// GBAS GBSA GSAB GSBA SABG SAGB SBAG 
// SBGA SGAB SGBA
// Explanation:
// Given string ABSG has 24 permutations.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function find_permutaion() which takes the string S as input parameter and returns a vector of string in lexicographical order.

// Expected Time Complexity: O(n! * n)
// Expected Space Complexity: O(n! * n)

// Constraints:
// 1 <= length of string <= 5

//🔴approch : Recursion + backtrack
// void solve(int index, string S, set<string>&ans) {
//         if(index == S.size()) {
//             ans.insert(S);
//             return;
//         }
//         for(int i=index; i<S.size();i++) {
//             swap(S[index],S[i]);
//             solve(index+1,S,ans);
//             //backtrack
//             swap(S[index],S[i]);
//         }
        
//     }

	
// 	vector<string>find_permutation(string S){
		  		 
//         set<string>ans;
//         solve(0,S,ans);
//         vector<string>result(ans.begin(),ans.end());
//         return result;
// 	}
//🔸time complexity:  O(N! * n)
//🔸space compplexity: O(N! * N!)




//                 //❓Question : Split the binary string into substrings with equal number of 0s and 1s

// Given a binary string str of length N, the task is to find the maximum count of consecutive 
// substrings str can be divided into such that all the substrings are balanced 
// i.e. they have equal number of 0s and 1s. If it is not possible to split str satisfying 
// the conditions then print -1.

// Example: 
// Input: str = “0100110101” 
// Output: 4
// The required substrings are “01”, “0011”, “01” and “01”.

// Input: str = “0111100010” 
// Output: 3 

// Input: str = “0000000000” 
// Output: -1


//🔴approach: 
// #include<iostream>
// using namespace std;
// int maxSubStr(string str){
     
//     int count0=0;
//     int count1=0;
//     int ans=0;
       
//     for(int i=0;i<str.length();i++){
           
//         if(str[i]=='0'){
//             count0++;
//         }
//         //   cout<< "count0 = "<< count0 << endl ;
           
//         if(str[i]=='1'){
//             count1++;
//         }
//         //   cout<< "count1 = "<< count1 << endl ;
           
//         if(count0==count1){
//             ans++;
//         }
//         //   cout<< "ans = "<< ans << endl ;
//     }
       
//        if(ans==0 || count1!=count0){
//            return -1;
//        }
       
//        return ans;
// }
//🔸time complexity : O(n)
//🔸space complexity : O(1)



//                      //❓Question: Word Wrap

// Given an array nums[] of size n, where nums[i] denotes the number of characters in one word. 
// Let K be the limit on the number of characters that can be put in one line (line width).
// Put line breaks in the given sequence such that the lines are printed neatly.
// Assume that the length of each word is smaller than the line width. 
// When line breaks are inserted there is a possibility that extra spaces are present in each line. 
// The extra spaces include spaces put at the end of every line except the last one. 

// You have to minimize the following total cost where total cost = Sum of cost of all lines, 
// where cost of line is = (Number of extra spaces in the line)2.

// Example 1:
// Input: nums = {3,2,2,5}, k = 6
// Output: 10
// Explanation: Given a line can have 6
// characters,
// Line number 1: From word no. 1 to 1
// Line number 2: From word no. 2 to 3
// Line number 3: From word no. 4 to 4
// So total cost = (6-3)2 + (6-2-2-1)2 = 32+12 = 10.
// As in the first line word length = 3 thus
// extra spaces = 6 - 3 = 3 and in the second line
// there are two word of length 2 and there already
// 1 space between two word thus extra spaces
// = 6 - 2 -2 -1 = 1. As mentioned in the problem
// description there will be no extra spaces in
// the last line. Placing first and second word
// in first line and third word on second line
// would take a cost of 02 + 42 = 16 (zero spaces
// on first line and 6-2 = 4 spaces on second),
// which isn't the minimum possible cost.

// Example 2:
// Input: nums = {3,2,2}, k = 4
// Output: 5
// Explanation: Given a line can have 4 
// characters,
// Line number 1: From word no. 1 to 1
// Line number 2: From word no. 2 to 2
// Line number 3: From word no. 3 to 3
// Same explaination as above total cost
// = (4 - 3)2 + (4 - 2)2 = 5.

// Expected Time Complexity: O(n2)
// Expected Space Complexity: O(n)
 
// Constraints:
// 1 ≤ n ≤ 500
// 1 ≤ nums[i] ≤ 1000
// max(nums[i]) ≤ k ≤ 2000

//🔴 approch: Memoization 

//    int solve(vector<int> &nums, int i,int j,int k,vector<vector<int>> &dp){
//        int n=nums.size();
//        //base case
//        if(i>j){
//            return 0;
//        }
//        //memo
//        if(dp[i][j]!=-1){
//            return dp[i][j];
//        }
//        int ans=INT_MAX;
//        int sum=0;
//        for(int idx=i;idx<=j;idx++){
//            sum+=nums[idx];
//            // no need to calc. spaces for last line
//            if(sum<=k && idx==n-1){
//               return dp[i][j]=0;
//            }
//            if(sum<=k){
//                ans=min(ans,(k-sum)*(k-sum)+solve(nums,idx+1,j,k,dp));
//                sum++;//to handle space minus
//            }
           
//        }
//        return dp[i][j]=ans;//memo and return
//    }
//    int solveWordWrap(vector<int> nums, int k) 
//    { 
//        int n=nums.size();
//        vector<vector<int>> dp(n,vector<int>(n,-1));
//        return solve(nums,0,n-1,k,dp);
//    } 
//🔸time complexity : O(N^N)
//🔸space complexity :O(N^N)



//               ❓❓ Question: Edit Distance

// Given two strings s and t. Return the minimum number of operations required to convert s to t.
// The possible operations are permitted:

// Insert a character at any position of the string.
// Remove any character from the string.
// Replace any character from the string with any other character.
 

// Example 1:
// Input: 
// s = "geek", t = "gesek"
// Output: 1
// Explanation: One operation is required 
// inserting 's' between two 'e's of s.

// Example 2:
// Input : 
// s = "gfg", t = "gfg"
// Output: 
// 0
// Explanation: Both strings are same.
 
// Your Task:
// You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation to convert the string s to string t. 

// Expected Time Complexity: O(|s|*|t|)
// Expected Space Complexity: O(|s|*|t|)

// Constraints:
// 1 ≤ Length of both strings ≤ 100
// Both the strings are in lowercase.

// //🔴approch : Recursion
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b, int i, int j) {
//     //base case
//     if( i == a.length()) {
//         return b.length() - j;
//     }

//     if( j == b.length()) {
//         return a.length() - i;
//     }

//     int ans = 0;
//     if(a[i] == b[j]) {
//         return solve(a, b, i+1, j+1) ;
//     }
//     else{
//         //insert 
//         int insertAns = 1 + solve(a, b, i, j+1);

//         //delete
//         int deleteAns = 1 + solve(a, b, i+1, j) ;

//         //replcae
//         int replaceAns = 1 + solve(a, b, i+1, j+1) ;

//         ans = min(insertAns, min(deleteAns, replaceAns)) ;
//     }

//     return ans ;
// }

//  int minDistance(string word1, string word2) {
//         return solve(word1, word2, 0, 0) ;
// }
// //🔸time complexity: expo
// //🔸space complexity: O(n)         // length of string


// //🔴approch : Recursion + Memoization
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b, int i, int j, vector<vector<int>>& dp) {
//     //base case
//     if( i == a.length()) {
//         return b.length() - j;
//     }

//     if( j == b.length()) {
//         return a.length() - i;
//     }

//     if(dp[i][j] != -1){
//         return dp[i][j] ;
//     }

//     int ans = 0;
//     if(a[i] == b[j]) {
//         return solve(a, b, i+1, j+1, dp) ;
//     }
//     else{
//         //insert 
//         int insertAns = 1 + solve(a, b, i, j+1, dp);

//         //delete
//         int deleteAns = 1 + solve(a, b, i+1, j, dp) ;

//         //replcae
//         int replaceAns = 1 + solve(a, b, i+1, j+1, dp) ;

//         ans = min(insertAns, min(deleteAns, replaceAns)) ;
//     }

//     return dp[i][j] = ans ;
// }

//  int minDistance(string word1, string word2) {

//     vector<vector<int>> dp(word1.length(), vector<int>(word2.length(), -1));
//     return solve(word1, word2, 0, 0, dp) ;
// }
// //🔸time complexity: O(n*m)
// //🔸space complexity: O(n)         // length of minimum string



// //🔴approch : Tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b) {

//     vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1, 0));

//     //base case
//     for(int j=0; j<b.length(); j++){
//         dp[a.length()][j] = b.length() - j ;
//     }

//     for(int i=0; i<a.length(); i++){
//         dp[i][b.length()] = a.length() - i ;
//     }


//     for( int i=a.length()-1; i>=0; i--){
//         for(int j=b.length()-1; j>=0; j--){

//             int ans = 0;

//             if(a[i] == b[j]) {
//                 ans = dp[i+1][j+1];
//             }
//             else{
//                 //insert 
//                 int insertAns = 1 + dp[i][j+1];

//                 //delete
//                 int deleteAns = 1 + dp[i+1][j] ;

//                 //replcae
//                 int replaceAns = 1 + dp[i+1][j+1] ;

//                 ans = min(insertAns, min(deleteAns, replaceAns)) ;
//             }

//             dp[i][j] = ans ;
//         }
//     }

//     return dp[0][0] ;
// }

//  int minDistance(string word1, string word2) {

//     return solve(word1, word2) ;
// }
// //🔸time complexity: O(n*m)
// //🔸space complexity: O(n)         // length of minimum string


//🔴approch : space optimisation
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(string& a, string& b) {

//     vector<int> curr(b.length()+1, 0) ;
//     vector<int> next(b.length()+1, 0) ;

//     //base case
//     for(int j=0; j<b.length(); j++){
//        next[j] = b.length() - j ;
//     }

//     for( int i=a.length()-1; i>=0; i--){
//         for(int j=b.length()-1; j>=0; j--){

//             //important line // got from 2nd base case
//             curr[b.length()] = a.length() - i;

//             int ans = 0;

//             if(a[i] == b[j]) {
//                 ans = next[j+1];
//             }
//             else{
//                 //insert 
//                 int insertAns = 1 + curr[j+1];

//                 //delete
//                 int deleteAns = 1 + next[j] ;

//                 //replcae
//                 int replaceAns = 1 + next[j+1] ;

//                 ans = min(insertAns, min(deleteAns, replaceAns)) ;
//             }
//             curr[j] = ans ;
//         }
//         next = curr ;
//     }

//     return next[0] ;
// }

//  int minDistance(string word1, string word2) {

//     if(word1.length() == 0){
//         return word2.length();
//     }
//     if(word2.length() == 0){
//         return word1.length() ;
//     }

//     return solve(word1, word2) ;
// }
//🔸time complexity: O(n*m)
//🔸space complexity: O(n)         // length of minimum string



//                          //❓Question: 31. Next Permutation

// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer.
// More formally, if all the permutations of the array are sorted in one container according to their lexicographical order,
// then the next permutation of that array is the permutation that follows it in the sorted container.
//  If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.

// The replacement must be in place and use only constant extra memory.

// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]

// Example 2:
// Input: nums = [3,2,1]
// Output: [1,2,3]

// Example 3:
// Input: nums = [1,1,5]
// Output: [1,5,1]

// Constraints:
// 1 <= nums.length <= 100
// 0 <= nums[i] <= 100

//🔸approach :
// #include<iostream>
// #include<vector>
// using namespace std;

//  void nextPermutation(vector<int>& nums) {
//        int i,j,n=nums.size();
//        for(i=n-2;i>=0;i--)
//        {
//            if(nums[i]<nums[i+1])
//                 break;
//        }
//        if(i<0)
//        {
//            reverse(nums.begin(),nums.end());
//        }
//        else
//        {
//             for(j=n-1;j>=i;j--)
//             {
//                 if(nums[j]>nums[i])
//                     break;
//             }
//           swap(nums[i],nums[j]);
//           reverse(nums.begin()+i+1,nums.end());
//       }
// }
// 🔸time complexity: O(N)
// 🔸space complexity: O(1)


//🔴 approach: 2  inbuild stl
//  void nextPermutation(vector<int>& nums) {
//    next_permutation(nums.begin(), nums.end()) ;
//   return nums;
// }

//🔸The next_permutation() function takes O(N) time to find the next permutation
//🔸time complexity : O(N)
//🔸space complexity: O(1)


//🔴 approach: 3  strivers approach
//  void nextPermutation(vector<int>& A) {
//     int n = A.size(); // size of the array.

//     // Step 1: Find the break point:
//     int ind = -1; // break point
//     for (int i = n - 2; i >= 0; i--) {
//         if (A[i] < A[i + 1]) {
//             // index i is the break point
//             ind = i;
//             break;
//         }
//     }

//     // If break point does not exist:
//     if (ind == -1) {
//         // reverse the whole array:
//         reverse(A.begin(), A.end());
//         return A;
//     }

//     // Step 2: Find the next greater element
//     //         and swap it with arr[ind]:

//     for (int i = n - 1; i > ind; i--) {
//         if (A[i] > A[ind]) {
//             swap(A[i], A[ind]);
//             break;
//         }
//     }

//     // Step 3: reverse the right half:
//     reverse(A.begin() + ind + 1, A.end());

//     return A;
// }

// 🔸time complexity : O(3N)
// 🔸space complexity: O(1)




///                //❓Question: Paranthesis Checker

// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

// Example 1:

// Input:
// {([])}
// Output: 
// true
// Explanation: 
// { ( [ ] ) }. Same colored brackets can form 
// balanced pairs, with 0 number of 
// unbalanced bracket.
// Example 2:

// Input: 
// ()
// Output: 
// true
// Explanation: 
// (). Same bracket can form balanced pairs, 
// and here only 1 type of bracket is 
// present and in balanced way.
// Example 3:

// Input: 
// ([]
// Output: 
// false
// Explanation: 
// ([]. Here square bracket is balanced but 
// the small bracket is not balanced and 
// Hence , the output will be unbalanced.
// Your Task:
// This is a function problem. You only need to complete the function ispar() that takes a string as a parameter and returns a boolean value true if brackets are balanced else returns false. The printing is done automatically by the driver code.

// Expected Time Complexity: O(|x|)
// Expected Auixilliary Space: O(|x|)

// Constraints:
// 1 ≤ |x| ≤ 32000

 
//🔸approach : using stack

//  bool ispar(string x)
//     {
//         stack<char> temp;
//         temp.push(x[0]) ;
        
//         int n = x.length() ;
//         int i=1; 
        
//         while(i < n) {
            
//             if(temp.empty()) {
//                 temp.push(x[i]) ;
//                 i++ ;
//             }
//             else{
            
//             if(temp.top() == '[' && x[i] == ']') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else if(temp.top() == '(' && x[i] == ')') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else if(temp.top() == '{' && x[i] == '}') {
//                 temp.pop() ;
//                 i++ ;
//             }
//             else{
//                 temp.push(x[i]) ;
//                 i++ ;
//             }
//             }
//         }
        
//         if(temp.empty()) {
//             return true ;
//         }
//         else{
//             return false ;   
//         }
//     }
//🔸time complexity: O(N)           // N = length of string
//🔸space compplexity: O(N)




//                        //❓Question: Word Break

// Given a string A and a dictionary of n words B, find out if A can be 
// segmented into a space-separated sequence of dictionary words.

// Note: From the dictionary B each word can be taken any number of times and in any order.
// Example 1:

// Input:
// n = 12
// B = { "i", "like", "sam",
// "sung", "samsung", "mobile",
// "ice","cream", "icecream",
// "man", "go", "mango" }
// A = "ilike"
// Output:
// 1
// Explanation:
// The string can be segmented as "i like".

// Example 2:

// Input:
// n = 12
// B = { "i", "like", "sam",
// "sung", "samsung", "mobile",
// "ice","cream", "icecream", 
// "man", "go", "mango" }
// A = "ilikesamsung"
// Output:
// 1
// Explanation:
// The string can be segmented as 
// "i like samsung" or "i like sam sung".
 

// Your Task:
// Complete wordBreak() function which takes a string and list of strings as 
// a parameter and returns 1 if it is possible to break words, else return 0. 
// You don't need to read any input or print any output, it is done by driver code.


// Expected time complexity: O(s2)

// Expected auxiliary space: O(s) , where s = length of string A

 

// Constraints:
// 1 ≤ N ≤ 12
// 1 ≤ s ≤ 1100 , where s = length of string A

//🔴approach:
// bool solve(unordered_map<string,bool>mp, string word)
//         {
//             int size=word.size();
//             if(size==0){
//                 return true;
//             }
//             string temp="";
//             for(int i=0;i<word.length();i++){
//                 temp+=word[i];
//                 if(mp.find(temp)!=mp.end() && solve(mp,word.substr(i+1)))
//                 return true;
//             }
//             return false;
//         }

//     int wordBreak(string A, vector<string> &B) {
       
//         unordered_map <string, bool > mp ;
//         for(auto it : B)
//         mp[it]=true;
        
//         return solve(mp,A)==true?1:0;
//     }

//🔸time complexity: O(N^2)
//🔸space complexity: O(B.size() + A.length())




//                   ///❓Question: Search Pattern (Rabin-Karp Algorithm)

// Given two strings, one is a text string and other is a pattern string. 
// The task is to print the indexes of all the occurences of pattern string in the text string.
//  For printing, Starting Index of a string should be taken as 1.

// Example 1:
// Input:
// S = "batmanandrobinarebat", pat = "bat"
// Output: 1 18
// Explanation: The string "bat" occurs twice
// in S, one starts are index 1 and the other
// at index 18. 
// â€‹Example 2:

// Input: 
// S = "abesdu", pat = "edu"
// Output: -1
// Explanation: There's not substring "edu"
// present in S.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function search() which takes the string S and the string pat as inputs and returns an array denoting the start indices (1-based) of substring pat in the string S. 

// Expected Time Complexity: O(|S|*|pat|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1<=|S|<=105
// 1<=|pat|<|S|

//🔸approach : 
//  vector <int> search(string pat, string txt)
//         {
//            vector<int> result;
        
//         int n = txt.size()-pat.size();
//         for(int i=0; i<=n; i++)
//         {
//             string temp = txt.substr(i, pat.size());
//             if(pat==temp)
//                 result.push_back(i+1);
//         }
//         if(result.size()==0)
//             result.push_back(-1);
//         return result;

//         }
//🔴time  complexity: O(n)         // n = txt.size()-pat.size();
//🔴space complexity: O(n)         // number of text found in pat




//                   //❓question: Longest Prefix Suffix (KMP algo)


// Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

// NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

// Example 1:

// Input: s = "abab"
// Output: 2
// Explanation: "ab" is the longest proper 
// prefix and suffix. 
// Example 2:

// Input: s = "aaaa"
// Output: 3
// Explanation: "aaa" is the longest proper 
// prefix and suffix. 
// Your task:
// You do not need to read any input or print anything. The task is to complete the function lps(), which takes a string as input and returns an integer.

// Expected Time Complexity: O(|s|)
// Expected Auxiliary Space: O(|s|)

// Constraints:
// 1 ≤ |s| ≤ 105
// s contains lower case English alphabets

///🔴approach :  KMP algo

// int lps(string pattern) {
 
//     int n = pattern.size();
//     vector<int> lps(n, 0);
//     int length = 0;  // Length of the previous longest prefix suffix
 
//     int i = 1;
//     while (i < n) {
//         if (pattern[i] == pattern[length]) {
//             lps[i] = length + 1;
//             length++;
//             i++;
//         } else {
//             if (length != 0) {
//                 length = lps[length - 1];
//             } else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
 
//     return lps[n - 1];  // Return the length of the lps array for the last position
// 	}
//🔸time complexity: O(N)
//🔸space complexity: O(n)


//                 //❓Question: Convert a sentence into its equivalent mobile numeric keypad sequence


// Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence. 
 

// Mobile-keypad

//      1        2       3
//     [ ]     [abc]   [def]
//
//      4        5       6
//     [ghi]   [jkl]   [mno]
//
//      7        8       9
//     [pqrs]  [tuv]   [wxyz]
//               0
//              [ ] 
//

// Examples : 

// Input: GEEKSFORGEEKS
// Output: 4333355777733366677743333557777
// Explanation: For obtaining a number, we need to press a number corresponding to that character for a number of times equal to the position of the character. For example, for character E, press number 3 two times and accordingly.


// Input : HELLO WORLD
// Output : 4433555555666096667775553

//🔴 appraoch:
// #include <bits/stdc++.h>
// using namespace std;
 
// // Function which computes the sequence
// string printSequence(string arr[], string input)
// {
//     string output = "";
 
//     // length of input string
//     int n = input.length();
//     for (int i = 0; i < n; i++) {
//         // Checking for space
//         if (input[i] == ' ')
//             output = output + "0";
 
//         else {
//             // Calculating index for each
//             // character
//             int position = input[i] - 'A';
//             output = output + arr[position];
//         }
//     }
 
//     // Output sequence
//     return output;
// }
 
// // Driver Code
// int main()
// {
//     // storing the sequence in array
//     string str[]
//         = { "2",   "22",  "222", "3",   "33",   "333", "4",
//             "44",  "444", "5",   "55",  "555",  "6",   "66",
//             "666", "7",   "77",  "777", "7777", "8",   "88",
//             "888", "9",   "99",  "999", "9999" };
 
//     string input = "GEEKSFORGEEKS";
//     cout << printSequence(str, input);
//     return 0;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(N)


//                   //❓Question: Count the reversals

// Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
// A reversal means changing '{' to '}' or vice-versa.

// Example 1:

// Input:
// S = "}{{}}{{{"
// Output: 3
// Explanation: One way to balance is:
// "{{{}}{}}". There is no balanced sequence
// that can be formed in lesser reversals.
// Example 2:

// Input: 
// S = "{{}{{{}{{}}{{"
// Output: -1
// Explanation: There's no way we can balance
// this sequence of braces.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countRev() which takes the string S as the input parameter and returns the minimum number of reversals required to balance the bracket sequence. If balancing is not possible, return -1. 

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ |S| ≤ 105

//🔴approach: 
// int countRev (string s)
// {
//     int n = s.length() ;
//     int open = 0;
//     int count = 0;
    
//     if(n%2 != 0){
//         return -1;
//     }
    
//     for(int i=0; i<n; i++){
        
//         if(s[i] == '}') {
            
//           if(open > 0){
//               open-- ;
//           }else{
//              open++ ;
//              count++ ;
//            }
//         }
        
//         if(s[i] == '{'){
//             open++; 
//         }
//     }
    
//     return count+open/2;

// }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                       //❓Question Count Palindromic Subsequence

// Given a string str of length N, you have to find number of palindromic subsequence (need not necessarily be distinct) present in the string str.
// Note: You have to return the answer module 109+7;
 
// Example 1:
// Input: 
// Str = "abcd"
// Output: 
// 4
// Explanation:
// palindromic subsequence are : "a" ,"b", "c" ,"d"
 
// Example 2:
// Input: 
// Str = "aab"
// Output: 
// 4
// Explanation:
// palindromic subsequence are :"a", "a", "b", "aa"
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countPs() which takes a string str as input parameter and returns the number of palindromic subsequence.

// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(N*N)

// Constraints:
// 1<=length of string str <=1000

//🔴approach : DP

//    const int MOD = 1000000007;

// long long int solve(string& str, int i, int j, vector<vector<long long int>>& dp) {
//     if (i > j) {
//         return 0;
//     }

//     if (i == j) {
//         return 1;
//     }

//     if (dp[i][j] != -1) {
//         return dp[i][j];
//     }

//     if (str[i] == str[j]) {
//         dp[i][j] = (solve(str, i + 1, j, dp) + solve(str, i, j - 1, dp) + 1) % MOD;
//     } else {
//         dp[i][j] = (solve(str, i + 1, j, dp) + solve(str, i, j - 1, dp) - solve(str, i + 1, j - 1, dp) + MOD) % MOD;
//     }

//     return dp[i][j];
// }

// long long int countPS(string str) {
//     int n = str.length();
//     vector<vector<long long int>> dp(n, vector<long long int>(n, -1));

//     return solve(str, 0, n - 1, dp);
// }
//🔸time complexity: O(expo)
//🔸space complexity: O(N*N)


//                     //❓question: Count of number of given string in 2D character array

// Given a 2-Dimensional character array and a string, we need to find the given string in 2-dimensional character array, such that individual characters can be present left to right, right to left, top to down or down to top.

// Examples: 

// Input : a ={
//             {D,D,D,G,D,D},
//             {B,B,D,E,B,S},
//             {B,S,K,E,B,K},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,E},
//             {D,D,D,D,D,G}
//            }
//         str= "GEEKS"
// Output :2

// Input : a = {
//             {B,B,M,B,B,B},
//             {C,B,A,B,B,B},
//             {I,B,G,B,B,B},
//             {G,B,I,B,B,B},
//             {A,B,C,B,B,B},
//             {M,C,I,G,A,M}
//             }
//         str= "MAGIC"

// Output :4

//🔴approach :
// #include <bits/stdc++.h>
// using namespace std;
 
// #define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))
 
// // utility function to search
// // complete string from any
// // given index of 2d char array
// int internalSearch(string needle, int row, int col, string hay[], int row_max, int col_max, int xx)
// {
//     int found = 0;
 
//     if (row >= 0 && row <= row_max && col >= 0 &&
//         col <= col_max && needle[xx] == hay[row][col])
//     {
//         char match = needle[xx];
//         xx += 1;
 
//         hay[row][col] = 0;
 
//         if (needle[xx] == 0)
//         {
//             found = 1;
//         }
//         else
//         {
//             // through Backtrack searching in every directions
//             found += internalSearch(needle, row, col + 1, hay, row_max, col_max,xx);
//             found += internalSearch(needle, row, col - 1,hay, row_max, col_max,xx);
//             found += internalSearch(needle, row + 1, col,hay, row_max, col_max,xx);
//             found += internalSearch(needle, row - 1, col,hay, row_max, col_max,xx);
//         }
//           //backtracking
//         hay[row][col] = match;
//     }
//     return found;
// }
 
// // Function to search the string in 2d array
// int searchString(string needle, int row, int col, string str[], int row_count, int col_count)
// {
//     int found = 0;
//     int r, c;
 
//     for (r = 0; r < row_count; ++r) {
//         for (c = 0; c < col_count; ++c) {
//             found += internalSearch(needle, r, c, str, row_count - 1, col_count - 1, 0);
//         }
//     }
//     return found;
// }
 
// // Driver code
// int main()
// {
//     string needle = "MAGIC";
//     string input[] = { "BBABBM",
//                        "CBMBBA",
//                        "IBABBG",
//                        "GOZBBI",
//                        "ABBBBC",
//                        "MCIGAM" };
//     string str[ARRAY_SIZE(input)];
//     int i;
//     for (i = 0; i < ARRAY_SIZE(input); ++i)
//     {
//         str[i] = input[i];
//     }
 
//     cout << "count: " << searchString(needle, 0, 0, str,
//                                       ARRAY_SIZE(str),
//                                       str[0].size()) << endl;
//     return 0;
// }
// 🔸Time Complexity: O(n*m)^2, where n is the row size and m is the column size.
// 🔸Auxiliary Space: O(n*m)




//                   //❓Question: Find The string in Grid

// Given a 2D grid of n*m of characters and a word, find all occurrences of given word in grid. 
// A word can be matched in all 8 directions at any point. Word is said to be found in a direction if 
// all characters match in this direction (not in zig-zag form). The 8 directions are,
//  horizontally left, horizontally right, vertically up, vertically down, and 4 diagonal directions.

// Note: The returning list should be lexicographically smallest. If the word can be found in multiple 
// directions starting from the same coordinates, the list should contain the coordinates only once. 

// Example 1:

// Input: 
// grid = {{a,b,c},{d,r,f},{g,h,i}},
// word = "abc"
// Output: 
// {{0,0}}
// Explanation: 
// From (0,0) we can find "abc" in horizontally right direction.
// Example 2:

// Input: 
// grid = {{a,b,a,b},{a,b,e,b},{e,b,e,b}}
// word = "abe"
// Output: 
// {{0,0},{0,2},{1,0}}
// Explanation: 
// From (0,0) we can find "abe" in right-down diagonal. 
// From (0,2) we can find "abe" in left-down diagonal. 
// From (1,0) we can find "abe" in horizontally right direction.
// Your Task:
// You don't need to read or print anything, Your task is to complete the function searchWord() 
// which takes grid and word as input parameters and returns a list containing the positions from where the word
// originates in any direction. If there is no such position then returns an empty list.

// Expected Time Complexity: O(n*m*k) where k is constant
// Expected Space Complexity: O(1)

// Constraints:
// 1 <= n <= m <= 50
// 1 <= |word| <= 15

//🔴Approach :
//     int dx[8] = {0,0,1,-1,1,-1,-1,1};          // direction for row
//     int dy[8] = {1,-1,0,0,1,1,-1,-1};          // direction for col
    
//     bool indirection(vector<vector<char>> &grid,int i,int j,int l,string word){
//         int n = grid.size() , m = grid[0].size(),indx = 0;
//         while(indx < word.length()){
//             if(i >= n || j >= m || i < 0 || j < 0)return false;
//             if(word[indx] != grid[i][j])return false;
//             i += dx[l];
//             j += dy[l];
//             indx++;
//         }
//         return true;
//     }
//     bool check(vector<vector<char>> &grid,int i,int j,string &word){
//         bool ans = false;
        
//         for(int l = 0; l < 8; l++){
//             ans = ans || indirection(grid,i,j,l,word);
//         }
        
//         return ans;
//     }
// 	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
// 	    // Code here
// 	    vector<vector<int>>ans;
// 	    int n = grid.size() , m = grid[0].size();
	    
// 	    for(int i = 0; i < n; i++){
// 	        for(int j = 0; j < m; j++){
// 	            if(grid[i][j] == word[0]){
// 	                if(check(grid,i,j,word)){
// 	                    ans.push_back({i,j});
// 	                }
// 	            }
// 	        }
// 	    }
	    
// 	    return ans;
// 	}
//🔸time complexity: O(N*M)*8*word.length()
//🔸space complexity: O(N*N)



//                 //❓Question: Boyer Moore Algorithm for Pattern Searching

// Pattern searching is an important problem in computer science. When we do search for a string in a notepad/word file, 
// browser, or database, pattern searching algorithms are used to show the search results. 
// A typical problem statement would be- 
// Given a text txt[0..n-1] and a pattern pat[0..m-1] where n is the length of the text and m is 
// the length of the pattern, write a function search(char pat[], char txt[]) that prints all occurrences 
// of pat[] in txt[]. You may assume that n > m. 

// Examples: 

// Input:  txt[] = "THIS IS A TEST TEXT"
//         pat[] = "TEST"
// Output: Pattern found at index 10

// Input:  txt[] =  "AABAACAADAABAABA"
//         pat[] =  "AABA"
// Output: Pattern found at index 0
//         Pattern found at index 9
//         Pattern found at index 12

//🔴approach :

// #include <bits/stdc++.h>
// using namespace std;
// # define NO_OF_CHARS 256
 
// // The preprocessing function for Boyer Moore's bad character heuristic

// void badCharHeuristic( string str, int size, int badchar[NO_OF_CHARS])
// {
//     int i;
 
//     // Initialize all occurrences as -1
//     for (i = 0; i < NO_OF_CHARS; i++)
//         badchar[i] = -1;
 
//     // Fill the actual value of last occurrence of a character
//     for (i = 0; i < size; i++)
//         badchar[(int) str[i]] = i;
// }
 
// /* A pattern searching function that uses Bad Character Heuristic of Boyer Moore Algorithm */
// void search( string txt, string pat)
// {
//     int m = pat.size();
//     int n = txt.size();
 
//     int badchar[NO_OF_CHARS];
 
//     /* Fill the bad character array by calling the preprocessing function badCharHeuristic() for given pattern */
//     badCharHeuristic(pat, m, badchar);
 
//     int s = 0; // s is shift of the pattern with respect to text
//     while(s <= (n - m))
//     {
//         int j = m - 1;
 
//         /* Keep reducing index j of pattern while characters of pattern and text are matching at this shift s */
//         while(j >= 0 && pat[j] == txt[s + j])
//             j--;
 
//         /* If the pattern is present at current shift, then index j will become -1 after the above loop */
//         if (j < 0)
//         {
//             cout << "pattern occurs at shift = " <<  s << endl;
 
//             /* Shift the pattern so that the next
//             character in text aligns with the last
//             occurrence of it in pattern.
//             The condition s+m < n is necessary for
//             the case when pattern occurs at the end
//             of text */
//             s += (s + m < n)? m-badchar[txt[s + m]] : 1;
 
//         }
 
//         else
//             /* Shift the pattern so that the bad character
//             in text aligns with the last occurrence of
//             it in pattern. The max function is used to
//             make sure that we get a positive shift.
//             We may get a negative shift if the last
//             occurrence of bad character in pattern
//             is on the right side of the current
//             character. */
//             s += max(1, j - badchar[txt[s + j]]);
//     }
// }
 
// /* Driver code */
// int main()
// {
//     string txt= "ABAAABCD";
//     string pat = "ABC";
//     search(txt, pat);
//     return 0;
// }
// 🔸Time Complexity : O(n x m)
// 🔸Auxiliary Space: O(1)



//                            //❓Question: Roman Number to Integer

// Given a string in roman no format (s)  your task is to convert it to an integer . 
// Various symbols and their values are given below.
// I 1
// V 5
// X 10
// L 50
// C 100
// D 500
// M 1000

// Example 1:

// Input:
// s = V
// Output: 5
// Example 2:

// Input:
// s = III 
// Output: 3
// Your Task:
// Complete the function romanToDecimal() which takes a string as input parameter and returns the equivalent decimal number. 

// Expected Time Complexity: O(|S|), |S| = length of string S.
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=roman no range<=3999

//🔴approach :
// int romanToDecimal(string &str) {
        
//         unordered_map<char,int> mp;
//         mp['I'] = 1;
//         mp['V'] = 5;
//         mp['X'] = 10;
//         mp['L'] = 50;
//         mp['C'] = 100;
//         mp['D'] = 500;
//         mp['M'] = 1000;
        
//         int ans = 0;
        
//         for(int i=0; i<str.length(); i++){
//             if(mp[str[i]] < mp[str[i+1]]){
//                 ans += mp[str[i+1]]-mp[str[i]];
//                 i++;
//             }
//             else{
//                 ans += mp[str[i]];
//             }
//         }
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                      //❓Question: Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.

//🔴approach :
//  string longestCommonPrefix(vector<string>& v) {
        
//         string ans="";
//         sort(v.begin(),v.end());
//         int n=v.size();
        
//         string first=v[0];
//         string last=v[n-1];
        
//         for(int i=0; i<min(first.size(),last.size()); i++){
//             if(first[i]!=last[i]){
//                 return ans;
//             }
//             ans+=first[i];
//         }
//         return ans;   
//     }
//🔸time complexity: O(n log(n))
//🔸time complexity: O(size of longest string)



//                         //❓Question: Min Number of Flips

// Given a binary string, that is it contains only 0s and 1s. 
// We need to make this string a sequence of alternate characters by flipping some of the bits, 
// our goal is to minimize the number of bits to be flipped.

// Example 1:

// Input:
// S = "001"
// Output: 1
// Explanation: 
// We can flip the 0th bit to 1 to have
// 101.


// Example 2:

// Input:
// S = "0001010111" 
// Output: 2
// Explanation: We can flip the 1st and 8th bit 
// bit to have "0101010101"
// 101.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minFlips() which takes the string S as input and returns the minimum number of flips required.

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1<=|S|<=105

//🔴approach :
// int minFlips (string s)
// {
//     int a=0,b=0,n=s.size();
//         for(int i=0;i<n;i++)
//         {
//             s[i]=s[i]-'0';
//             if((i%2)!=s[i]) a++;
//             if((i+1)%2!=s[i]) b++;
//         }
//         return min(a,b);

// }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                       //❓Question: Second Most Repeated string in a sequence

// Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.
// Note: No two strings are the second most repeated, there will be always a single string.

// Example 1:

// Input:
// N = 6
// arr[] = {aaa, bbb, ccc, bbb, aaa, aaa}
// Output: bbb
// Explanation: "bbb" is the second most 
// occurring string with frequency 2.

// Example 2:

// Input: 
// N = 6
// arr[] = {geek, for, geek, for, geek, aaa}
// Output: for
// Explanation: "for" is the second most
// occurring string with frequency 2.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function secFrequent() which takes the string array arr[] and its size N as inputs and returns the second most frequent string in the array.


// Expected Time Complexity: O(N*max(|Si|).
// Expected Auxiliary Space: O(N*max(|Si|).


// Constraints:
// 1<=N<=103

//🔴approach:
// string secFrequent (string arr[], int n)
//     {
//         //code here.
//         unordered_map<string , int> mp;
//         for( int i = 0 ;i < n ;i++){
//             mp[arr[i]]++;
//         }
        
//         int maxOccr = 0;
//         for( auto it = mp.begin() ; it != mp.end() ; it++){
//             if(it->second > maxOccr){
//                 maxOccr = it->second;
//             }
//         }
        
//         string ans = "";
//         int secFre = INT_MIN;
//         for( auto it : mp){
//             if(it.second < maxOccr && it.second >= secFre){
//                 ans = it.first;
//                 secFre = it.second;
//             }
            
//         }
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexitY: O(1)



//                 //❓ QUestion: Minimum Swaps for bracket Balancing

// You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets. A string is considered balanced if it can be represented in the form S2[S1] where S1 and S2 are balanced strings. We can make an unbalanced string balanced by swapping adjacent characters.
// Calculate the minimum number of swaps necessary to make a string balanced.

// Note - Strings S1 and S2 can be empty.

// Example 1:

// Input  : []][][
// Output : 2
// Explanation :
// First swap: Position 3 and 4
// [][]][
// Second swap: Position 5 and 6
// [][][]

// Example 2:

// Input : [[][]]
// Output : 0 
// Explanation:
// String is already balanced.
 
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minimumNumberOfSwaps() which takes the string S and return minimum number of operations required to balance the bracket sequence.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=|S|<=100000

//🔴approach:
//  int minimumNumberOfSwaps(string S){
//         // code here 
//         int extra = 0;
//         int ans = 0 ;
        
//         for(auto i:S){
//             if( i== '['){
//                 if(extra > 0) {
//                     ans += extra;
//                 }
//                   extra--;
//             }
//             else if( i==']'){
//                 extra++;
//             }
//         }
        
//         return ans;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(1)



//                          //❓Question: Longest common subsquence

// Given two strings, find the length of longest subsequence present in both of them. Both the strings are in uppercase latin alphabets.

// Example 1:

// Input:
// A = 6, B = 6
// str1 = ABCDGH
// str2 = AEDFHR
// Output: 3
// Explanation: LCS for input strings “ABCDGH” and “AEDFHR” is “ADH” of length 3.
// Example 2:

// Input:
// A = 3, B = 2
// str1 = ABC
// str2 = AC
// Output: 2
// Explanation: LCS of "ABC" and "AC" is "AC" of length 2.
// Your Task:
// Complete the function lcs() which takes the length of two strings respectively and two strings as input parameters and returns the length of the longest subsequence present in both of them.

// Expected Time Complexity : O(|str1|*|str2|)
// Expected Auxiliary Space: O(|str1|*|str2|)

// Constraints:
// 1<=size(str1),size(str2)<=103

///🔴approach: 

// int lcs(int n, int m, string s1, string s2)
//     {
//         vector<vector<int>>dp(n+1,vector<int>(m+1,0));

//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<m+1;j++){

//                 if(s1[i-1]==s2[j-1]){

//                     dp[i][j]=1+dp[i-1][j-1];
//                 }
//                 else{
//                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//                 }
//             }
//         }
//         return dp[n][m];
//     }
//🔸time complexity: O(n*m)
//🔸space complexity: O(n*M)



//                         //❓Question: Program to generate all possible IP address from given string

// Given a string containing only digits, restore it by returning all possible valid IP address combinations.
// A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.

// Examples :

// Input: 25525511135
// Output: [“255.255.11.135”, “255.255.111.35”]
// Explanation:
// These are the only valid possible
// IP addresses.

// Input: "25505011535"
// Output: []
// Explanation: 
// We cannot generate a valid IP
// address with this string.
// First, we will place 3 dots in the given string and then try out all the possible combinations for the 3 dots. 
// Corner case for validity:

// For string "25011255255"
// 25.011.255.255 is not valid as 011 is not valid.
// 25.11.255.255 is not valid either as you are not
// allowed to change the string.
// 250.11.255.255 is valid.

//🔴approach :
// #include <bits/stdc++.h>
// using namespace std;
 
// // Function checks whether IP digits are valid or not.
// int is_valid(string ip)
// {
//     // Splitting by "."
//     vector<string> ips;
//     string ex = "";
//     for (int i = 0; i < ip.size(); i++) {
//         if (ip[i] == '.') {
//             ips.push_back(ex);
//             ex = "";
//         }
//         else {
//             ex = ex + ip[i];
//         }
//     }
//     ips.push_back(ex);
 
//     // Checking for the corner cases
//     // cout << ip << endl;
//     for (int i = 0; i < ips.size(); i++) {
//         // cout << ips[i] <<endl;
//         if (ips[i].length() > 3 || stoi(ips[i]) < 0 || stoi(ips[i]) > 255)
//             return 0;
 
//         if (ips[i].length() > 1 && stoi(ips[i]) == 0)
//             return 0;
 
//         if (ips[i].length() > 1 && stoi(ips[i]) != 0 && ips[i][0] == '0')
//             return 0;
//     }
//     return 1;
// }
 
// // Function converts string to IP address
// void convert(string ip)
// {
//     int l = ip.length();
 
//     // Check for string size
//     if (l > 12 || l < 4) {
//         cout << "Not Valid IP Address";
//     }
 
//     string check = ip;
//     vector<string> ans;
 
//     // Generating different combinations.
//     for (int i = 1; i < l - 2; i++) {
//         for (int j = i + 1; j < l - 1; j++) {
//             for (int k = j + 1; k < l; k++) {
//                 check = check.substr(0, k) + "." + check.substr(k);
//                 check = check.substr(0, j) + "." + check.substr(j);
//                 check = check.substr(0, i) + "." + check.substr(i);
 
//           // cout<< check <<endl; 
//           // Check for the validity of combination
//                 if (is_valid(check)) {
//                     ans.push_back(check);
//                     std::cout << check << '\n';
//                 }
//                 check = ip;
//             }
//         }
//     }
// }
 
// // Driver code
// int main()
// {
//     string A = "25525511135";
//     string B = "25505011535";
 
//     convert(A);
//     convert(B);
 
//     return 0;
// }




//                  //❓Question: Generate IP address

// Given a string S containing only digits, Your task is to complete the function genIp() which returns a vector containing all possible combinations of valid IPv4 IP addresses and takes only a string S as its only argument.
// Note: Order doesn't matter. A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.


// For string 11211 the IP address possible are 
// 1.1.2.11
// 1.1.21.1
// 1.12.1.1
// 11.2.1.1

// Example 1:

// Input:
// S = 1111
// Output: 1.1.1.1
// Example 2:

// Input:
// S = 55
// Output: -1

// Your Task:

// Your task is to complete the function genIp() which returns a vector containing all possible combinations of valid IPv4 IP addresses or -1 if no such IP address could be generated through the input string S, the only argument to the function.

// Expected Time Complexity: O(N * N * N)
// Expected Auxiliary Space: O(N * N * N * N)

// Constraints:
// 1<=N<=16
// here, N = length of S.
// S only contains digits(i.e. 0-9)


//🔴approach:
//  bool isValid(string s){
//     int n = s.length();
//     if(n==0 or n>3 or (s[0] == '0' and n > 1 ) or stoi(s) > 255) return false;
//     else return true;
//   }

//     vector<string> genIp(string &s) {
//         // Your code here
//         vector<string > ans;
//         int n = s.length();
//         if(n>12) return ans;
//         for(int i = 1 ; i < n-2 ; i++){
//             for(int j = i+1 ; j < n-1; j++){
//                 for(int k = j+1 ; k < n ; k++){
//                     string first = s.substr(0 , i);
//                     string second = s.substr(i, j-i);
//                     string third = s.substr(j , k-j);
//                     string fourth = s.substr(k , n-k);
//                     if(isValid(first) and isValid(second) and isValid(third) and isValid(fourth)) {
//                         ans.push_back(first+"." + second+"."+third+"."+fourth);
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
//🔸time complexity: O(N*N*N)
//🔸space complexity: O(N*N*N*N)



//                      //❓Question: Smallest Distinct Window

// Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.
// For eg. A = aabcbcdbca, then the result would be 4 as of the smallest window will be dbca.

 
// Example 1:
// Input : "AABBBCBBAC"
// Output : 3
// Explanation : Sub-string -> "BAC"

// Example 2:
// Input : "aaab"
// Output : 2
// Explanation : Sub-string -> "ab"
 
// Example 3:
// Input : "GEEKSGEEKSFOR"
// Output : 8
// Explanation : Sub-string -> "GEEKSFOR"
 
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function findSubString() which takes the string  S as input and returns the length of the smallest such window of the string.

// Expected Time Complexity: O(256.N)
// Expected Auxiliary Space: O(256)

// Constraints:
// 1 ≤ |S| ≤ 105
// String may contain both type of English Alphabets.

//🔴approach:
// int findSubString(string str)
//     {
//         unordered_map<char,int> visited;
        
//         for(int i=0;i<str.length();i++){
//             visited[str[i]]++;
//         }
        
//         unordered_map<char,int> mp;
//         int start=0;
//         int end=0;
//         int ans=str.length();
        
//         for(int i=0;i<str.length();i++){
            
//             mp[str[i]]++;
            
//             if(mp.size()<visited.size())
//                 continue;
                
//             while(mp[str[start]]>1){
//                 mp[str[start]]--;
//                 start++;
//             }
            
//             ans=min(ans,i-start+1);
//         }
//         return ans; 
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                          //❓Question: Rearrange characters

// Given a string S with repeated characters. The task is to rearrange characters in a string such that no two adjacent characters are the same.
// Note: The string has only lowercase English alphabets and it can have multiple solutions. Return any one of them.

// Example 1:
// Input : str = "geeksforgeeks"
// Output: 1
// Explanation: All the repeated characters of the
// given string can be rearranged so that no 
// adjacent characters in the string is equal.
// Any correct rearrangement will show a output
// of 1.

// Example 2:
// Input : str = "bbbbb"
// Output: 0
// Explanation: Repeated characters in the string
// cannot be rearranged such that there should not
// be any adjacent repeated character.

// Your task :
// You don't have to read input or print anything. Your task is to complete the functionrearrangeString() which takes the string as input and returns the modified string. If the string cannot be modified return "-1".
// Note:The generatedoutput is 1 if the string is successfully rearranged and is 0 if rearranging is not possible.
 
// Expected Time Complexity : O(NlogN), N = length of String
// Expected Auxiliary Space : O(number of english alphabets)
 
// Constraints :
// 1 <= length of string <= 104

//🔴appproach :
// string rearrangeString(string str)
//     {
//         int n = str.size();
//         unordered_map<char, int> um;
        
//         for(auto it:str){
//             um[it]++;
//         }
        
//         for(auto it:um){
//             if(it.second > (n+1)/2) return "-1";
//         }
        
//         string ans(n, 'i');
//         int i = 0, j = 1;
//         vector<pair<int, char>> v;
        
//         for(auto it:um){
//             v.push_back({it.second, it.first});
//         }
        
//         sort(v.rbegin(), v.rend());
        
//         for(auto it:v){
            
//             int times = it.first;
//             char ch = it.second;
            
//             while(times)
//             {
//                 if(i < str.size()){
//                     ans[i] = ch;
//                     i += 2;
//                 }
//                 else if(j < str.size()){
//                     ans[j] = ch;
//                     j += 2;
//                 }
//                 times--;
//             }
//         }
//         return ans;
//     }
//🔸Time Complexity : O(NlogN), N = length of String
//🔸Auxiliary Space : O(number of english alphabets)



//                     //❓Question: Minimum Characters to be added to make string a palindrome

// Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.
// Note: A palindrome is a word which reads the same backward as forward. Example: "madam".

// Example 1:

// Input:
// S = "abc"
// Output: 2
// Explanation: 
// Add 'b' and 'c' at front of above string to make it
// palindrome : "cbabc"
// Example 2:

// Input:
// S = "aacecaaa"
// Output: 1
// Explanation: Add 'a' at front of above string
// to make it palindrome : "aaacecaaa"
// Your Task: 
// You don't need to read input or print anything. Your task is to complete the function minChar() which takes a string S and returns an integer as output.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= S.length <= 106

//🔴approach:  
// int minChar(string str){
        
//         string rev = str;
//         reverse(rev.begin(), rev.end());
        
//         string st = str+"$"+rev;
        
//         int LPS[st.size()+1]={0};
//         char s[st.size()+1];
        
//         for(int i=0; i<st.size(); i++){
//             s[i+1]=st[i];
//         }
        
//         int first=0, second=2;
        
//         while(second<=st.size()){
//             if(s[first+1] == s[second])
//             {
//                 LPS[second]=first+1;
//                 first++;
//                 second++;
//             }
//             else
//             {
//                 if(first == 0){
//                     second++;
//                 }
//                 else
//                 {
//                     first = LPS[first];
//                 }
//             }
//         }
        
//         return str.size()-LPS[st.size()];
//     }
//🔸time complexity; O(N logN + 2N)
//🔸space complexity: O(4N)



//                         //❓Question: Print Anagrams together

// Given an array of strings, return all groups of strings that are anagrams. 
// The groups must be created in order of their appearance in the original array. 
// Look at the sample case for clarification.
// Note: The final output will be in lexicographic order.


// Example 1:
// Input:
// N = 5
// words[] = {act,god,cat,dog,tac}
// Output:
// act cat tac 
// god dog
// Explanation:
// There are 2 groups of
// anagrams "god", "dog" make group 1.
// "act", "cat", "tac" make group 2.

// Example 2:
// Input:
// N = 3
// words[] = {no,on,is}
// Output: 
// is
// no on
// Explanation:
// There are 2 groups of
// anagrams "is" makes group 1.
// "no", "on" make group 2.

// Your Task:
// The task is to complete the function Anagrams() that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.

// Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
// Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.

// Constraints:
// 1<=N<=100
// 1<=|S|<=10

//🔴approach:
//  vector<vector<string> > Anagrams(vector<string>& arr) {
        
//         map<string, vector<string>> mp;
//         for(int i=0; i<arr.size(); i++){
//             string temp = arr[i] ;
//             sort(temp.begin(), temp.end()) ;
//             mp[temp].push_back(arr[i]) ;
//         }
        
//         vector<vector<string>> ans(mp.size());
//         int index = 0 ;
//         for(auto x:mp) {
//             auto v = x.second;
            
//             for(int i=0; i<v.size(); i++){
//                 ans[index].push_back(v[i]) ;
//             }
//             index++ ;
//         }
        
//         return ans ;
//     }
//🔸time complexity: O(N*MLog(m))
//🔸space complexity: O(N+M)


//                 //❓Question: Smallest window in a string  containing all the characters of another string

// Given two strings S and P. Find the smallest window in the string S consisting of all the characters(including duplicates) of the string P.  Return "-1" in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index.
// Note : All characters are in Lowercase alphabets. 

// Example 1:
// Input:
// S = "timetopractice"
// P = "toc"
// Output: 
// toprac
// Explanation: "toprac" is the smallest
// substring in which "toc" can be found.

// Example 2:
// Input:
// S = "zoomlazapzo"
// P = "oza"
// Output: 
// apzo
// Explanation: "apzo" is the smallest 
// substring in which "oza" can be found.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function smallestWindow() which takes two string S and P as input paramters and returns the smallest window in string S having all the characters of the string P. In case there are multiple such windows of same length, return the one with the least starting index. 

// Expected Time Complexity: O(|S|)
// Expected Auxiliary Space: O(n) n = len(p) O

// Constraints: 
// 1 ≤ |S|, |P| ≤ 105


//🔴approach :
// string smallestWindow (string s, string p)
//     {
//         // Your code here
//         int start_idx=0,j=0,len=INT_MAX;
//         vector<int>v(26,0);
       
//         for(int i=0;i<p.size();i++){
//             v[p[i]-'a']++;
//         }
        
//         int need=0;
//         for(int i=0;i<26;i++){
//             if(v[i]!=0)
//             need++;
//         }
        
//         int have=0;
//         vector<int>cur(26,0);
       
//         for(int i=0;i<s.size();i++){
//             cur[s[i]-'a']++;
            
//             if(v[s[i]-'a']==cur[s[i]-'a'])
//             have++;
            
//             while(have==need){
//                 if(len > (i-j+1)){
//                     len=i-j+1;
//                     start_idx=j;
//                 }
//                 cur[s[j]-'a']--;
//                 if(v[s[j]-'a']>cur[s[j]-'a'])
//                 have--;
//                 j++;
//             }
//         }
//         if(len==INT_MAX)return "-1";
//         string ans=s.substr(start_idx,len);
//         return ans;
//     }
//🔸time complexity: O(S+P)
//🔸space complexity: O(1)



//                    //❓Question: Remove consecutive characters

// Given a string S. For each index i(1<=i<=N-1), erase it if s[i] is equal to s[i-1] in the string.

// Example 1:
// Input:
// S = aabb
// Output:  ab 
// Explanation: 'a' at 2nd position is
// appearing 2nd time consecutively.
// Similiar explanation for b at
// 4th position.

// Example 2:
// Input:
// S = aabaa
// Output:  aba
// Explanation: 'a' at 2nd position is
// appearing 2nd time consecutively.
// 'a' at fifth position is appearing
// 2nd time consecutively.
 
// Your Task:
// You dont need to read input or print anything. Complete the function removeConsecutiveCharacter() which accepts a string as input parameter and returns modified string.
 
// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(|S|).
 
// Constraints:
// 1<=|S|<=105
// All characters are lowercase alphabets.

//🔴approach :
//  string removeConsecutiveCharacter(string S)
//     {
//         string temp;
//         temp.push_back(S[0]);
        
//       for(int i=1;i<S.size();i++)
//        {
//           if(S[i-1]!=S[i]){
//               temp.push_back(S[i]);
//             }
//        }
//        return temp;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                  //❓Question: Wildcard String matching

// Given two strings wild and pattern where wild string may contain wild card characters and pattern string is a normal string. Determine if the two strings match. The following are the allowed wild card characters in first string :-

// * --> This character in string wild can be replaced by any sequence of characters, it can also be replaced by an empty string.
// ? --> This character in string wild can be replaced by any one character.
// Example 1:

// Input: wild = ge*ks
//        pattern = geeks
// Output: Yes
// Explanation: Replace the '*' in wild string 
// with 'e' to obtain pattern "geeks".
// Example 2:

// Input: wild = ge?ks*
//        pattern = geeksforgeeks
// Output: Yes
// Explanation: Replace '?' and '*' in wild string with
// 'e' and 'forgeeks' respectively to obtain pattern 
// "geeksforgeeks"

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function match() which takes the string wild and pattern as input parameters and returns true if the string wild can be made equal to the string pattern, otherwise, returns false.

// Expected Time Complexity: O(length of wild string * length of pattern string)
// Expected Auxiliary Space: O(length of wild string * length of pattern string)

// Constraints:
// 1<=length of the two string<=10^3 

//🔴approach:
//  bool f(int i, int j, string wild, string pattern) {
          
//         if(j==pattern.size()) {
            
//             while(i<wild.size()) {
//                 if(wild[i] != '*')  return false;
//                 i++;
//             }
//             return true;
//         }
        
        
//         bool fl=false;

//         if(wild[i]==pattern[j]||wild[i]=='?') {
//             return f(i+1,j+1,wild,pattern);
//         }
//         else if(wild[i]=='*') {
//             for(int k=j;k<=pattern.size();k++) {
//                 fl=  fl || f(i+1,k,wild,pattern);
//             }
//             return fl;
//         }
//         else if(wild[i]!=wild[j]) {
//             return false;
//         }
//     }
    
//     bool match(string wild, string pattern)
//     {
//         int n=wild.size();
//         int m=pattern.size();
        
//         return f(0,0,wild,pattern);  
//     }
//🔸time complexity: O(N x (*+?))
//🔸space compplexity: O(1)



//                  //❓Question:Function to find Number of customers who could not get a computer

// Write a function “runCustomerSimulation” that takes following two inputs 

// An integer ‘n’: total number of computers in a cafe and a string: 
// A sequence of uppercase letters ‘seq’: Letters in the sequence occur in pairs. The first occurrence indicates the arrival of a customer; the second indicates the departure of that same customer. 
// A customer will be serviced if there is an unoccupied computer. No letter will occur more than two times. 
// Customers who leave without using a computer always depart before customers who are currently using the computers. There are at most 20 computers per cafe.

// For each set of input the function should output a number telling how many customers, if any walked away without using a computer. Return 0 if all the customers were able to use a computer.
// runCustomerSimulation (2, “ABBAJJKZKZ”) should return 0
// runCustomerSimulation (3, “GACCBDDBAGEE”) should return 1 as ‘D’ was not able to get any computer
// runCustomerSimulation (3, “GACCBGDDBAEE”) should return 0
// runCustomerSimulation (1, “ABCBCA”) should return 2 as ‘B’ and ‘C’ were not able to get any computer.
// runCustomerSimulation(1, “ABCBCADEED”) should return 3 as ‘B’, ‘C’ and ‘E’ were not able to get any computer.


//🔴approach :
// #include<iostream>
// #include<cstring>
// using namespace std;
 
// #define MAX_CHAR 26
 
// // n is number of computers in cafe.
// // 'seq' is given sequence of customer entry, exit events
// int runCustomerSimulation(int n, const char *seq)
// {
//     // seen[i] = 0, indicates that customer 'i' is not in cafe
//     // seen[1] = 1, indicates that customer 'i' is in cafe but
//     //             computer is not assigned yet.
//     // seen[2] = 2, indicates that customer 'i' is in cafe and
//     //             has occupied a computer.
//     char seen[MAX_CHAR] = {0};
 
//     // Initialize result which is number of customers who could
//     // not get any computer.
//     int res = 0;
 
//     int occupied = 0; // To keep track of occupied computers
 
//     // Traverse the input sequence
//     for (int i=0; seq[i]; i++)
//     {
//         // Find index of current character in seen[0...25]
//         int ind = seq[i] - 'A';
 
//         // If First occurrence of 'seq[i]'
//         if (seen[ind] == 0)
//         {
//             // set the current character as seen
//             seen[ind] = 1;
 
//             // If number of occupied computers is less than
//             // n, then assign a computer to new customer
//             if (occupied < n)
//             {
//                 occupied++;
 
//                 // Set the current character as occupying a computer
//                 seen[ind] = 2;
//             }
 
//             // Else this customer cannot get a computer,
//             // increment result
//             else
//                 res++;
//         }
 
//         // If this is second occurrence of 'seq[i]'
//         else
//         {
//         // Decrement occupied only if this customer
//         // was using a computer
//         if (seen[ind] == 2)
//             occupied--;
//         seen[ind] = 0;
//         }
//     }
//     return res;
// }
 
// // Driver program
// int main()
// {
//     cout << runCustomerSimulation(2, "ABBAJJKZKZ") << endl;
//     cout << runCustomerSimulation(3, "GACCBDDBAGEE") << endl;
//     cout << runCustomerSimulation(3, "GACCBGDDBAEE") << endl;
//     cout << runCustomerSimulation(1, "ABCBCA") << endl;
//     cout << runCustomerSimulation(1, "ABCBCADEED") << endl;
//     return 0;
// }
//🔸time complexity: O(N)
//🔸space complexity: O(max_char)


//                  //❓Question: Transform String

// Given two strings A and B. Find the minimum number of steps required to transform string A into string B. The only allowed operation for the transformation is selecting a character from string A and inserting it in the beginning of string A.

// Example 1:
// Input:
// A = "abd"
// B = "bad"
// Output: 1
// Explanation: The conversion can take place in
// 1 operation: Pick 'b' and place it at the front.

// Example 2:
// Input:
// A = "GeeksForGeeks"
// B = "ForGeeksGeeks"
// Output: 3
// Explanation: The conversion can take
// place in 3 operations:
// Pick 'r' and place it at the front.
// A = "rGeeksFoGeeks"
// Pick 'o' and place it at the front.
// A = "orGeeksFGeeks"
// Pick 'F' and place it at the front.
// A = "ForGeeksGeeks"
// Your Task: 
// You dont need to read input or print anything. Complete the function transform() which takes two strings A and B as input parameters and returns the minimum number of steps required to transform A into B. If transformation is not possible return -1.

// Expected Time Complexity: O(N) where N is max(length of A, length of B) 
// Expected Auxiliary Space: O(1)  

// Constraints:
// 1<= A.length(), B.length() <= 104


//🔴approach: 
// int transform (string A, string B)
//     {
//         int n = A.length() ;
//         int m = B.length() ;
//         if( n != m ) return -1;
         
//         string temp = A;
//         string temp1 = B;

//         sort(temp.begin(), temp.end()) ;
//         sort(temp1.begin(), temp1.end());

//          if(temp != temp1) return -1;
        
//         int i = n-1, j = m-1, count = 0;
        
//         while(i >=0 && j >=0) {
//             if(A[i] == B[j]) {
//                 i--;
//                 j--;
//             }
//             else{
//                 count++;
//                 i--;
//             }
//         }
//         return count;
//     }
//🔸time complexity: O(N+m log n)
//🔸space complexity: O(N + M)


//🔴approach: Optmised
// int transform (string A, string B)
//     {
//           //code here.
//         unordered_map<char,int>unm;
//         for(int i=0;i<A.length();i++){
//             unm[A[i]]++;
//         }
//         for(int i=0;i<B.length();i++){
//             unm[B[i]]--;
//         }
//         for(auto i:unm){
//             if(i.second!=0)return -1;
//         }
//         int i=A.length()-1;
//         int j=B.length()-1;
//         int count=0;
//         while(i>=0 && j>=0){
//             if(A[i]==B[j]){
//                 i--;
//                 j--;
//             }
//             else{
//                 count++;
//                 i--;
//             }
//         }
//         return count;
//     }
//🔸time complexity: O(N)
//🔸space compleity: O(N+M)


//               //❓Question: Isomorphic string

// Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
// Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
// Note: All occurrences of every character in str1 should map to the same character in str2

// Example 1:
// Input:
// str1 = aab
// str2 = xxy
// Output: 1
// Explanation: There are two different
// charactersin aab and xxy, i.e a and b
// with frequency 2and 1 respectively.

// Example 2:
// Input:
// str1 = aab
// str2 = xyz
// Output: 0
// Explanation: There are two different
// charactersin aab but there are three
// different charactersin xyz. So there
// won't be one to one mapping between
// str1 and str2.
// Your Task:
// You don't need to read input or print anything.Your task is to complete the function areIsomorphic() which takes the string str1 and string str2 as input parameter and  check if two strings are isomorphic. The function returns true if strings are isomorphic else it returns false.

// Expected Time Complexity: O(|str1|+|str2|).
// Expected Auxiliary Space: O(Number of different characters).
// Note: |s| represents the length of string s.

// Constraints:
// 1 <= |str1|, |str2| <= 2*104


//🔴approach:
// bool areIsomorphic(string str1, string str2)
//     {
        
//         int n = str1.length() ;
//         int m = str2.length() ;
//         if(n != m) return false;
        
//         int m1[256] = {0} ;
//         int m2[256] = {0} ;
        
//         for(int i=0; i<n; i++){
//             if( !m1[str1[i]] && !m2[str2[i]]) {
//                 m1[str1[i]] = str2[i] ;
//                 m2[str2[i]] = str1[i] ;
//             }
//             else if(m1[str1[i]] != str2[i]){
//                 return false;
//             }
//         }
        
//         return true ;
//     }
//🔸time complexity: O(N)
//🔸space complexity: O(no of different character)


//                     //❓QUestion: Recursively print all sentences that can be formed from list of word lists

// Given a list of word lists How to print all sentences possible taking one word from a list at a time via recursion? 

// Example: 

// Input: {{"you", "we"},
//         {"have", "are"},
//         {"sleep", "eat", "drink"}}

// Output:
//   you have sleep
//   you have eat
//   you have drink
//   you are sleep
//   you are eat
//   you are drink
//   we have sleep
//   we have eat
//   we have drink
//   we are sleep
//   we are eat
//   we are drink 

//🔴approach:
// #include <iostream>
// #include <string>
 
// #define R 3
// #define C 3

// using namespace std;
 
// // A recursive function to print all possible sentences that can be formed from a list of word list
// void printUtil(string arr[R][C], int m, int n, string output[R])
// {
//     // Add current word to output array
//     output[m] = arr[m][n];
 
//     // If this is last word of current output sentence, then print the output sentence
//     if (m==R-1)
//     {
//         for (int i=0; i<R; i++)
//         cout << output[i] << " ";
//         cout << endl;
//         return;
//     }
 
//     // Recur for next row
//     for (int i=0; i<C; i++)
//        if (arr[m+1][i] != "")
//           printUtil(arr, m+1, i, output);
// }
 
// // A wrapper over printUtil()
// void print(string arr[R][C])
// {
//    // Create an array to store sentence
//    string output[R];
 
//    // Consider all words for first row as starting points and print all sentences
//    for (int i=0; i<C; i++) {
//      if (arr[0][i] != "") {
//         printUtil(arr, 0, i, output);
//      }
//    }
// }
 
// // Driver program to test above functions
// int main()
// {
//    string arr[R][C]  = {{"you", "we"},
//                         {"have", "are"},
//                         {"sleep", "eat", "drink"}};
 
//    print(arr);
 
//  return 0 ;
// }
//🔸time complexity: O(n^m)
//🔸space complexity: O(m)

