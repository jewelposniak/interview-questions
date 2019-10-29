#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> collapse(vector<string> v)
{
    vector<string> t;
    string s;

    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].length(); j++)
        {
            s = (v[i][j]);
            t.push_back(s);
        }
    }

    return v;
}

vector<string> wordSubsets(vector<string>& A, vector<string>& B) {

    vector<string> updated = collapse(B);
    
    for(int i = 0; i < updated.size(); i++)
    {
        for(int j = 0; j < A.size(); j++)
        {
            if(A[j].find(updated[i]) == std::string::npos)
                A.erase(A.begin()+j);
                j--;
        }
    }
    
    return A;
    
}


int main(int argc, char const *argv[])
{
    vector<string> A;
    A.push_back("hello");
    A.push_back("world");
    vector<string> B;
    B.push_back("o");

    wordSubsets(A,B);

    return 0;
}
