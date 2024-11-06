
//                     //🔴🔴🔴 TRIE

// What is Trie?
// Trie is a type of k-ary search tree used for storing and searching a specific key from a set.
// Using Trie, search complexities can be brought to optimal limit (key length). 

// Definition: A trie (derived from retrieval) is a multiway tree data structure used for storing strings over an alphabet. 
// It is used to store a large amount of strings. The pattern matching can be done efficiently using tries.

// The trie shows words like allot, alone, ant, and, are, bat, bad. The idea is that all strings sharing common prefix
// should come from a common node. The tries are used in spell checking programs.

// Preprocessing pattern improves the performance of pattern matching algorithm.
// But if a text is very large then it is better to preprocess text instead of pattern for efficient search.
// A trie is a data structure that supports pattern matching queries in time proportional to the pattern size.
// If we store keys in a binary search tree, a well balanced BST will need time proportional to M * log N, 
// where M is the maximum string length and N is the number of keys in the tree. 
//Using Trie, the key can be searched in O(M) time. However, the penalty is on Trie storage requirements


//🔸Trie is also known as digital tree or prefix tree

//                         (root node)
//                     a  /           \ d
//                      (a)           (b)
//                    n /           a/    \o
//                    (n)          (a)    [do]
//                  d/   \t      d/
//               [and]  [ant]   [dad]


//🔴Structure of Trie node:
// Every node of Trie consists of multiple branches. 
// Each branch represents a possible character of keys. 
// Mark the last node of every key as the end of the word node. 
// A Trie node field isEndOfWord is used to distinguish the node as the end of the word node. 


//🔴Insert Operation in Trie:
// Inserting a key into Trie is a simple approach. 

// Every character of the input key is inserted as an individual Trie node. Note that the children is an array of pointers (or references) to next-level trie nodes. 
// The key character acts as an index to the array children. 
// If the input key is new or an extension of the existing key, construct non-existing nodes of the key, and mark the end of the word for the last node. 
// If the input key is a prefix of the existing key in Trie, Simply mark the last node of the key as the end of a word. 
// The key length determines Trie depth.

//                           (Root node)                   (Root node)
//                                  |                            |
//                                 (a)                          (a)
// (root node )   ===>              |             ====>          |
//               insert "and"      (n)            insert "ant"   (n)
//                                  |                               \ 
//                                 [d]                               [t]
//                                 and                                ant


// 🔴Advantages of tries
// 1. In tries the keys are searched using common prefixes. Hence it is faster. 
//    The lookup of keys depends upon the height in case of binary search tree. 
// 2. Tries take less space when they contain a large number of short strings.
//    As nodes are shared between the keys.
// 3. Tries help with longest prefix matching, when we want to find the key.

//🔴Comparison of tries with hash table
// 1. Looking up data in a trie is faster in worst case as compared to imperfect hash table.
// 2. There are no collisions of different keys in a trie.
// 3. In trie if single key is associated with more than one value then it resembles buckets in hash table.
// 4. There is no hash function in trie.
// 5. Sometimes data retrieval from tries is very much slower than hashing.
// 6. Representation of keys a string is complex. For example, representing floating point numbers using strings is really complicated in tries.
// 7. Tries always take more space than hash tables.
//  8. Tries are not available in programming tool it. Hence implementation of tries has to be done from scratch.

//🔴Applications of tries
// 1. Tries has an ability to insert, delete or search for the entries. 
//   Hence they are used in building dictionaries such as entries for telephone numbers, English words.
// 2. Tries are also used in spell-checking softwares.


//🔴Search Operation in Trie:
// Searching for a key is similar to the insert operation. However, It only compares the characters and moves down. 
// The search can terminate due to the end of a string or lack of key in the trie. 
// In the former case, if the isEndofWord field of the last node is true, then the key exists in the trie. 
// In the second case, the search terminates without examining all the characters of the key, 
// since the key is not present in the trie.

//                         (root node)
//       search "dad"              \ 
//        ====>                    (d)
///                                / 
//                               (a)
//                               /
//                              [d]    ==> check if( isWordEnd == TRUE)
//                              dad

// Note:
// Insert and search costs O(key_length), however, the memory requirements of Trie is O(ALPHABET_SIZE * key_length * N) where N is the number of keys in Trie.
//  There are efficient representations of trie nodes (e.g. compressed trie, ternary search tree, etc.) 
// to minimize the memory requirements of the trie.



