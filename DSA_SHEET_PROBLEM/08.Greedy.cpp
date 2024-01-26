//                      🔴🔴 GREEDY 🔴🔴

// What is Greedy Algorithm?
// Greedy Algorithm is defined as a method for solving optimization problems by taking decisions
// that result in the most evident and immediate benefit irrespective of the final outcome.
//  It works for cases where minimization or maximization leads to the required solution.

// 🔘Characteristics of Greedy algorithm
// For a problem to be solved using the Greedy approach, it must follow a few major characteristics:

// 🔸There is an ordered list of resources(profit, cost, value, etc.)
// 🔸Maximum of all the resources(max profit, max value, etc.) are taken.
// 🔸For example, in the fractional knapsack problem, the maximum value/weight is taken first according to available capacity.

// 🔘Use of the greedy algorithm:-
// 🔸The greedy algorithm is a method used in optimization problems where the goal is to make the locally
//    optimal choice at each stage with the hope of finding a global optimum. It is called “greedy” because
//    it tries to find the best solution by making the best choice at each step, without considering future
//    steps or the consequences of the current decision.

// 🔘Some common use cases for the greedy algorithm include:

// 🔸Scheduling and Resource Allocation: The greedy algorithm can be used to schedule jobs or allocate resources in an efficient manner.
// 🔸Minimum Spanning Trees: The greedy algorithm can be used to find the minimum spanning tree of a graph,
//   which is the subgraph that connects all vertices with the minimum total edge weight.
// 🔸Coin Change Problem: The greedy algorithm can be used to make change for a given amount with the minimum
//   number of coins, by always choosing the coin with the highest value that is less than the remaining amount to be changed.
// 🔸Huffman Coding: The greedy algorithm can be used to generate a prefix-free code for data compression,
//   by constructing a binary tree in a way that the frequency of each character is taken into consideration.

// 🔸It’s important to note that not all optimization problems can be solved by a greedy algorithm, and
// there are cases where the greedy approach can lead to suboptimal solutions. However, in many cases,
// the greedy algorithm provides a good approximation to the optimal solution and is a useful tool for solving optimization problems quickly and efficiently.

// 🔘All greedy algorithms follow a basic structure:
// 🔸Declare an empty result = 0.
// 🔸We make a greedy choice to select, If the choice is feasible add it to the final result.
// 🔸return the result.

// Why choose Greedy Approach?
// The greedy approach has a few tradeoffs, which may make it suitable for optimization.
// One prominent reason is to achieve the most feasible solution immediately. In the activity selection problem
// if more activities can be done before finishing the current activity, these activities can be performed within
// the same time.  Another reason is to divide a problem recursively based on a condition, with no need to
// combine all the solutions. In the activity selection problem, the “recursive division” step is achieved by
// scanning a list of items only once and considering certain activities.
//
//

//                      //❓Question: N meetings in one room

// There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i])
// where start[i] is start time of meeting i and end[i] is finish time of meeting i.
// What is the maximum number of meetings that can be accommodated in the meeting room
// when only one meeting can be held in the meeting room at a particular time?

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

// Your Task :
// You don't need to read inputs or print anything. Complete the function maxMeetings() that takes two arrays start[] and end[] along with their size N as input parameters and returns the maximum number of meetings that can be held in the meeting room.

// Expected Time Complexity : O(N*LogN)
// Expected Auxilliary Space : O(N)

// Constraints:
// 1 ≤ N ≤ 105
// 0 ≤ start[i] < end[i] ≤ 105

// 🔴approach :
// class Solution{
// public:
//     static bool cmp(pair<int,int> a, pair<int,int> b){
//         return a.second < b.second;
//     }

//     int maxMeetings(int start[], int end[], int n)
//     {
//         vector<pair<int,int>> temp;
//         for(int i=0; i<n; i++){
//             pair<int,int> p = make_pair(start[i], end[i]);
//             temp.push_back(p);
//         }

//         sort(temp.begin(), temp.end(), cmp);

//         int count = 1;
//         int meetEnd = temp[0].second;

//         for(int i=1; i<n; i++){
//             if(temp[i].first > meetEnd){
//                 count++;
//                 meetEnd = temp[i].second;
//             }
//         }

