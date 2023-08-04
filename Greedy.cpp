

//                      🔴🔴 GREEDY 🔴🔴

// What is Greedy Algorithm?
// Greedy is an algorithmic paradigm that builds up a solution piece by piece, 
// always choosing the next piece that offers the most obvious and immediate benefit. 
// So the problems where choosing locally optimal also leads to global solution are the best fit for Greedy.

// For example consider the Fractional Knapsack Problem. The local optimal strategy is to choose the item that has maximum value 
// vs weight ratio. This strategy also leads to a globally optimal solution because we are allowed to take fractions of an item.




//             ❓Question: N meetings in one room  / (activity selection problem)

// There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
// What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

// Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.

// Example 1:
// Input:
// N = 6
// start[] = {1,3,0,5,8,5}
// end[] =  {2,4,6,7,9,9}
// Output: 
// 4
// Explanation:
// Maximum four meetings can be held with
// given start and end timings.
// The meetings are - (1, 2),(3, 4), (5,7) and (8,9)

// Example 2:
// Input:
// N = 3
// start[] = {10, 12, 20}
// end[] = {20, 25, 30}
// Output: 
// 1
// Explanation:
// Only one meetings can be held
// with given start and end timings.

// Expected Time Complexity : O(N*LogN)
// Expected Auxilliary Space : O(N)

// Constraints:
// 1 ≤ N ≤ 105
// 0 ≤ start[i] < end[i] ≤ 105

//🔴approch :  greedy
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// static bool custom (pair<int, int> a, pair<int,int> b) {
//     return a.second < b.second ;
//  }

//  int maxMeetings(int start[], int end[], int n) {

//     vector<pair<int, int>> vec ;

//     for(int i=0; i<n; i++) {
//         pair<int, int> temp = make_pair(start[i], end[i]) ;
//         vec.push_back(temp) ;
//     }

//     sort(vec.begin(), vec.end(), custom) ;

//     int count = 1 ;
//     int ansEnd = vec[0].second ;

//     for(int i=1; i<n; i++) {
//         if(vec[i].first > ansEnd) {
//             count++ ;
//             ansEnd = vec[i].second ;
//          }
//     }

//     return count ;
//  }

//🔸 time complexity : O(N + Logn)
//🔸 space complexity: O(N)


//                  ❓Question : Maximum Meetings in One Room

// here is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is the start time of meeting 
// i and F[i] is the finish time of meeting i. The task is to find the maximum number of meetings that can be 
// accommodated in the meeting room. You can accommodate a meeting if the start time of the meeting is strictly 
// greater than the finish time of the previous meeting. Print all meeting numbers.

// Note: If two meetings can be chosen for the same slot then choose meeting with smaller index in the given array.

// Example 1:
// Input:
// N= 6
// S = {1,3,0,5,8,5}
// F = {2,4,6,7,9,9} 
// Output:
// {1,2,4,5}
// Explanation:
// We can attend the 1st meeting from (1 to 2),
// then the 2nd meeting from (3 to 4), then the
// 4th meeting from (5 to 7), and the last meeting
// we can attend is the 5th from (8 to 9). It can
// be shown that this is the maximum number of
// meetings we can attend.
 
// Example 2:
// Input:
// N= 1
// S = {3}
// F = {7}
// Output:
// {1}
// Explanation:
// Since there is only one meeting, we can attend the meeting.

// Expected Time Complexity: O(N*log(N))
// Expected Auxiliary Space: O(N)

 

//🔴 approch :
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<map>
// using namespace std ;

// static bool custom(pair<int, int> a, pair<int, int> b){
//     return a.second < b.second ;
// }

// vector<int> maxMeetings(int n, vector<int> &s, vector<int> &f){
        
//         vector<pair<int, int>> vec ;

//         for(int i=0; i<n; i++){
//             pair<int, int> temp = make_pair(s[i], f[i]) ;
//             vec.push_back(temp) ;
//         }

//         map<pair<int, int>, int> pairToIndex ;
//         for(int i=0; i<n; i++) {
//             if( !pairToIndex.count(vec[i])) {
//                 pairToIndex[vec[i]] = i+1 ;
//             }
//         }

//         sort(vec.begin(), vec.end(), custom) ;

//         vector<int> ans ;
//         int ansEnd = vec[0].second ;
//         int index  = pairToIndex[vec[0]] ;
//         ans.push_back(index) ;

