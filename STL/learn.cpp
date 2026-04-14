#include<bits/stdc++.h>
using namespace std;
void explainpair(){

    // pair → stores exactly TWO values (can be different types)

    // --- Basic pair ---
    pair<int,int> pr1 = {1,2};

    // Access:
    // .first  → first value
    // .second → second value
    cout << pr1.first << " " << pr1.second << endl;  
    // Output: 1 2


    // --- Using make_pair ---
    // Same thing, just another way to create a pair
    pair<int,char> pr2 = make_pair(2,'b');

    cout << pr2.first << " " << pr2.second << endl;  
    // Output: 2 b


    // --- Nested pair (pair inside pair) ---
    pair<pair<int,char>,int> pr3 = {{1,'c'},9};

    // Structure:
    // pr3.first  → (1,'c')
    // pr3.second → 9

    // Inside first:
    // pr3.first.first  → 1
    // pr3.first.second → 'c'

    cout << pr3.first.second << endl;  
    // Output: c


    /*
    IMPORTANT (remember these only):

    1. pair holds ONLY 2 values
    2. access using .first and .second
    3. nesting is allowed
    4. make_pair is optional (just another way)

    That's it — no extra theory needed.
    */
}

       
int main(){
    explainpair();
 
    return 0;
}