//         return count;
//     }
// };
// 🔸time complexity: O(N* logN)
// 🔸space complexity: O(N)
//

//                   //❓Question: Maximum meeting in One room

// There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i])
// where S[i] is the start time of meeting i and F[i] is the finish time of meeting i.
// The task is to find the maximum number of meetings that can be accommodated in the meeting room.
// You can accommodate a meeting if the start time of the meeting is strictly greater than
// the finish time of the previous meeting. Print all meeting numbers.

// Note: If two meetings can be chosen for the same slot then choose meeting that finishes earlier.

// Example 1:
// Input:
// N = 6
// S = {1,3,0,5,8,5}
// F = {2,4,6,7,9,9}
// Output:
// {1,2,4,5}
// Explanation:
// We can attend the 1st meeting from (1 to 2), then the 2nd meeting from (3 to 4),
// then the 4th meeting from (5 to 7), and the last meeting we can attend is the 5th from (8 to 9).
//  It can be shown that this is the maximum number of meetings we can attend.

// Example 2:
// Input:
// N = 1
// S = {3}
// F = {7}
// Output:
// {1}
// Explanation:
// Since there is only one meeting, we can attend the meeting.
// Your Task:

// You don't need to read input or print anything. Your task is to complete the function maxMeetings() which takes the arrays S, F, and its size N as inputs and returns the meeting numbers we can attend in sorted order.

// Expected Time Complexity: O(N*log(N))
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 105
// 0 <= S[i] <= F[i] <= 109
// Sum of N over all test cases doesn't exceeds 106

// 🔴appraoch :
// class Solution{
// public:
//     static bool cmp(pair<int, pair<int,int>> a, pair<int,pair<int,int>> b){
//         return a.second.second < b.second.second;
//     }
//     vector<int> maxMeetings(int n,vector<int> &S,vector<int> &F){
//         vector<pair<int,pair<int,int>>> temp;

//         for(int i=0; i<n; i++){
//             temp.push_back({i+1, {S[i], F[i]}});
//         }

//         sort(temp.begin(), temp.end(), cmp);

//         vector<int> ans;
//         ans.push_back(temp[0].first);
//         int meetF = temp[0].second.second;

//         for(int i=1; i<n; i++){
//             if(temp[i].second.first > meetF){
//                 ans.push_back(temp[i].first);
//                 meetF = temp[i].second.second;
//             }
//         }

//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };
// 🔸time complexity: O(N* logN)
// 🔸space complexity: O(N)
//

//                   //❓Question: Job Sequencing Problem

// Given a set of N jobs where each jobi has a deadline and profit associated with it.
// Each job takes 1 unit of time to complete and only one job can be scheduled at a time.
// We earn the profit associated with job if and only if the job is completed by its deadline.
// Find the number of jobs done and the maximum profit.

// Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.
// Deadline of the job is the time before which job needs to be completed to earn the profit.

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

// Your Task :
// You don't need to read input or print anything. Your task is to complete the function JobScheduling() which takes an integer N and an array of Jobs(Job id, Deadline, Profit) as input and returns the count of jobs and maximum profit as a list or vector of 2 elements.

// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(N)

// Constraints:
// 1 <= N <= 105
// 1 <= Deadline <= N
// 1 <= Profit <= 500

// 🔴Appraoch :
//  class Solution {
//  public:
//      static bool cmp(Job a, Job b){
//          return a.profit > b.profit;
//      }
//
//      vector<int> JobScheduling(Job arr[], int n) {
//          sort(arr, arr+n, cmp);

//         int maxDeadline = INT_MIN;
//         for(int i=0; i<n; i++){
//             maxDeadline = max(maxDeadline, arr[i].dead);
//         }

//         vector<int> deadline(maxDeadline+1, -1);
//         int count = 0;
//         int maxProfit = 0;

//         for(int i=0; i<n; i++){
//             int currProfit = arr[i].profit;
//             int currDeadline = arr[i].dead;
//             int currId = arr[i].id;

