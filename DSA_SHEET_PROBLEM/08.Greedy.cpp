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

//                  //❓Question: Maximum trains for which stoppage can be provided

// You are given n-platform and two main running railway tracks for both directions.
// Trains that need to stop at your station must occupy one platform for their stoppage and the
// trains which need not stop at your station will run away through either of the main track without stopping.
// Now, each train has three values first arrival time, second departure time, and
// the third required platform number. We are given m such trains you have to tell the maximum number
// of trains for which you can provide stoppage at your station.

// Note: Trains are given in the form of {arrival time, departure time, platform Number} and
// the arrival time and departure time are represented by a 4-digit integer as 1030 will
// represent 10:30 and 912 will represent 09:12 (24 hour Clock).

// Example 1:
// Input : n = 3, m = 6
// Train no.|  Arrival Time |Dept. Time | Platform No.
//     1    |   10:00       |  10:30    |    1
//     2    |   10:10       |  10:30    |    1
//     3    |   10:00       |  10:20    |    2
//     4    |   10:30       |  12:30    |    2
//     5    |   12:00       |  12:30    |    3
//     6    |   09:00       |  10:05    |    1
// Output : Maximum Stopped Trains = 5
// Explanation : If train no. 1 will left
// to go without stoppage then 2 and 6 can
// easily be accommodated on platform 1.
// And 3 and 4 on platform 2 and 5 on platform 3.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function maxStop() which takes two integers n no of platforms, m number of trains, and array trains[] as input parameter and returns an integer.

// Expected Time Complexity: O(M*logM)
// Expected Auxiliary Space: O(M)

// Constraints:

// 1 <= N <= 100
// 1 <= M <= 104

// 🔴approach :
// struct comp {
//     bool operator()(const vector<int>& a, const vector<int>& b) {
//         if (a[1] == b[1]) {
//             return a[3] <= b[3];
//         }
//         return a[1] <= b[1];
//     }
// };

// class Solution {
//   public:
//     int maxStop(int n, int m, vector<vector<int>> &trains) {
//             for(int i=0; i<m; i++)
//             trains[i].push_back(i);

//         sort(trains.begin(), trains.end(), comp());
//         vector<int> platform(n+1, -1);

//         int ans = 0;

//         for(int i=0; i<m; i++) {
//             if(platform[trains[i][2]] <= trains[i][0]) {
//                 ans++;
//                 platform[trains[i][2]] = trains[i][1];
//             }
//         }

//         return ans;
//     }
// };
// 🔸time complexity: O(m*logM)
// 🔸space complexity: O(M)

//              ❓ Question: Minimum Platform

// Given arrival and departure times of all trains that reach a railway station.
// Find the minimum number of platforms required for the railway station so that no train is kept waiting.
// Consider that all the trains arrive on the same day and leave on the same day.
// Arrival and departure time can never be the same for a train but we can have arrival time
// of one train equal to departure time of the other. At any given instance of time,
// same platform can not be used for both departure of a train and arrival of another train.
// In such cases, we need different platforms.

// Example 1:
// Input: n = 6
// arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
// dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
// Output: 3
// Explanation:
// Minimum 3 platforms are required to
// safely arrive and depart all trains.

// Example 2:
// Input: n = 3
// arr[] = {0900, 1100, 1235}
// dep[] = {1000, 1200, 1240}
// Output: 1
// Explanation: Only 1 platform is required to
// safely manage the arrival and departure
// of all trains.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function
//  findPlatform() which takes the array arr[] (denoting the arrival times),
// array dep[] (denoting the departure times) and the size of the array as inputs and returns the minimum number of
// platforms required at the railway station such that no train waits.
// Note: Time intervals are in the 24-hour format(HHMM) , where the first two characters represent hour
// (between 00 to 23 ) and the last two characters represent minutes (this will be <= 59 and >= 0).

// Expected Time Complexity: O(nLogn)
// Expected Auxiliary Space: O(n)

// Constraints:
// 1 ≤ n ≤ 50000
// 0000 ≤ A[i] ≤ D[i] ≤ 2359

// 🔴appraoch :
// class Solution{
//     public:
//     int findPlatform(int arr[], int dep[], int n)
//     {
//         sort(arr, arr+n);
//         sort(dep, dep+n);

//         int platform = 0;
//         int arriveIndex = 0;
//         int departIndex = 0;

//         while(arriveIndex < n && departIndex < n){
//             if(arr[arriveIndex] <= dep[departIndex]){
//                 platform++;
//             }
//             else{
//                 departIndex++;
//             }

//             arriveIndex++;
//         }

//         return platform ;
//     }
// };
// 🔸time complexity: O(n*logn)
// 🔸space complexity: O(1)

//              ❓Question: Buy Maximum Stocks if i stocks can be bought on i-th day

// In a stock market, there is a product with its infinite stocks. The stock prices are given for N days,
// where price[i] denotes the price of the stock on the ith day.
// There is a rule that a customer can buy at most i stock on the ith day.
// If the customer has an amount of k amount of money initially.
// The task is to find out the maximum number of stocks a customer can buy.

