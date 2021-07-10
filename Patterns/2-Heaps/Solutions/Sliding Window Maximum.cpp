  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> dque;
        vector<int> result;
        
        for(int i=0; i<nums.size(); i++)
        {
            while(!dque.empty() && nums[i] >= nums[dque.back()])
                dque.pop_back();
            
            dque.push_back(i); 
            
            if(dque.front() == i-k)      // Maintaining range k
                dque.pop_front();
            
            if(i >= k-1)
                result.push_back(nums[dque.front()]);
        }           
        return result;
    }