//             for(int k=currDeadline; k>0; k--){
//                 if(deadline[k] == -1){
//                     count++;
//                     maxProfit += currProfit;
//                     deadline[k] = currId;
//                     break;
//                 }
//             }
//         }

//         return {count, maxProfit};
//     }
// };
// 🔸time complexity: O(N*logN + N*k)
// 🔸space complexity: O(N)
//

//                    //❓Question: Huffman Encoding

// Given a string S of distinct character of size N and their corresponding frequency f[ ]
// i.e. character S[i] has f[i] frequency. Your task is to build the Huffman tree print all
// the huffman codes in preorder traversal of the tree.
// Note: While merging if two nodes have the same value, then the node which occurs at
// first will be taken on the left of Binary Tree and the other one to the right, otherwise
// Node with less value will be taken on the left of the subtree and other one to the right.

// Example 1:
// S = "abcdef"
// f[] = {5, 9, 12, 13, 16, 45}
// Output:
// 0 100 101 1100 1101 111
// Explanation:
// Steps to print codes from Huffman Tree
// HuffmanCodes will be:
// f : 0
// c : 100
// d : 101
// a : 1100
// b : 1101
// e : 111
// Hence printing them in the PreOrder of Binary Tree.

// Your Task:
// You don't need to read or print anything. Your task is to complete the function huffmanCodes() which takes the given string S, frequency array f[ ] and number of characters N as input parameters and returns a vector of strings containing all huffman codes in order of preorder traversal of the tree.

// Expected Time complexity: O(N * LogN)
// Expected Space complexity: O(N)

// Constraints:
// 1 ≤ N ≤ 26

// 🔴approach :
// class Node{
// public:
//   int data;
//   Node* left;
//   Node* right;

//   Node(int d){
//       data = d;
//       left = NULL;
//       right = NULL;
//   }
// };

// class cmp{
//   public:
//   bool operator()(Node* a, Node* b){
//       return a->data > b->data;
//   }
// };

// class Solution
// {
// 	public:
//     void preorderTraverse(Node* root, vector<string>& ans, string temp){
//          if(root->left==NULL && root->right == NULL){
//              ans.push_back(temp);
//              return;
//          }

//          preorderTraverse(root->left, ans, temp+'0');
//          preorderTraverse(root->right, ans, temp+'1');
//     }

// 		vector<string> huffmanCodes(string S,vector<int> f,int n)
// 		{
// 		    priority_queue<Node*, vector<Node*>, cmp> pq;

// 		    for(int i=0; i<n; i++){
// 		        Node* temp = new Node(f[i]);
// 		        pq.push(temp);
// 		    }

// 		    while(pq.size() > 1){
// 		        Node* left = pq.top();
// 		        pq.pop();

// 		        Node* right = pq.top();
// 		        pq.pop();

// 		        Node* newNode = new Node(left->data + right->data);
// 		        newNode->left = left;
// 		        newNode->right = right;
// 		        pq.push(newNode);
// 		    }

// 		    Node* root = pq.top();
// 		    vector<string> ans;
// 		    string temp = "";
// 		    preorderTraverse(root, ans, temp);
// 		    return ans;
// 		}
// };
// 🔸time complexity: O(N*logN)
// 🔸space complexity: O(N)
//

//                     //❓Question: Water Connection Problem

// There are n houses and p water pipes in Geek Colony. Every house has at most one pipe
// going into it and at most one pipe going out of it. Geek needs to install pairs of tanks
// and taps in the colony according to the following guidelines.
// 1. Every house with one outgoing pipe but no incoming pipe gets a tank on its roof.
// 2. Every house with only one incoming and no outgoing pipe gets a tap.
// The Geek council has proposed a network of pipes where connections are denoted by three input values:
// ai, bi, di denoting the pipe of diameter di from house ai to house bi.
// Find a more efficient way for the construction of this network of pipes.
// Minimize the diameter of pipes wherever possible.
// Note: The generated output will have the following format. The first line will contain t,
// denoting the total number of pairs of tanks and taps installed. The next t lines contain three
// integers each: house number of tank, house number of tap, and the minimum diameter of pipe between them.

