#include <iostream>
using namespace std;
template <typename t>
// creating a dynamic queue
class queue
{
    t *arr;
    int firstindex;
    int capacity;
    int size;
    int nextindex;

public:
    queue(void)
    {

        capacity=5;
        arr = new t[capacity];
        firstindex = -1;
        nextindex = 0;
        size = 0;
    }
    void push(t a)
    {
        // empty queue
        if (size == 0)
        {
            firstindex++;
        }

        if (size == capacity)
        {
            // cout<<"hello shashwat"<<endl;
            t *temp_arr;
            temp_arr = new t[2 * capacity];
            int i = 0;
            for (int j = firstindex; j < capacity; j++)
            {
                temp_arr[i] = arr[j];
                i++;
            }
            for (int j = 0; j < firstindex; j++)
            {
                temp_arr[i] = arr[j];
                i++;
            }
            firstindex = 0;
            nextindex = capacity;
            capacity = capacity * 2;
            delete[] arr;
            arr = temp_arr;
            }
        
            arr[nextindex] = a;
            nextindex = (nextindex + 1) % capacity;
            size++;
        
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "sorry the queue is empty so pop function cant be applied!!" << endl;
            return;
        }
        else
        {
            firstindex = (firstindex + 1) % capacity;
            size--;
        }
    }
    void display()
    {
        if (size == 0)
        {
            cout << "queue is empty cant display result" << endl;
            return;
        }
        int i = firstindex;
        if (size == capacity)
        {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        while (i != nextindex)
        {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
    int front()
    {
        return arr[firstindex];
    }
    int getsize()
    {
        return size;
    }
};

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    cout << "size of the array is " << q.getsize() << endl;
    q.display();
    q.pop();
    q.pop();
    q.pop();

q.display();
q.push(10);
q.push(11);
q.display();
    cout << "size of the array is " << q.getsize() << endl;

    return 0;
}