//         for(int i=1; i<n; i++) {
//             if( vec[i].first > ansEnd) {
//                 int index = pairToIndex[vec[i]] ;
//                 ans.push_back(index) ;
//                 ansEnd = vec[i].second ;
//             }
//         }

//         sort(ans.begin(), ans.end()) ;

//         return ans ;
//  }
//🔸time compelxity: O(N + Logn)                   // O(2N + 2Logn)  O(N + Logn + logn +  N + logn)
//🔸space complexity: O(N)                         // O(2N)



//                  ❓Question: Shop in candy Store

// In a candy store, there are N different types of candies available and the prices of all the N different types of candies are provided to you.
// You are now provided with an attractive offer.
// For every candy you buy from the store and get at most K other candies ( all are different types ) for free.
// Now you have to answer two questions. Firstly, you have to find what is the minimum amount of money you have to spend to buy all the N different candies. Secondly, you have to find what is the maximum amount of money you have to spend to buy all the N different candies.
// In both the cases you must utilize the offer i.e. you buy one candy and get K other candies for free.

// Example 1:
// Input:
// N = 4
// K = 2
// candies[] = {3 2 1 4}

// Output:
// 3 7

// Explanation:
// As according to the offer if you buy 
// one candy you can take at most two 
// more for free. So in the first case, 
// you buy the candy which costs 1 and 
// takes candies worth 3 and 4 for free, 
// also you buy candy worth 2 as well.
// So min cost : 1+2 =3.
// In the second case, you can buy the 
// candy which costs 4 and takes candies 
// worth 1 and 2 for free, also you need 
// to buy candy worth 3 as well. 
// So max cost : 3+4 =7.

// Example 2:
// Input: 
// N = 5
// K = 4
// candies[] = {3 2 1 4 5}

// Output: 
// 1 5

// Explanation:
// For minimimum cost buy the candy with
// the cost 1 and get all the other candies
// for free.
// For maximum cost buy the candy with
// the cost 5 and get all other candies
// for free.

// Expected Time Complexity: O(NLogN)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 100000
//  0 <= K <= N-1
// 1 <= candies[i] <= 10000


//🔴approch :
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std; 

// vector<int> candyStore(int candies[], int N, int K) {

//     sort(candies, candies+N) ;

//     int mini = 0 ;
//     int buy = 0 ;
//     int free = N-1 ;

//     while(buy <= free) {
//         mini = mini + candies[buy] ;
//         buy++ ;
//         free = free - K;
//     }

//     int maxi = 0 ;
//     buy = N-1 ;
//     free = 0 ;

//     while(free <= buy) {
//         maxi = maxi + candies[buy] ;
//         buy-- ;
//         free = free + K ;
//     }

//     vector<int> ans ;
//     ans.push_back(mini) ;
//     ans.push_back(maxi) ;

//     return ans ;
//  }
 //🔸time complexity: O(N + Logn)
 //🔸space compelxity: O(1)




//               ❓Question:  CHeck if it is possible to survive on Island


// Ishika got stuck on an island. There is only one shop on this island and it is open on all days of the week except for Sunday.
// Consider following constraints:
// N – The maximum unit of food you can buy each day.
// S – Number of days you are required to survive.
// M – Unit of food required each day to survive.
// Currently, it’s Monday, and she needs to survive for the next S days.
// Find the minimum number of days on which you need to buy food from the shop so that she can survive the next S days, 
// or determine that it isn’t possible to survive.

// Example 1:
// Input: S = 10, N = 16, M = 2
// Output: 2
// Explaination: One possible solution is to 
// buy a box on the first day (Monday), 
// it’s sufficient to eat from this box up to 
// 8th day (Monday) inclusive. Now, on the 9th 
// day (Tuesday), you buy another box and use 
// the chocolates in it to survive the 9th and 
// 10th day.

// Example 2:
// Input: S = 10, N = 20, M = 30
// Output: -1
// Explaination: She can’t survive even if 
// she buy food because the maximum number 
// of units she can buy in 1 day is less the 
// required food for 1 day.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N, S ≤ 50
// 1 ≤ M ≤ 30

//🔴approch:
// N – The maximum unit of food you can buy each day.
// S – Number of days you are required to survive.
// M – Unit of food required each day to survive.
// sunday - shop close cannot buy food on sunday

// #include<iostream>
// using namespace std;

// int minimumDays(int S, int N, int M){
     
//     int sunday = S/7 ;

//     int buyingDays = S - sunday ;
//     int totalFood = S*M ;
//     int ans = 0 ;