// Example 1:
// Input:
// n = 9, p = 6
// a[] = {7,5,4,2,9,3}
// b[] = {4,9,6,8,7,1}
// d[] = {98,72,10,22,17,66}
// Output:
// 3
// 2 8 22
// 3 1 66
// 5 6 10
// Explanation:
// Connected components are
// 3->1, 5->9->7->4->6 and 2->8.
// Therefore, our answer is 3
// followed by 2 8 22, 3 1 66, 5 6 10.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function solve()
// which takes an integer n(the number of houses), p(the number of pipes),the array a[] , b[] and d[]
// (where d[i] denoting the diameter of the ith pipe from the house a[i] to house b[i]) as input parameter
// and returns the array of pairs of tanks and taps installed i.e ith element of the array contains three integers:
// house number of tank, house number of tap and the minimum diameter of pipe between them. Note that,
// returned array must be sorted based on the house number containing a tank (i.e. smaller house number should come before a large house number).

// Expected Time Complexity: O(n+p)
// Expected Auxiliary Space: O(n+p)

// Constraints:
// 1<=n<=20
// 1<=p<=50
// 1<=a[i],b[i]<=20
// 1<=d[i]<=100

// 🔴Approach:
//  class Solution
//  {
//      public:
//         void dfs(int vertex,pair<int,int> graph[], int &last, int &mpipe){

//         pair<int, int> child = graph[vertex];
//         if(child.first==0 && child.second==0) return;
//         mpipe = min(mpipe, child.second);
//         last=child.first;
//         dfs(child.first,graph,last, mpipe);
//     }

//     vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d) {
//         pair<int,int> graph[n+1];
//         vector<bool> present(n+1,false);
//         vector<int> indegree(n+1,0);

//         for(int i=0; i<p; ++i){
//             ++indegree[b[i]];
//             graph[a[i]]= {b[i],d[i]};
//             present[a[i]]=true;
//             present[b[i]]=true;
//         }

//         vector<vector<int>> ans;
//         for(int i=1; i<=n; ++i){
//             if(indegree[i]==0 && present[i]){
//                 int last;
//                 int mpipe= INT_MAX;
//                 dfs(i, graph, last, mpipe);
//                 ans.push_back({i,last,mpipe});
//             }
//         }
//         return ans;
//     }
// }
// 🔸time complexity: O(N+P)
// 🔸space complexity: O(N+P)

// 🔴Approach 1:
//  void dfs(int node, vector<pair<int,int>>adj[], int& end, int&mw, int vis[]) {
//          vis[node] = 1;

//         for(auto i:adj[node]){
//             if(vis[i.first]==0){
//                 mw = min(mw, i.second);
//                 end = i.first;
//                 dfs(i.first, adj, end, mw, vis);
//             }
//         }
//     }

//     vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> diam)
//     {
//         int vis[n+1];
//         memset(vis, 0, sizeof(vis));
//         vector<vector<int>> ans;
//         vector<int> in(n+1,0);
//         vector<int> out(n+1, 0);
//         vector<pair<int,int>> adj[n+1];

//         for(int i=0; i<p; i++){
//             out[a[i]]=1;
//             in[b[i]]=1;
//             adj[a[i]].push_back({b[i], diam[i]});
//         }

//         for(int i=1; i<=n; i++){
//             if(in[i]==0 && out[i]==1 && vis[i]==0){
//                 int start = i;
//                 int end;
//                 int minWeight = INT_MAX;
//                 dfs(i, adj, end, minWeight, vis);

//                 ans.push_back({start, end, minWeight});
//             }
//         }

//         return ans;
//     }
// };
// 🔸time complexity: O(P + N*N)
// 🔸space complexity: O(4N)

//                      ❓Question: Fractional Knapsack

// Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
// Note: Unlike 0/1 knapsack, you are allowed to break the item here.

// Example 1:

// Input:
// N = 3, W = 50
// value[] = {60,100,120}
// weight[] = {10,20,30}
// Output:
// 240.000000
// Explanation:
// Take the item with value 60 and weight 10, value 100 and weight 20 and split the third item with value 120 and weight 30, to fit it into weight 20. so it becomes (120/30)*20=80, so the total weight becomes 60+100+80.0=240.0
// Thus, total maximum value of item we can have is 240.00 from the given capacity of sack.
// Example 2:

