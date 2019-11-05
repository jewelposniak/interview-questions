#include <iostream>
#include <vector>
#include <string>

using namespace std;

 int findMin(vector<int>& prices)
    {
        int min = 0;
        
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < prices[min])
            {
                min = i;
            }
        }
        
        return min;
    }
    
    int findMin(vector<int>& prices, int x)
    {
        int min = 0;
        
        for(int i = min; i < x; i++)
        {
            if(prices[i] < prices[min])
            {
                min = i;
            }
        }
        
        return min;
    }
    
    int findMax(vector<int>& prices)
    {
        int max = 0;
        
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] >= prices[max])
            {
                max = i;
            }
        }
        
        return max;
    }
    
    int findMax(vector<int>& prices, int x)
    {
        int max = x;
        
        for(int i = x; i < prices.size(); i++)
        {
            if(prices[i] >= prices[max])
            {
                max = i;
            }
        }
        
        return max;
    }
    
    int CompareTo(int x, int y)
    {
        if(x > y)
            return x;
        else return y;
    }
    
    
    int maxProfit(vector<int>& prices) {
        int min = findMin(prices);
        int max = findMax(prices);
        int maxCap = findMax(prices, min);
        int minCap = findMin(prices, max);
        
        return CompareTo(prices[maxCap]-prices[min], prices[max]-prices[minCap]);
    }

    int main(int argc, char const *argv[])
    {
        vector<int> v;
        cout << maxProfit(v) << endl;
        return 0;
    }
    
