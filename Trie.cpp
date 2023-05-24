
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



// 88 /149