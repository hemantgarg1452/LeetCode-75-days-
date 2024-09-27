class MyCalendarTwo {
public:
    map<int, int> events;
    MyCalendarTwo() {}
    
    bool book(int start, int end) {
        events[start]++;
        events[end]--;
        
    int activeEvents = 0;
    for (auto [time, count] : events) {
        activeEvents += count;
        if (activeEvents > 2) { 
            events[start]--;
            events[end]++;
            return false; 
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */