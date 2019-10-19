#include <iostream>
#include <vector>

using namespace std;

vector<int> selection(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        int smallestI = i;

        for(int j = i; j < v.size(); j++)
        {
            if(v[smallestI] > v[j])
            {
                smallestI = j;
            }
        }

        int temp = v[i];
        v[i] = v[smallestI];
        v[smallestI] = temp;
    }

    return v;
}

vector<int> insertion(vector<int> v)
{
    for(int i = 1; i < v.size()-1; i++)
    {
        int point = i;
        while(v[point] < v[point-1] && point >= 1)
        {
            //swap
            point--;
        }
    }
}

int main(int argc, char const *argv[])
{
        
    static const int arr[] = {1,2,2,3,4,5,6,7,1,2,3,4,5};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    vector<int> sol1;
    //vector<int> sol2;

    sol1 = selection(v);

    for(int i = 0; i < v.size(); i++)
    {
        cout << sol1[i] << " ";
    }
    sol2 = insertion(v);

    
    
    return 0;
}