//🔴 Implementation : for trie 

// #include<iostream>
// using namespace std ;

// //creating Trie Node class: 
// class TrieNode{
//     public:
//     char data ;
//     TrieNode* children[26] ;
//     bool isTerminal ;
  
//     TrieNode(char ch) {
//         data = ch ;
//         for(int i=0; i<26; i++) {
//             children[i] = NULL ;
//         }
//         isTerminal = false ;
//     }

// } ;


// class Trie {
//    public:
//    TrieNode* root ;

//    Trie(){
//     root = new TrieNode('\0') ;
//    }

// //🔸insert function using recursion
//    void insertUtil(TrieNode* root, string word) {
//     //base case
//        if(word.length() == 0){
//         root->isTerminal = true ;        // if all the character are traversed then make the last node character isterminal as true
//         return ;
//        }
       
//     //taking assumption word will be in CAPS
//       int index = word[0] - 'A' ;
//       TrieNode* child ;

//     //if present
//       if( root -> children[index] != NULL) {
//             child = root -> children[index] ;
//       } 
//       else{
//     //if not present
//         child = new TrieNode(word[0]) ;
//         root -> children[index] = child ;
//       }

//     //recursion call
//       insertUtil(child, word.substr(1)) ;
  
//    } 

//  // insert function call
//    void insertWord(string word) {
//         insertUtil(root, word) ;
//    }

// //🔸 searching function
//     bool searchUtil(TrieNode* root, string word) {
//     //base case
//        if(word.length() == 0){
//           return root -> isTerminal ;
//        }
//     // Taking assumption word will be in CAPS
//        int index = word[0] - 'A' ;
//        TrieNode* child ;

//     //if present   
//        if( root -> children[index] != NULL){
//           child = root -> children[index] ;
//        }
//        else{
//     // if not present
//         return false ;
//        }

//     //recursion call
//        return searchUtil(child, word.substr(1)) ;
//     }

// // search function call
//    bool searchWord(string word) {
//     return searchUtil(root, word) ;
//    }

// //🔸deletion function 
//   void removeWord(TrieNode* root, string word){
//       //base case
//       if(word.length() == 0){
//         root -> isTerminal = false;
//         return ;
//       }

//       int index = word[0] - 'A' ;
//       TrieNode* child ;

//       if( root -> children[index] != NULL){
//         child = root->children[index] ; 
//       }
//       else{
//         cout<<"word not found unable to delete" <<endl ;
//         return ;
//       }

//       removeWord(child, word.substr(1)) ;
//   }

//   void remove(string word) {
//     return removeWord(root, word) ;
//   }

// } ;

// int main() {
    
//     Trie* t = new Trie();
     
//     t->insertWord("TIME") ;
//     t->insertWord("ARM") ;
//     t->insertWord("DO") ;

//     cout<< " Present or not :" << t->searchWord("TIME") << endl ;

//     t->remove("TIME") ;

//     cout<< "present or not : "<< t->searchWord("TIME") << endl ;

//     return 0 ;
// }

// insertion in Trie
//🔴Time complexity: O(L)          //L = length of word

// searching in Trie
//🔴Time complexity: O(L)          //L = length of word

// Deletion in Trie
//🔴Time complexity: O(L)          //L = length of word




//🔴🔴🔴                    //❓Question: Implement Trie

// Implement Trie Data Structure to support these operations:
//    insert(word) - To insert a string "word" in Trie
//    search(word) - To check if string "word" is present in Trie or not.
//    startsWith(word) - To check if there is any string in the Trie that starts with the given prefix string "word".

// Three type of queries denote these operations:
//    Type 1: To insert a string "word" in Trie.
//    1 word
//    Type 2: To check if the string "word" is present in Trie or not.
//    2 word
//    Type 3: To check if there is any string in the Trie that starts with the given prefix string "word".
//    3 word


// Constraints :
//    1 <= Q <= 5*10^4
//    1 <= W <= 10
//    Where 'Q' is the number of queries, and "W" is the length of the "word".
//    All input of "word" will consist of only lowercase letters a-z.

// Sample Output 1 :
// true
// true
// false
//  Explanation To Sample Input 1 :
// Query 1: "hello" is inserted
// Query 2: "help" is inserted
// Query 3: "true" is printed as "help" is present
// Query 4: "true" is printed as "hello" and "help" is present having the prefix "hel"
// Query 5: "false" is printed as "hel" is not present
// Sample Input 2 :
// 10
// 1 aaaa
// 1 aaaaaa
// 1 bcd
// 2 aaaaa
// 3 aaaaa
// 3 bc
// 2 bc
// 1 bc
// 3 bcda
// 2 bc


