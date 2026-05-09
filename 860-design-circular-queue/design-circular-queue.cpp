class MyCircularQueue {
public:
    vector<int> arr;
    int size;
    int f;
    int b;
    int k;
   
    MyCircularQueue(int k1) {
        f=0;
        b=0;
        size=0;
        arr.resize(k1);
        k=k1;

        
    }
    
    bool enQueue(int value) {
       if(size==k) return false;
       arr[b%k]=value;
       size++;
       b++;
       return true;

    }
    
    bool deQueue() {
        if(size==0)return false;
        f++;

        size--;
        return true;
    }
    
    int Front() {
        if(size==0) return -1;
        return arr[f%k];
    }
    
    int Rear() {
        if(size==0) return -1;
        
        return arr[(b-1+k)%k];

        
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
    
    bool isFull() {
        if(size==k) return true;
        return false;

    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */