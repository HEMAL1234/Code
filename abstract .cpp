class LRUCache:public Cache{
    public:
    LRUCache(int cap){
        cp=cap;
    }
    public:
    void set(int k,int v){
        head->value=v;
        head->key=k;
        mp.insert(pair<int,Node*>(k,head) );
    }
    int get(int key){
        for(int i=0;i<cp;i++)
        if(mp[i]->key==key){
            return mp[i]->value;
        }
    }
};