// Example 1:

// Input:
// price = [10,7,19]
// k = 45
// Output:
// 4
// Explanation:
// A customer purchases 1 stock on day 1, 2 stocks on day 2 and 1 stock on day 3 for 10, 7 * 2 = 14 and 19
// respectively. Hence, total amount is 10 + 14 + 19 = 43 and number of stocks purchased is 4.

// Example 2:
// Input:
// price = [7,10,4]
// k = 100
// Output:
// 6
// Explanation:
// Buy on all 3 days.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function buyMaximumProducts()
// which takes an array price and an integer k and returns an integer as output.

// Expected Time Complexity: O(NlogN)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= N <= 104
// 1 <= price[i] <= 104
// 1 <= k <= 104

// 🔴appraoch :
// class Solution {
// public:
//     int buyMaximumProducts(int n, int k, int price[]){
//         vector<pair<int,int>> temp;
//         for(int i=0; i<n; i++){
//             temp.push_back({price[i], i+1});
//         }
//         sort(temp.begin(), temp.end());

//         int count = 0;
//         for(int i=0; i<n; i++){
//             while(temp[i].second > 0){
//                 if(k - temp[i].first >= 0){
//                     k -= temp[i].first;
//                     count++;
//                 }
//                 else{
//                     break;
//                 }

//                 temp[i].second--;
//             }

//             if(temp[i].second != 0){
//                 break;
//             }
//         }

//         return count;
//     }
// };

// 🔸time complexity: O(n*logN)
// 🔸space complexity: O(N)

//          ❓Question: Shop in a Candy Store

// In a candy store, there are N different types of candies available and the prices of .
// all the N different types of candies are provided to you.
// You are now provided with an attractive offer.
// For every candy you buy from the store and get K other candies ( all are different types ) for free.
// Now you have to answer two questions. Firstly, you have to find what is the minimum amount of money
// you have to spend to buy all the N different candies. Secondly, you have to find what is the maximum
// amount of money you have to spend to buy all the N different candies.
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

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function candyStore() which takes the array candies[], its size N and an integer K as input parameters and returns the minimum amount and maximum amount of money to buy all candies according to the offer.

// Expected Time Complexity: O(NLogN)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 100000
//  0 <= K <= N-1
// 1 <= candies[i] <= 10000

// 🔴appraoch :
// class Solution
// {
// public:
//     vector<int> candyStore(int candies[], int N, int K)
//     {
//         sort(candies, candies+N);

//         int mini=0;
//         int numMin=N;

//         for(int i=0;i<numMin;i++){
//             mini += candies[i];
//             numMin -= K;
//         }

//         int maxi=0;
//         int numMax=0;

//         for(int i=N-1;i>=numMax;i--){
//             maxi += candies[i];
//             numMax += K;
//         }

//         return {mini, maxi} ;
//     }
// };
//  🔸time complexity: O(n*logn)
//  🔸space complexity: O(1)

//                  ❓ Question: Minimize cash flow

// Given a number of friends who have to give or take some amount of money from one another.
// Design an algorithm by which the total cash flow among all the friends is minimized.

// Example 1:
// Input:
// N=3
// transaction [][]={{0,100,0}, {0,0,100}, {100,0,0}}
// Output:
// transaction [][]={{0,0,0},{0,0,0},{0,0,0}}
// Explanation:
// Since friend one has to give friend two which has to give friend three and which in turn has to give one. So it is better than no one will do anything to anyone.

// Example 2:
// Input:
// N=3
// transaction [][]={{0,100,0},{0,0,200},{0,0,0}}
// Output:
// transaction [][]={0,0,100},{0,0,100},{0,0,0}
// Explanation:
// The net flow is minimized.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minCashFlow() which takes the transaction array and number of friends as input parameters and returns the new transaction array as output;.

// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(N*N)

// Constraints:
// 1 <= N <= 1000
// 0 <= transaction[i][j] <= 1000

// 🔴approach :
// class Solution{
//     public:
//      int getMin(vector<int> &amount){
//         int minInd = 0;
//         for(int i = 1; i<amount.size();i++){
//             if(amount[i] < amount[minInd]){
//                 minInd = i;
//             }
//         }
//         return minInd;
//     }

//     int getMax(vector<int> &amount){
//         int maxInd = 0;
//         for(int i = 1; i<amount.size();i++){
//             if(amount[i] > amount[maxInd]){
//                 maxInd = i;
//             }
//         }
//         return maxInd;
//     }

//       void solve(vector<int> &amount,vector<vector<int>> &ans){
//         int maxC = getMax(amount);
//         int maxD = getMin(amount);
//         if(amount[maxC] == 0 && amount[maxD] == 0){
//             return ;
//         }
//         int mini = min(-amount[maxD],amount[maxC]);
//         amount[maxC]-=mini;
//         amount[maxD]+=mini;
//         ans[maxD][maxC] = mini;
//         solve(amount,ans);
//     }

