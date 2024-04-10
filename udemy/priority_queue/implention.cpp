#include <iostream>
#include <vector>
using namespace std;
class priorityQueue
{
    vector<int> pq;

public:
    priorityQueue()
    {
    }
    bool isempty()
    {
        return pq.size() == 0;
    }
    int getsize()
    {
        return pq.size();
    }
    int getMin()
    {
        if (isempty())
        {
            return -1;
        }
        return pq[0];
    }
    void insert(int n)
    {
        pq.push_back(n);
        int ci = pq.size() - 1;

        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (pq[ci] < pq[pi])
            {
                swap(pq[ci], pq[pi]);
                ci = pi;
                
            }
            else
                {
                    break;
                }
        }
    }
};
int main()
{
    return 0;
}