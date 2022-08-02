class Solution
{
public:

	void dfs(int node, stack<int>&s, vector<int>adj[], vector<int>&vis)
	{
	   vis[node]=1;

	   for(auto it : adj[node])
	   {
	       if(!vis[it])
	         dfs(it,s,adj,vis);
	   }
	   s.push(node);
	}

	vector<int> topoSort(int V, vector<int> adj[])
	{
	    // code here
	   vector<int>vis(V,0);
	   stack<int>st;

	   for(int i=0;i<V;i++)
	   {
	       if(!vis[i])
	       {
	           dfs(i,st,adj,vis);
	       }
	   }

	   vector<int>ans;

	   while(!st.empty())
	   {
	       int curr = st.top();
	       st.pop();
	       ans.push_back(curr);
	   }

	   return ans;
	}
}