//         vector<vector<int>> minCashFlow(vector<vector<int>> &arr, int n)
//         {
//            vector<int> amount(n,0);
//            vector<vector<int>> ans(n,vector<int>(n,0));

//             for(int i = 0 ; i <n; i++){
//                 for(int j = 0; j<n; j++){
//                     amount[i]+=(arr[j][i]-arr[i][j]);
//                 }
//             }

//             solve(amount,ans);
//             return ans;
//         }
// };
//  🔸time complexity: O(N*N)
//  🔸space complexity: O(N*N)

//          ❓: Minimum Cost to cut a board into squares

// A board of length M and width N is given. The task is to break this board into M * N
// squares such that cost of breaking is minimum. The cutting cost for each edge will be
// given for the board in two arrays X[] and Y[]. In short, you need to choose such a sequence
// of cutting such that cost is minimized. Return the minimized cost.

// Example 1:
// Input:
// M = 6. N = 4
// X[] = {2, 1, 3, 1, 4}
// Y[] = {4, 1, 2}
// Output: 42
// Explanation:
// For above board optimal way to cut into square is:
// Total minimum cost in above case is 42. It is
// evaluated using following steps.
// Initial Value : Total_cost = 0
// Total_cost = Total_cost + edge_cost * total_pieces
// Cost 4 Horizontal cut:      Cost = 0 + 4*1 = 4
// Cost 4 Vertical cut:        Cost = 4 + 4*2 = 12
// Cost 3 Vertical cut:        Cost = 12 + 3*2 = 18
// Cost 2 Horizontal cut:      Cost = 18 + 2*3 = 24
// Cost 2 Vertical cut:        Cost = 24 + 2*3 = 30
// Cost 1 Horizontal cut:      Cost = 30 + 1*4 = 34
// Cost 1 Vertical cut:        Cost = 34 + 1*4 = 38
// Cost 1 Vertical cut:        Cost = 38 + 1*4 = 42

// Example 2:
// Input:
// M = 4, N = 4
// X[] = {1, 1, 1}
// Y[] = {1, 1, 1}
// Output: 15
// Explanation:

// For above board optimal way to cut into square is:
// Total minimum cost in above case is 15.
// It is evaluated using following steps.
// Initial Value :
// Total_cost = 0 Total_cost = Total_cost + edge_cost * total_pieces
// Cost 1 Horizontal cut: Cost = 0 + 1*1 = 1
// Cost 1 Horizontal cut: Cost = 1 + 1*1 = 2
// Cost 1 Horizontal cut: Cost = 2 + 1*1 = 3
// Cost 1 Vertical cut:   Cost = 3 + 1*4 = 7
// Cost 1 Vertical cut:   Cost = 7 + 1*4 = 11
// Cost 1 Vertical cut:   Cost = 11 + 1*4 = 15

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minimumCostOfBreaking() which takes a string S and returns an integer as output.

// Expected Time Complexity: O(NlogN + MlogM)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2 <= N, M <= 105

// 🔴approach : Greedy
// class Solution {
// public:

//     int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){

//         sort(X.begin(),X.end(),greater<int>());
//         sort(Y.begin(),Y.end(),greater<int>());

//         int v=1,h=1;

//         int i=0,j=0,cost = 0;
//         while (i<X.size() && j<Y.size()) {
//             if (X[i] >= Y[j]) {
//                 cost += (X[i]*h);
//                 v++;
//                 i++;
//             } else {
//                 cost += (Y[j]*v);
//                 h++;
//                 j++;
//             }
//         }

//         while (i<X.size()) {
//             cost += (X[i]*h);
//             v++;
//             i++;
//         }

//         while (j<Y.size()) {
//             cost += (Y[j]*v);
//             h++;
//             j++;
//         }

//         return cost;
//     }
// };

//  🔸time complexity: O(N*Logn + M*logn)
//  🔸space complexity: O(1)

//              ❓: Check if it is possible to survive on Island

// Geekina got stuck on an island. There is only one shop on this island and it is open on all
// days of the week except for Sunday. Consider following constraints:
// N – The maximum unit of food you can buy each day.
// S – Number of days you are required to survive.
// M – Unit of food required each day to survive.
// Currently, it’s Monday, and she needs to survive for the next S days.
// Find the minimum number of days on which you need to buy food from the shop so that she can survive the next S days, or determine that it isn’t possible to survive.

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
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function minimumDays() which takes S, N, and M as input parameters and returns the minimum number of days Geekina needs to buy food. Otherwise, returns -1 if she cannot survive.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N, S ≤ 50
// 1 ≤ M ≤ 30

// 🔴approach :
//  class Solution{
//  public:
//      int minimumDays(int S, int N, int M){
//          // code here
//      int Totalsunday = S/7 ;

//     int buyingDays = S - Totalsunday ;
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
//     }
// };
// 🔸time complexity: O(1)
// 🔸space complexity: O(1)