// Sample Output 2 :
// false
// true
// true
// false
// false
// true
//  Explanation To Sample Input 2 :
// Query 1: "aaaa" is inserted
// Query 2: "aaaaaa" is inserted
// Query 3: "bcd" is inserted
// Query 4: "false" is printed as "aaaaa" is not present
// Query 5: "true" is printed as "aaaaaa" is present having the prefix "aaaaa"
// Query 6: "true" is printed as "bcd" is present having the prefix "bc"
// Query 7: "false" is printed as "bc" is not present
// Query 8: "bc" is inserted
// Query 9: "false" is printed as no word is present having the prefix "bcda"
// Query 10: "true" is printed as "bc" is present


// #include<iostream>
// using namespace std;

// class TrieNode{
//     public:
//     char data ;
//     TrieNode* children[26] ;
//     bool isTerminal ;

//     TrieNode(char ch) {
//         data = ch ;
//         for(int i=0; i<26; i++){
//             children[i] = NULL ;
//         }
//         isTerminal = false ;
//     }
// };

// class Trie{
//     public:

//     TrieNode* root ;

//     Trie() {
//        root = new TrieNode('\0') ;
//     }

// /** Inserts a word into the trie. */

//  void insertUtil(TrieNode* root, string word) {
//     //base case
//        if(word.length() == 0){
//         root->isTerminal = true ;        // if all the character are traversed then make the last node character isterminal as true
//         return ;
//        }
       
//     //taking assumption word will be in CAPS
//       int index = word[0] - 'a' ;
//       TrieNode* child ;

//     //if present
//       if( root -> children[index] != NULL) {
//             child = root -> children[index] ;
//       } 
//       else{
//     //if not present
//         child = new TrieNode(word[0]) ;
//         root -> children[index] = child ;
//       }

//     //recursion call
//       insertUtil(child, word.substr(1)) ;
  
//    } 
//     void insert(string word) {
//       return insertUtil(root, word) ;
//     }

// /** Returns if the word is in the trie. */

//    bool searchUtil(TrieNode* root, string word) {
//     //base case
//        if(word.length() == 0){
//           return root -> isTerminal ;
//        }
//     // Taking assumption word will be in CAPS
//        int index = word[0] - 'a' ;
//        TrieNode* child ;

//     //if present   
//        if( root -> children[index] != NULL){
//           child = root -> children[index] ;
//        }
//        else{
//     // if not present
//         return false ;
//        }

//     //recursion call
//        return searchUtil(child, word.substr(1)) ;
//     }

//     bool search(string word) {
//         return searchUtil(root, word) ;
//     }

// /** Returns if there is any word in the trie that starts with the given prefix. */
    
//     bool prefixUtil(TrieNode* root, string word) {
//     //base case
//        if(word.length() == 0){
//           return true ;
//        }
//     // Taking assumption word will be in CAPS
//        int index = word[0] - 'a' ;
//        TrieNode* child ;

//     //if present   
//        if( root -> children[index] != NULL){
//           child = root -> children[index] ;
//        }
//        else{
//     // if not present
//         return false ;
//        }

//     //recursion call
//        return prefixUtil(child, word.substr(1)) ;
//     }

//     bool startsWith(string prefix) {
//         return prefixUtil(root, prefix)  ;
//     }
// } ;



//                   //❓Question: Longest common prefix

// You are given an array 'ARR' consisting of 'N' strings. Your task is to find the longest common prefix among all these strings. If there is no
// common prefix, you have to return an empty string.
// A prefix of a string can be defined as a substring obtained after removing some or all characters from the end of the string.
// For Example:

// Consider ARR ["coding", "codezen", "codingninja", "coders"]
//  The longest common prefix among all the given strings is "cod" as it is present as a prefix in all strings. Hence,
//  the answer is "cod".

// Constraints:
//    1 <= T <= 10
//    1 <= N <= 3000
//    1 <= |ARR[i]| <=1000
//    Each string consists of only lowercase letters.
//    Time limit: 1 sec


// Sample Input 1:
// 2
// 4
// coding codezen codingninja coder
// 3
// night ninja nil 
// Sample Output 1:
// cod
// ni
// Explanation Of Sample Input 1:
// For the first test case, 
// The longest common prefix among all the given strings is “cod” as it is present as a prefix in all strings. Hence, the answer is “cod”.

