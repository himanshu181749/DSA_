//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) { 
        
         vector<pair<int,int>>v;

        for(int i=0;i<n;++i){

            v.push_back({arr[i],i});

        }

        vector<int>f,g;

        for(int i=0;i<n;++i){

            f.push_back(v[i].first-v[i].second);

            g.push_back(v[i].first+v[i].second);

        }

        auto x = *min_element(f.begin(),f.end());

        auto y = *max_element(f.begin(),f.end());

        auto a = *min_element(g.begin(),g.end());

        auto b = *max_element(g.begin(),g.end());

        return (y-x)>=(b-a)?y-x:b-a;

 

    }
};