//     if(totalFood % N == 0) {
//         ans = totalFood / N ;
//     }
//     else{
//         ans = totalFood/N + 1 ;
//     }

//     if(ans <= buyingDays) {
//         return ans ;
//     }
//     else{
//         return -1 ;
//     }
// }
//🔸time complexity: O(1)
//🔸space complexity: O(1)



//                 ❓Question: Reverse Words in a given String

// Given a String S, reverse the string without reversing its individual words. Words are separated by dots

// Example 1:
// Input:
// S = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole
// string(not individual words), the input
// string becomes
// much.very.program.this.like.i

// Example 2:
// Input:
// S = pqr.mno
// Output: mno.pqr
// Explanation: After reversing the whole
// string , the input string becomes
// mno.pqr

// Expected Time Complexity: O(|S|)
// Expected Auxiliary Space: O(|S|)

// Constraints:
// 1 <= |S| <= 105

//🔴approch:
// #include<iostream>
// #include<algorithm>
// using namespace std;

// string reverseWords(string S) { 

//     string ans = "" ;
//     string temp = "" ;

//     for(int i=S.length()-1; i>=0; i--){
//         if(S[i] == '.') {
//             reverse(temp.begin(), temp.end()) ;
//             ans = ans + temp ;
//             ans.push_back('.') ;
//             temp = "" ;
//         }
//         else{
//             temp.push_back(S[i]) ;
//         }
//     }

//     reverse(temp.begin(), temp.end()) ;
//     ans = ans + temp ;
//     return ans ;

// } 
//🔸time complexity: O(N)
//🔸space complexity: O(N)



//                ❓Question: Choclate distrubution Problem

// Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. 
// Each packet can have a variable number of chocolates. There are M students, 
// the task is to distribute chocolate packets among M students such that :
// 1. Each student gets exactly one packet.
// 2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

// Example 1:
// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between maximum chocolates and minimum chocolates is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.

// Example 2:
// Input:
// N = 7, M = 3
// A = {7, 3, 2, 4, 9, 12, 56}
// Output: 2
// Explanation: The minimum difference between maximum chocolates and minimum chocolates is 4 - 2 = 2 by choosing following M packets :{3, 2, 4}.

// Expected Time Complexity: O(N*Log(N))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 105
// 1 ≤ Ai ≤ 109
// 1 ≤ M ≤ N


//🔴approach :
// #include<iostream>
// #include<vector>
// #include<limits.h>
// #include<algorithm>
// using namespace std;

//  long long findMinDiff(vector<long long> a, long long n, long long m){
    
//     sort(a.begin(), a.end()) ;

//     int i = 0;
//     int j = m-1;

//     int mini = INT_MAX ;
//     while( j < a.size()) {
//         int diff = a[j] - a[i] ;
//         mini = min(mini, diff) ;
//         i++ ;
//         j++ ;
//     }
//         return mini ;
// } 
//🔸time complexity : O(N-m)
//🔸space complexity : O(1)



//                 ❓Question: Minimum Cost of ropes

// There are given N ropes of different lengths, we need to connect these ropes into one rope.
// The cost to connect two ropes is equal to sum of their lengths. 
// The task is to connect the ropes with minimum cost. 
// Given N size array arr[] contains the lengths of the ropes. 

// Example 1:
// Input:
// n = 4
// arr[] = {4, 3, 2, 6}
// Output: 
// 29
// Explanation:
// We can connect the ropes in following ways.
// 1) First connect ropes of lengths 2 and 3.
// Which makes the array {4, 5, 6}. Cost of
// this operation 2+3 = 5. 
// 2) Now connect ropes of lengths 4 and 5.
// Which makes the array {9, 6}. Cost of
// this operation 4+5 = 9.
// 3) Finally connect the two ropes and all
// ropes have connected. Cost of this 
// operation 9+6 =15
// Total cost for connecting all ropes is 5
// + 9 + 15 = 29. This is the optimized cost
// for connecting ropes. 
// Other ways of connecting ropes would always 
// have same or more cost. For example, if we 
// connect 4 and 6 first (we get three rope of 3,
// 2 and 10), then connect 10 and 3 (we get
// two rope of 13 and 2). Finally we
// connect 13 and 2. Total cost in this way
// is 10 + 13 + 15 = 38.

