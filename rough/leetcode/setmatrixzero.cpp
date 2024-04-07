#include <iostream>
#include <vector>
using namespace std;
void setmatrixzero(vector<vector<int> > &v)
{
    vector<int> v1;
    int row;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 0)
            {
                row = i;
                v1.push_back(j);
            }
        }
        fill(v[row].begin(), v[row].end(), 0);
    }
//    fi
}
int main()
{
    vector<vector<int> > v;
    vector<int> row1;
    vector<int> row2;
    vector<int> row3;
    for (int i = 0; i < 3; i++)
    {
        row1.push_back(1);
        row3.push_back(1);
    }
    row2.push_back(1);
    row2.push_back(0);
    row2.push_back(1);

    //   row3.push_back(1);
    // row3.push_back(0);
    // row3.push_back(1);

    v.push_back(row1);
    v.push_back(row2);
    v.push_back(row3);

    // Print all rows
    cout << "orginal  matrix " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    setmatrixzero(v);
    cout << "new matrix " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}