// Input:
// N = 2, W = 50
// value[] = {60,100}
// weight[] = {10,20}
// Output:
// 160.000000
// Explanation:
// Take both the items completely, without breaking.
// Total maximum value of item we can have is 160.00 from the given capacity of sack.
// Your Task :
// Complete the function fractionalKnapsack() that receives maximum capacity , array of structure/class and size N and returns a double value representing the maximum value in knapsack.
// Note: The details of structure/class is defined in the comments above the given function.

// Expected Time Complexity : O(NlogN)
// Expected Auxilliary Space: O(1)

// Constraints:
// 1 <= N <= 105
// 1 <= W <= 109
// 1 <= valuei, weighti <= 104

// 🔴Appraoch :
// class Solution
// {
//     public:
//     static bool greaterItem(Item one, Item two) {
//         double itemOne = double(one.value) / double(one.weight);
//         double itemTwo = double(two.value) / double(two.weight);
//         return itemOne > itemTwo;
//     }
//     //Function to get the maximum total value in the knapsack.
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         sort(arr, arr+n, greaterItem);
//         double sum = 0.0;
//         for(int i = 0; i < n; i++) {
//             if(W > arr[i].weight) {
//                 sum += arr[i].value;
//                 W -= arr[i].weight;
//             } else {
//                 sum += double(arr[i].value) * W/double(arr[i].weight);
//                 break;
//             }
//         }
//         return sum;
//     }
// };
// 🔸time complexity: O(N*logn)
// 🔸space complexity: O(1)

// 🔴 approach 1:
//  class Solution
//  {
//      public:
//      static bool cmp(pair<double, Item>a, pair<double, Item> b){
//          return a.first > b.first;
//      }

//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//       vector<pair<double, Item>> V;

//       for(int i=0; i<n; i++){
//           double perUnitValue = double(arr[i].value) / double(arr[i].weight);
//           pair<double, Item> p = make_pair(perUnitValue, arr[i]);
//           V.push_back(p);
//       }

//       sort(V.begin(), V.end(), cmp);

//       double totalValue = 0;

//       for(int i=0; i<n; i++){
//           if(V[i].second.weight > W){   // value is greater than weight then take only fraction
//               totalValue += W*V[i].first;
//               W = 0;
//           }
//           else{
//               totalValue += V[i].second.value;
//               W -= V[i].second.weight;
//           }
//       }

//       return totalValue;
//     }
// };
// 🔸time complexity: O(N*logn)
// 🔸space complexity: O(1)

//                  ❓Question: Choose and Swap

// You are given a string s of lower case english alphabets. You can choose any two characters in the string and replace all the occurences of the first character with the second character and replace all the occurences of the second character with the first character. Your aim is to find the lexicographically smallest string that can be obtained by doing this operation at most once.

// Example 1:
// Input:
// A = "ccad"
// Output: "aacd"
// Explanation:
// In ccad, we choose a and c and after
// doing the replacement operation once we get,
// aacd and this is the lexicographically
// smallest string possible.

// Example 2:
// Input:
// A = "abba"
// Output: "abba"
// Explanation:
// In abba, we can get baab after doing the
// replacement operation once for a and b
// but that is not lexicographically smaller
// than abba. So, the answer is abba.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function chooseandswap() which takes the string A as input parameters and returns the lexicographically smallest string that is possible after doing the operation at most once.

// Expected Time Complexity: O(|A|) length of the string A
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<= |A| <=105

// 🔴Appraoch :
// class Solution{
// public:
//     string chooseandswap(string a){
//         map<char, bool> visited;
//         for(char ch: a){
//             visited[ch] = true;
//         }

//         for(char ch: a){
//             for(char i='a'; i<ch; i++){
//                 if(visited[i]){
//                     for(char &chch: a){
//                         if(chch == i)
//                             chch = ch;
//                         else if(chch == ch)
//                             chch = i;
//                     }
//                     return a;
//                 }
//             }
//             visited[ch] = false;
//         }
//         return a;
//     }
// };
// 🔸time complexity: O(2N * 26)
// 🔸space complexity: O(n)