// Example 2:
// Input:
// n = 5
// arr[] = {4, 2, 7, 6, 9}
// Output: 
// 62 
// Explanation:
// First, connect ropes 4 and 2, which makes
// the array {6,7,6,9}. Cost of
// this operation 4+2 = 6. Next, add ropes 
// 6 and 6, which results in {12,7,9}. 
// Cost of this operation 6+6 = 12.
// Then, add 7 and 9, which makes the array {12,16}. 
// Cost of this operation 7+9 = 16. And
// finally, add these two which gives {28}.
// Hence, the total cost is 6 + 12 + 16 + 
// 28 = 62.

// Expected Time Complexity : O(nlogn)
// Expected Auxilliary Space : O(n)

// Constraints:
// 1 ≤ N ≤ 200000
// 1 ≤ arr[i] ≤ 106

//🔴approach :
// #include<iostream>
// #include<algorithm>
// #include<queue>
// using namespace std; 

// long long minCost(long long arr[], long long n) {
        
//     priority_queue<long long, vector<long long>, greater<long long>> pq ;

//     for(int i=0; i<n; i++){
//         pq.push(arr[i]) ;
//     }

//     long long cost = 0 ;

//     while(pq.size() > 1) {
//         long long first = pq.top() ;
//         pq.pop() ;

//         long long second = pq.top() ;
//         pq.pop() ;

//         long long mergeLength = first + second ;
//         cost = cost + mergeLength ;

//         pq.push(mergeLength) ;
//     }

//     return cost ;
// }
//🔸time complexity: O(N)             // priority_queue (for min heap) = O(1) insertion and root is minimum
//🔸space complexity: O(N)



//                  ❓Question: Huffman Coding

// Given a string S of distinct character of size N and their corresponding frequency f[ ]
// i.e. character S[i] has f[i] frequency. Your task is to build the Huffman tree print all 
// the huffman codes in preorder traversal of the tree.
// Note: While merging if two nodes have the same value, 
// then the node which occurs at first will be taken on the left of Binary Tree and the other one to the right,
//  otherwise Node with less value will be taken on the left of the subtree and other one to the right.

// Example 1:
// S = "abcdef"
// f[] = {5, 9, 12, 13, 16, 45}
// Output: 
// 0 100 101 1100 1101 111
// Explanation:
//                  [ |100 | ] 
//               0  /        \ 1
//         [x|f|45|x]       [ |55| ]
//                       0 /        \ 1
//                  [ |25| ]         [ |30| ] 
//                0 /      \ 1      0 /      \ 1
//         [x|c|12|x]  [x|d|13|x]  [x|a|5|x] [x|b|9|x]
//
// Steps to print codes from Huffman Tree
// HuffmanCodes will be:
// f : 0
// c : 100
// d : 101
// a : 1100
// b : 1101
// e : 111
// Hence printing them in the PreOrder of Binary 
// Tree.

// Expected Time complexity: O(N * LogN) 
// Expected Space complexity: O(N) 

// Constraints:
// 1 ≤ N ≤ 26

//🔴approach :
// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;

// class Node {
//     public:
//     int data ;
//     Node* left ;
//     Node* right ;

//     Node(int d) {
//         data = d ;
//         left = NULL ;
//         right = NULL ;
//     }
// };

// class compare {
//     public:
//     bool operator()(Node* a, Node* b) {
//         return a->data > b->data ;
//     }
// };

// void traverse(Node* root, vector<string>& ans, string temp) {
//     //base case
//     if(root->left == NULL && root->right == NULL){
//         ans.push_back(temp) ;
//         return ;
//     }

//     traverse(root->left, ans, temp +'0') ;
//     traverse(root->right, ans, temp +'1') ; 
// }

// vector<string> huffmanCodes(string S,vector<int> f,int n) {

//     priority_queue<Node*, vector<Node*>, compare> pq ;

//     for(int i=0; i<n; i++) {
//         Node* temp = new Node(f[i]) ;
//         pq.push(temp) ;
//     }

//     while(pq.size() > 1) {
//         Node* left = pq.top() ;
//         pq.pop() ;

//         Node* right = pq.top() ;
//         pq.pop() ;

//         Node* newNode = new Node(left->data + right->data) ;
//         newNode->left = left ;
//         newNode->right = right; 
//         pq.push(newNode) ;
//     }

//     Node* root = pq.top() ;
//     vector<string> ans ;
//     string temp = "" ;
//     traverse(root, ans, temp) ;  

//     return ans ;
// }
//🔸time complexity : O(N + Logn)                   // min heap  = insertion TC (O (logn))
//🔸space complexity : O(N)



