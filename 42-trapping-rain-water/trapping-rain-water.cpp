class Solution {
public:

  
   int trap(vector<int>&h ){
       int water=0;
       vector<int> pre(h.size(),-1);
       vector<int> pst(h.size(),-1);
       

      pre[0] = h[0];
      int n=h.size();

   for(int i=1;i<h.size();i++)
         {pre[i] = max(pre[i-1], h[i]);
         }
    pst[n-1] = h[n-1];

for(int i=n-2;i>=0;i--){
    pst[i] = max(pst[i+1], h[i]);
}

   
       for(int i=1;i<h.size()-1;++i){
         
               int m = min(pst[i],pre[i]);
               water+=m-h[i];

         


       }

       return water;
   }
    
};