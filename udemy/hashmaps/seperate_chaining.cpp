#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
template<typename V>
class mapnode{
    public:
    string str;
    V value;
    mapnode * next;
    mapnode(string str,V value){
        this->str = str;
        this->value = value;
        next=NULL;
    }
    ~mapnode(){
        delete next;
    }
};
template<typename V>
class hashmap{
    private:
    mapnode<V>* *buckets;
    int count;
    int bucketsize;
    public:
    hashmap(){
        count =0;
        bucketsize =10;
        buckets = new mapnode<V>* [bucketsize];
        for(int i =0;i<bucketsize;i++){
            buckets[i]=NULL;
        }
    }
    ~hashmap(){
        for(int i=0;i<bucketsize;i++){
            delete buckets[i];
        }
        delete buckets[];
    }
    // here is the bucketindex method
    int getbucketindex(string key){
        int hashcode =0;
        int base =1;
        int p =37;
        for(int i = key.size()-1;i>=0;i--){
            hashcode = hashcode +key[i]*base;
            base = base*p;
            hashcode = hashcode %bucketsize;
            base = base % bucketsize;
        }
        return hashcode % bucketsize;
    }
    int size(){
        return count;
    }
    // this will return the value of the entered key
    V getvalue(string key){
          int index = getbucketindex(key);
        mapnode<V>* head =buckets(index);
        while(head!=NULL){
             if(head->key==key){
                return head->str;
             }
             head= head->str;
        }
        return 0;

    }
    // for insertation
    void insert(string key ,V value){
        int index = getbucketindex(key); //defined above after deconstructor.
        mapnode<V>* head= buckets(index);
        while(head!=NULL){
            if(head->str ==key){
            head->str = value;
            return ;
            }
            head = head->next;
           mapnode<V>* node = new mapnode<V>(key,value);
           node->next=buckets(index);
           buckets[index]=node;
           count++;

        }
    }
    // for deletiton
    V remove(string key){
       
        mapnode<V>* prev = NULL;
        while(head!=NULL){
            if(head->str ==key){
                if(prev==NULL){
                    buckets[index]=head->next;
                }
                else{
                    prev->next = head->next;
                }
                V value = head->value;
                head->next = NULL;
                delete head;
                return value;
            }
            prev= head;
            head=head->next; 
        }
        return 0;
    }


};
int main(){
    return 0;
}