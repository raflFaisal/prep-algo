class MedianFinder {
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
  public:
    /* initialize your data structure here. */
    MedianFinder() {}

    void addNum(int num) 
    {        
      maxHeap.push(num);
      minHeap.push(maxHeap.top());
      maxHeap.pop();

      if(minHeap.size() > maxHeap.size())
      {
        int temp = minHeap.top();
        minHeap.pop();
        maxHeap.push(temp);
      }
    }

    double findMedian() 
    {
	  /* 2-Heaps solution => TC = O(logn) */
      if(maxHeap.size() > minHeap.size())
      {
        return double(maxHeap.top());
      }
      else
        return double((maxHeap.top()+minHeap.top())*0.5);
    }
};