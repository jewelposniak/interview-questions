
// /*
//     std::clock_t start;
//     double duration;

//     start = std::clock();


//     duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

//     operation1.push_back(duration);

//     std::cout<<"printf: "<< duration <<'\n';
// */

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <stack>
// using namespace std;


// int main() {

//     vector<double> operation1;
//     vector<double> operation2;
//     vector<double> operation3;
    
//     int loop;
//     cin >> loop;
    
//     int operation;
//     int number = 0;
    
//     stack<int> s1;
//     stack<int> s2;
    
//     for(int i = 0; i < loop; i++)
//     {
//         cin >> operation;
        
//         if(operation == 1)
//         {

//             std::clock_t start;
//             double duration;

//             start = std::clock();

//             cin >> number;
 
//             while(!s1.empty())
//             {
//                 int temp = s1.top();
//                 s2.push(temp);
//                 s1.pop();
//             }

//             s1.push(number);
            
//             while(!s2.empty())
//             {
//                 int temp = s2.top();
//                 s1.push(temp);
//                 s2.pop();
//             }

//             duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

//             operation1.push_back(duration);

//         }
//         if(operation == 2)
//         {
//             //flip onto new stack
//             //pop
//             //transfer back onto stack one

//             std::clock_t start;
//             double duration;

//             start = std::clock();

//             s1.pop();

//             duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

//             operation2.push_back(duration);
            
//         }   
//         if(operation == 3)
//         {

//             std::clock_t start;
//             double duration;

//             start = std::clock();

//             cout << s1.top() << endl;

//             duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

//             operation3.push_back(duration);

            
//         }
//     }

//     double total = 0;

//     for(double d : operation1)
//     {
//         total += d;
//     }

//     double avg1 = total / operation1.size();
//     total = 0;

//     for(double d : operation2)
//     {
//         total += d;
//     }

//     double avg2 = total / operation2.size();
//     total = 0;
    
//     for(double d : operation3)
//     {
//         total += d;
//     }

//     double avg3 = total / operation3.size();

//     cout << "average 1: " << avg1 << endl;
//     cout << "average 2: " << avg2 << endl;
//     cout << "average 3: " << avg3 << endl;
    
//     return 0;
// }


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;

int main () {

    unordered_map <char,int> myMap;

    cout << myMap['a'] << endl;

    return 0;
}