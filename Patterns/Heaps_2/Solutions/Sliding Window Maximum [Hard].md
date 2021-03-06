# Description

Given an array nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window.

Follow up:
Could you solve it in linear time?

Example:

Input: nums = [1,3,-1,-3,5,3,6,7], and k = 3
Output: [3,3,5,5,6,7]
Explanation:

Window position Max
[1 3 -1] -3 5 3 6 7 -> 3
1 [3 -1 -3] 5 3 6 7 -> 3
1 3 [-1 -3 5] 3 6 7 -> 5
1 3 -1 [-3 5 3] 6 7 -> 5
1 3 -1 -3 [5 3 6] 7 -> 6
1 3 -1 -3 5 [3 6 7] -> 7


# Solution Approach-1
Using Deques
TC => O(n)

Keeping maximum value element at the front of Deque and removing smaller elements

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


Solution is available in **Sliding Window Maximum.cpp** file in same directory
