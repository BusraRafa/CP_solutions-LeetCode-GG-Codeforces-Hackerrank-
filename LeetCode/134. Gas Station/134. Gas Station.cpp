class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_sum=0,cost_sum=0,total=0,idx=0;
        /*gas_sum=reduce(begin(gas),end(gas),0);
        cost_sum=reduce(begin(cost),end(cost),0);

        gas_sum=accumulate(begin(gas),end(gas),0);
        cost_sum=accumulate(begin(cost),end(cost),0);
       */ 
      for(int i=0;i<gas.size();i++){
            gas_sum=gas_sum+gas[i];
            cost_sum=cost_sum+cost[i];
        }
        if(gas_sum<cost_sum){
            return -1;
        }
        else if(gas_sum>=cost_sum){
            for(int i=0;i<gas.size();i++){
                    total=total+gas[i]-cost[i];
                    if(total<0){
                        total=0;
                        idx=i+1;
                    }
                }
              
            }
             return idx; 
        } 
    
};
//*******Applyied Brute FORCE**************(time limit exceed ofc)
/*class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current_gas=0,j,k;
        for(int i=0;i<gas.size();i++){
            if(gas[i]<cost[i]){
                continue;
                }
               j=(i+1)%gas.size();
                current_gas=gas[i]-cost[i]+gas[j];
                while(j!=i){
                if(current_gas<cost[j]){
                    break;}
                    int current_cost=cost[j];
                    j=(j+1)%gas.size();
                    int next_gas=gas[j];
                    current_gas=current_gas-current_cost+next_gas;    
            }
            if(j==i)
                return i;}
            return -1;
        }
};
*/