//                    ❓Question: Fractional Knapsack

// Given weights and values of N items, we need to put these items in a knapsack 
// of capacity W to get the maximum total value in the knapsack.
// Note: Unlike 0/1 knapsack, you are allowed to break the item. 

// Example 1:
// Input:
// N = 3, W = 50
// values[] = {60,100,120}
// weight[] = {10,20,30}
// Output:
// 240.00
// Explanation:Total maximum value of item
// we can have is 240.00 from the given
// capacity of sack. 

// Example 2:
// Input:
// N = 2, W = 50
// values[] = {60,100}
// weight[] = {10,20}
// Output:
// 160.00
// Explanation:
// Total maximum value of item
// we can have is 160.00 from the given
// capacity of sack.

// Expected Time Complexity : O(NlogN)
// Expected Auxilliary Space: O(1)

// Constraints:
// 1 <= N <= 105
// 1 <= W <= 105


//🔴approach :
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// struct Item{
//     int value;
//     int weight;
// };

// static bool compare(pair<double, Item> a, pair<double, Item> b) {
//     return a.first > b.first ;
// }

// double fractionalKnapsack(int W, Item arr[], int n) {
//     vector<pair<double, Item>> v ;

//     for(int i=0; i<n; i++) {
//         double perUnitValue = (1.0*arr[i].value) / arr[i].weight ;
//         pair<double, Item> p = make_pair(perUnitValue, arr[i]) ;
//         v.push_back(p) ;
//     }

//     sort(v.begin(), v.end(), compare)  ;

//     double totalValue = 0 ;
//     for(int i=0; i<n; i++) {
//         if(v[i].second.weight > W) {
//             // agar meri current item ka weight knapsack ke total capacity se bada hai 
//             // toh main sirf fraction le sakta hu
//             totalValue += W*v[i].first ;
//             W = 0 ;
//         }
//         else{
//             totalValue += v[i].second.value ;
//             W = W - v[i].second.weight ;
//         }
//     }

//     return totalValue ;
// }
//🔸time complexity: O(N + Log n)
//🔸space complexity: O(N)



//                   ❓Question: Job Sequencing Problem

// Given a set of N jobs where each jobi has a deadline and profit associated with it.
// Each job takes 1 unit of time to complete and only one job can be scheduled at a time. 
// We earn the profit associated with job if and only if the job is completed by its deadline.

// Find the number of jobs done and the maximum profit.
// Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.


// Example 1:
// Input:
// N = 4
// Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}
// Output:
// 2 60
// Explanation:
// Job1 and Job3 can be done with
// maximum profit of 60 (20+40).

// Example 2:
// Input:
// N = 5
// Jobs = {(1,2,100),(2,1,19),(3,2,27),
//         (4,1,25),(5,1,15)}
// Output:
// 2 127
// Explanation:
// 2 jobs can be done with
// maximum profit of 127 (100+27).

// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(N)


// Constraints:
// 1 <= N <= 105
// 1 <= Deadline <= N
// 1 <= Profit <= 500

//🔴approach:
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<limits.h>
// using namespace std;

// struct Job 
// { 
//     int id;	 // Job Id 
//     int dead; // Deadline of job 
//     int profit; // Profit if job is over before or on deadline 
// };

// static bool compare(Job a, Job b) {
//     return a.profit > b.profit ;               // descending in profit wise
// }

// vector<int> JobScheduling(Job arr[], int n) { 

//     sort(arr, arr+n, compare) ;

//     int maxiDeadline = INT_MIN ;
//     for(int i=0; i<n; i++) {
//         maxiDeadline = max(maxiDeadline, arr[i].dead) ;
//     }

//     vector<int> schedule(maxiDeadline+1, -1) ;

//     int count = 0 ;
//     int maxProfit = 0 ;
//     for(int i=0; i<n; i++) {
//         int currProfit = arr[i].profit ;
//         int currJobId = arr[i].id ;
//         int currDead = arr[i].dead ;

//         for(int k = currDead; k>0; k--) {
//             if(schedule[k] == -1) {
//                 maxProfit += currProfit;
//                 schedule[k] = currJobId ;
//                 break ;
//             }
//         }
//     }

//     vector<int> ans ;
//     ans.push_back(count) ;
//     ans.push_back(maxProfit); 

//     return ans ;

// } 
//🔸time complexity:  O( N logn + N*k)
//🔸space complexity:  O(N)