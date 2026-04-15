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
void explainvector(){

    // =========================================
    // 1. WHAT IS VECTOR
    // =========================================
    // vector → dynamic array
    // ✔ size can increase or decrease automatically
    // ✔ elements stored in contiguous memory (like arrays)
    // ✔ faster access using index (O(1))
    // ✖ unlike array → no fixed size limitation


    // =========================================
    // 2. DECLARATION
    // =========================================

    vector<int> v1;              
    // empty vector → size = 0 → []

    vector<int> v2(5);           
    // creates 5 elements with default value 0 → [0,0,0,0,0]

    vector<int> v3(5,8);         
    // creates 5 elements, all initialized to 8 → [8,8,8,8,8]

    vector<int> v4 = {1,2,3};    
    // direct initialization → [1,2,3]

    // =========================================
    // 3. INSERTION
    // =========================================

    vector<int> vec;

    vec.push_back(1);   
    vec.push_back(2);
    vec.push_back(0);
    // vec = [1,2,0]

    // vec.emplace_back(7);
    // same as push_back 
    

    // =========================================
    // 4. SIZE
    // =========================================

    cout << vec.size() << endl;
    // size() → number of elements present
    // Output: 3


    // =========================================
    // 5. ACCESS
    // =========================================

    cout << vec[0];      
    // direct access (no bounds checking)
    // Output: 1

    cout << vec.at(1);   
    // safer access (checks bounds, gives error if invalid)
    // Output: 2

    cout << vec.front(); 
    // first element
    // Output: 1

    cout << vec.back();  
    // last element
    // Output: 0


    // =========================================
    // 6. TRAVERSAL
    // =========================================

    // (1) Index-based traversal
    // fastest and most direct
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    // Output: 1 2 0


    // (2) Iterator-based traversal
    // iterator → acts like a pointer to elements

    vector<int>::iterator beginitr = vec.begin();
    // points to first element (1)

    vector<int>::iterator enditr = vec.end();
    // points just AFTER last element (not valid for access)

    for(auto i = beginitr; i < enditr; i++){
        cout << *i << " ";
    }
    // *i → value at that position
    // Output: 1 2 0


    // (3) for-each loop (simplest)
    for(auto x : vec){
        cout << x << " ";
    }
    // Output: 1 2 0


    // =========================================
    // 7. REVERSE TRAVERSAL
    // =========================================

    auto reversebegin = vec.rbegin();
    // points to last element (0)

    auto reverseend = vec.rend();
    // points before first element

    for(auto i = reversebegin; i < reverseend; i++){
        cout << *i << " ";
    }
    // moves backwards internally
    // Output: 0 2 1


    // =========================================
    // 8. COPY VECTOR
    // =========================================

    vector<int> copy1(vec);
    // copies full vector → [1,2,0]

    vector<int> copy2(vec.begin()+1, vec.end());
    // copies from index 1 to end → [2,0]

    vector<int> copy3(vec.begin()+1, vec.end()-1);
    // copies from index 1 to second last → [2]


    // =========================================
    // 9. DELETE / MODIFY
    // =========================================

    vec.pop_back();
    // removes last element
    // [1,2,0] → [1,2]

    vec.erase(vec.begin());
    // removes first element

    vec.erase(vec.begin()+1, vec.end()-1);
    // removes elements from index 1 to second last


    // =========================================
    // 10. INSERT
    // =========================================

    vector<int> v = {7,8,1,2,0};

    v.insert(v.begin(), 4);
    // inserts 4 at beginning
    // shifts all elements right
    // result → [4,7,8,1,2,0]


    // =========================================
    // 11. CLEAR
    // =========================================

    vec.clear();
    // removes all elements
    // vec becomes empty → []


    // =========================================
    // 12. SWAP
    // =========================================

    vector<int> a = {7,8};
    vector<int> b = {6,4};

    swap(a,b);
    // contents exchanged
    // a → [6,4]
    // b → [7,8]

}
       
int main(){
    
 
    return 0;
}