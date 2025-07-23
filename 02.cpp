
// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// class Solution {
//   public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfs(vector<vector<int>> &adj) {
        
//         int V = adj.size();
//         vector<int> bfsResult;
//         vector<bool> visited(V, false);
//         queue<int> q;
        
//         q.push(0);
//         visited[0] = true;
        
//         while(!q.empty()){
//             int temp = q.front();
//             q.pop();
//             bfsResult.push_back(temp);
            
//             //visit all unvisited neighbours
            
//             for(auto neighbour : adj[temp]){
//             if(!visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour] = true;
//             }
//             }
//         }
//         return bfsResult;
        
        
//     }
// };


// ------------------------
// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// class Solution {
//   public:
  
//   void dfsHelper(int node,vector<vector<int>>& adj, vector<bool> &visited, vector<int> & result){
//       visited[node] = true;
//       result.push_back(node);
      
//       //visit all unvisited neighbpurs
//       for(int neighbour : adj[node]){
//           if(!visited[neighbour]){
//               dfsHelper(neighbour, adj, visited, result);
//           }
//       }
//   }
//     vector<int> dfs(vector<vector<int>>& adj) {
        
//         int V = adj.size();
//         vector<bool> visited(V, false);
//         vector<int> result;
        
//         dfsHelper(0, adj, visited, result);
//         return result;
        
//     }
// };

//-------------------------

// https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1


// class Solution {
//   public:
  
//   bool dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &rec){
      
//       visited[node] = true;
//       rec[node] = true;
      
//       for(int neighbor : adj[node]){
//           if(!visited[neighbor]){
//               if(dfs(neighbor, adj, visited, rec)){
//                   return true; //cycle detected in deeper path
//               }
              
//           }
//           else if(rec[neighbor]){
//               //if neighbor is in rec vector -> cycle
//               return true;
//           }
//       }
//       rec[node] = false;
//       return false;
//   }
  
//     bool isCyclic(int V, vector<vector<int>> &edges) {
//         //Convert edge list to adjcency list
//         vector<vector<int>> adj(V);
//         for(auto edge : edges){
//             int u = edge[0];
//             int v = edge[1];
            
//             adj[u].push_back(v); //directed edge u -> v
            
//         }
        
//         //Intialize visited and rec
//         vector<bool> visited(V, false);
//         vector<bool> rec(V, false);
        
//         //run DFS from all unvisited nodes
//         for(int i = 0; i < V; i++){
//             if(!visited[i]){
//                 if(dfs(i, adj, visited, rec)){
//                     return true; //cycle found
//                 }
//             }
            
//         }
//         return false;
        
//     }
// };