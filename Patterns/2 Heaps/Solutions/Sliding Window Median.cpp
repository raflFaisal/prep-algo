vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        
        multiset<int> minHeap;
        multiset<int, greater<int>> maxHeap;
        
        vector<double> result;
        
        for(int i=0; i<nums.size(); i++)
        {
            maxHeap.insert(nums[i]);
            minHeap.insert(*maxHeap.begin());
            maxHeap.erase(maxHeap.begin());
            
            if(i >= k)
            {                
                if(minHeap.find(nums[i-k]) != minHeap.end())
                    minHeap.erase(minHeap.find(nums[i-k]));
                else
                    maxHeap.erase(maxHeap.find(nums[i-k]));
            }
            
            while(minHeap.size() > maxHeap.size())  // Balance
            {
                maxHeap.insert(*minHeap.begin());
                minHeap.erase(minHeap.begin());
            }
            
            if(maxHeap.size() > minHeap.size() + 1) // Balance
            {
                minHeap.insert(*maxHeap.begin());
                maxHeap.erase(maxHeap.begin());
            }            
            
            if(i >= k-1)
            {
                if(k % 2 == 0)
                    result.push_back((double(*maxHeap.begin()) + double(*minHeap.begin()))/2);
                else
                    result.push_back(double(*maxHeap.begin()));
            }            
        }        
        return result;
    }