// For the second test case,
// The longest common prefix among all the given strings is “ni” as it is present as a prefix in all strings. Hence, the answer is “ni”.

// Sample Input 2:
// 2
// 3
// applejuice applepie apple
// 4
// car cus cart carat
// Sample Output 2:
// apple
// c

//🔴approach : using forloop only
// #include<iostream>
// #include<vector>
// using namespace std;

// string longestCommonPrefix(vector<string> &arr, int n) {
       
//        string ans ;

//     // for traversing all characters of first string
//        for(int i=0; i<arr[0].length() ; i++){

//             char ch =  arr[0][i] ;
//             bool match = true ;

//         //for comparing character with rest of the strings
//         for(int j=1; j<n; j++) {

//             //if not match
//             if(arr[j].size() < i  ||  ch != arr[j][i]) {
//                 match = false ;
//                 break ;
//             }
//         }

//         if(match == false){
//            break;
//         }
//         else{
//             ans.push_back(ch) ;
//         }
//     }
//     return ans ;
// }
// //🔸Time complexity: O(m*n) 
// //🔸Space complexity: O(m)


// //🔴approach 2:  using TRIE
// #include<iostream>
// #include<vector>

// class TrieNode{
//     public:
//     TrieNode* children[26] ;
//     int childCount ;
//     bool isTerminal ;

//     TrieNode(char ch) {
//         char data = ch ;
//         for(int i=0; i<26; i++) {
//             children[i] = NULL ;
//         }
//         childCount = 0 ;
//         isTerminal = false; 
//     }
// } ;


// class Trie {
//     public:
//     TrieNode* root ;

//     Trie(char ch) {
//         root = new TrieNode(ch) ;
//     }

// // insertion in Trie function
//     void insertUtil(TrieNode* root, string word) {
//     //base case
//        if(word.length() == 0){
//         root->isTerminal = true ;        
//         return ;
//        }
       
//       int index = word[0] - 'a' ;
//       TrieNode* child ;

//       if( root -> children[index] != NULL) {
//             child = root -> children[index] ;
//       } 
//       else{
//         child = new TrieNode(word[0]) ;
//         root -> childCount++ ;                 // changes for this question in Trie Insertion function
//         root -> children[index] = child ;
//       }

//     //recursion call
//       insertUtil(child, word.substr(1)) ;
//    } 

//    void insertWord(string word) {
//     insertUtil(root ,word) ;
//    }

// // longest common prefix function call
//    void lcp(string str, string &ans) {
       
//        for(int i=0; i<str.length(); i++){
//             char ch = str[i] ;

//             if(root -> childCount == 1) {
//                 ans.push_back(ch) ;
//                 // aage badhjao
//                 int index = ch - 'a' ;
//                 root = root ->children[index] ;
//             }
//             else{
//                 break ;
//             }

//             if(root -> isTerminal){
//                 break ;
//             }
//        }
//    }

// } ;

// string longestCommonPrefix(vector<string> &arr, int n) {

//     Trie* t = new Trie('\0') ;

//     //insert krdo all strings into trie
//     for(int i=0; i<n; i++){
//         t->insertWord(arr[i]) ;
//     }
    
//     string first =  arr[0];
//     string ans = " "; 
    
//     t->lcp(first, ans) ;

//     return ans ;
// }
//🔴Time complexity: O(m*n)
//🔴space complexity: O(m*n)



// 🔴🔴🔴            //❓Question: Impplement a phone directory

// You are given a list/array of strings which denotes the contacts that exist in your phone directory. The search query on a string 'str' which is
//  a query string displays all the contacts which are present in the given directory with the prefix as 'str'. One special property of the search
//  function is that when a user searches for a contact from the contact list then suggestions (contacts with prefix as the string entered so for)
//  are shown after the user enters each character.
//  Note:
//     If no suggestions are found, return an empty 2D array.

// In the above google searchbox example everytime we enter a character, a few suggestions display the strings which contain the entered
//  string as prefixes.

// Constraints :
//    1 <= T <= 50
//    1 <= N <= 100
//    1 <= len <= 10
//    ARR[i] contains lowercase English alphabets.
//    All the given strings contain lowercase English alphabets.
//    Time Limit: 1 sec.


// Sample Output 1 :
// cod coding codding code coly
// cod coding codding code coly
// cod coding codding code coly
// coding
// coding
// coding
// ninjas
// ninjas
// ninjas
// ninjas
// ninjas
// Explanation To Sample Input 1 :
// In the first test case, 
// The suggestions for “c” is {“cod”, “coding”, “codding”, “code”, “coly”}.
// The suggestions for “co” is {“cod”, “coding”, “codding”, “code”, “coly”}.
// The suggestions for “cod” is {“cod”, “coding”, “codding”, “code”, “coly”}.
// The suggestion for “codi” is {“coding”}.
// The suggestion for “codin” is {“coding”}.
// The suggestion for “coding” is {“coding”}.

// In the second test case, 
// The suggestion for “n” is {“ninjas”}.
// The suggestion for “ni” is {“ninjas”}.
// The suggestion for “nin” is {“ninjas”}.
// The suggestion for “ninj” is {“ninjas”}.
// The suggestion for “ninja” is {“ninjas”}.
// Sample Input 2 :
// 3
// 2
// coding ninjas
// cell
// 2
// ab abc
// a
// 2
// ab abc
// b


// Sample Output 2 :
// coding
// ab abc
// No suggestions found
// Explanation To Sample Input 2 :
// In the first test case, 
// The suggestion for “c” is {“coding”}.
// For the rest of the letters, there are no suggestions.

// In the second test case,
// The suggestion for “a” is {“ab”, “abc”}.

// In the third test case, no suggestions are found.




// #include<iostream>
// #include<vector>
// using namespace std;

// class TrieNode{
//     public:
//     TrieNode* children[26] ;
//     int childCount ;
//     bool isTerminal ;

//     TrieNode(char ch) {
//         char data = ch ;
//         for(int i=0; i<26; i++) {
//             children[i] = NULL ;
//         }
//         childCount = 0 ;
//         isTerminal = false; 
//     }
// } ;

// class Trie {
//     public:
//     TrieNode* root ;

//     Trie(char ch) {
//         root = new TrieNode(ch) ;
//     }

// // insertion in Trie function
//     void insertUtil(TrieNode* root, string word) {
//     //base case
//        if(word.length() == 0){
//         root->isTerminal = true ;        
//         return ;
//        }
       
//       int index = word[0] - 'a' ;
//       TrieNode* child ;

//       if( root -> children[index] != NULL) {
//             child = root -> children[index] ;
//       } 
//       else{
//         child = new TrieNode(word[0]) ;
//         root -> children[index] = child ;
//       }

//     //recursion call
//       insertUtil(child, word.substr(1)) ;
//    } 

//    void insertWord(string word) {
//     insertUtil(root ,word) ;
//    }

// // print suggestion function 
// void printSuggestion(TrieNode* curr , vector<string> &temp, string prefix) {
      
//     if(curr->isTerminal){
//         temp.push_back(prefix) ;
//     }

//     for(char ch='a'; ch <= 'z'; ch++) {
         
//         TrieNode* next = curr->children[ch - 'a'] ;
//          if(next != NULL){
//             prefix.push_back(ch) ;
//             printSuggestion(next, temp, prefix) ;
//             prefix.pop_back() ;
//          }
//     }
// }

// // getSuggestion function
//    vector<vector<string>> getSuggestion(string str) {
       
//        TrieNode* prev = root ;
//        vector<vector<string>> output ;
//        string prefix = "" ;

//        for(int i=0; i>str.length(); i++ ) {
          
//           char lastcharacter = str[i] ;
//           prefix.push_back(lastcharacter) ;
//         // check fpr last character
//         TrieNode* curr = prev->children[lastcharacter - 'a'] ;

//         //if not found
//         if(curr == NULL) {
//             break ;
//         }
        
//         //if found
//         vector<string> temp ;
//         printSuggestion(curr, temp, prefix) ;

//         output.push_back(temp) ;
//         temp.clear() ;
//         prev = curr ;
//        }
       
//        return output;
//    }

// };


// vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr){
//     //creation of trie
//     Trie* t = new Trie('\0') ;
    
//     //insert all contact in trie 
//     for(int i=0; i<contactList.size(); i++) {
//         string str = contactList[i] ;
//         t->insertWord(str) ;
//     }

//    //return ans 
//    return t->getSuggestion(queryStr) ;
// }
//🔴time complexity: O(n*m^2)
//🔴space complexity: O(m*n)             // m = avg word length,  n= total no. of words

