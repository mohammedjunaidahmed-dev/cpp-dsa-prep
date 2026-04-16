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
void explainlist(){

    // =========================================
    // 1. WHAT IS LIST
    // =========================================
    // list → doubly linked list (NOT like vector)
    // ✔ dynamic size
    // ✔ elements NOT stored in contiguous memory
    // ✔ fast insertion/deletion anywhere
    // ✖ no direct index access (no ls[i])


    // =========================================
    // 2. DECLARATION
    // =========================================

    list<int> ls;     
    // empty list → []


    // =========================================
    // 3. INSERTION
    // =========================================

    ls.push_back(2);     
    // add at end → [2]

    ls.push_front(1);    
    // add at beginning → [1,2]

    ls.push_back(3);     
    // [1,2,3]

    // ls.emplace_back(4);
    // same as push_back → adds at end

    // ls.emplace_front(0);
    // same as push_front → adds at beginning


    // =========================================
    // 4. ACCESS
    // =========================================

    cout << ls.front();  
    // first element → Output: 1

    cout << ls.back();   
    // last element → Output: 3

    // ❌ ls[0] NOT allowed (no indexing in list)


    // =========================================
    // 5. TRAVERSAL
    // =========================================

    // (1) Using for-each loop
    for(auto x : ls){
        cout << x << " ";
    }
    // Output: 1 2 3


    // (2) Using iterator
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *it << " ";
    }
    // Output: 1 2 3


    // =========================================
    // 6. DELETE
    // =========================================

    ls.pop_back();    
    // removes last → [1,2]

    ls.pop_front();   
    // removes first → [2]


    // =========================================
    // 7. INSERT USING ITERATOR
    // =========================================

    auto it = ls.begin();

    ls.insert(it, 5);  
    // insert before position of iterator
    // result → [5,2]


    // =========================================
    // 8. ERASE
    // =========================================

    auto it2 = ls.begin();

    ls.erase(it2);     
    // removes element at iterator position
    // result → [2]


    // =========================================
    // 9. SIZE
    // =========================================

    cout << ls.size();
    // number of elements


    // =========================================
    // 10. CLEAR
    // =========================================

    ls.clear();
    // removes all elements → []


    // =========================================
    // 11. EXTRA IMPORTANT
    // =========================================

    // ✔ push_front → available in list (not in vector)
    // ✔ no random access → cannot use ls[i]
    // ✔ traversal must use loop / iterator
    // ✔ best when frequent insert/delete needed

}   
void explaindeque(){

    // =========================================
    // 1. WHAT IS DEQUE
    // =========================================
    // deque → double-ended queue
    // ✔ dynamic size (like vector)
    // ✔ insertion/deletion from BOTH ends
    // ✔ random access allowed (like vector)
    // ✔ faster than vector for front operations


    // =========================================
    // 2. DECLARATION
    // =========================================

    deque<int> dq;      
    // empty → []

    deque<int> dq2 = {1,2,3};
    // [1,2,3]


    // =========================================
    // 3. INSERTION
    // =========================================

    dq.push_back(2);    
    // [2]

    dq.push_front(1);   
    // [1,2]

    dq.push_back(3);    
    // [1,2,3]

    // dq.emplace_back(4);   // same as push_back
    // dq.emplace_front(0);  // same as push_front


    // =========================================
    // 4. ACCESS
    // =========================================

    cout << dq[0];      
    // Output: 1

    cout << dq.at(1);   
    // Output: 2

    cout << dq.front(); 
    // Output: 1

    cout << dq.back();  
    // Output: 3


    // =========================================
    // 5. TRAVERSAL
    // =========================================

    // (1) for-each loop
    for(auto x : dq){
        cout << x << " ";
    }
    // Output: 1 2 3

    // (2) iterator (your style)
    for(auto it = dq.begin(); it < dq.end(); it++){
        cout << *it << " ";
    }
    // Output: 1 2 3


    // =========================================
    // 6. DELETE
    // =========================================

    dq.pop_back();     
    // [1,2]

    dq.pop_front();    
    // [2]


    // =========================================
    // 7. INSERT USING ITERATOR
    // =========================================

    deque<int> d = {7,8,1,2};

    d.insert(d.begin()+1, 100);
    // [7,100,8,1,2]


    // =========================================
    // 8. ERASE
    // =========================================

    d.erase(d.begin()+1);
    // removes 100 → [7,8,1,2]

    d.erase(d.begin()+1, d.end()-1);
    // removes middle → [7,2]


    // =========================================
    // 9. SIZE
    // =========================================

    cout << d.size();


    // =========================================
    // 10. CLEAR
    // =========================================

    d.clear();
    // []


    // =========================================
    // 11. EXTRA IMPORTANT
    // =========================================

    // ✔ supports push_front (like list)
    // ✔ supports indexing (like vector)
    // ✔ iterators support < (like vector)
    // ✔ best when operations needed at both ends

}
void explainstack(){

    // =========================================
    // 1. WHAT IS STACK
    // =========================================
    // stack → LIFO (Last In First Out)


    // =========================================
    // 2. DECLARATION
    // =========================================

    stack<int> st;


    // =========================================
    // 3. INSERTION
    // =========================================

    st.push(1);
    st.push(7);
    st.push(71);

    // st.emplace(73);
    // same as push → adds element on top

    st.push(17);
    st.push(27);
    // [1,7,71,73,17,27]


    // =========================================
    // 4. ACCESS
    // =========================================

    cout << st.top() << endl;
    // Output: 27


    // =========================================
    // 5. SIZE
    // =========================================

    cout << st.size() << endl;
    // Output: 6


    // =========================================
    // 6. DELETE (POP)
    // =========================================

    st.pop();
    // removes 27 → [1,7,71,73,17]

    cout << st.top() << endl;
    // Output: 17


    // =========================================
    // 7. TRAVERSAL (WITHOUT COPY)
    // =========================================
    // ⚠️ This will EMPTY the stack

    while(st.empty() == false){
        cout << st.top() << " ";
        st.pop();
    }
    // Output: 17 73 71 7 1


    // =========================================
    // 8. EMPTY
    // =========================================

    cout << st.empty();
    // Output: 1 (true)


    // =========================================
    // 9. SWAP
    // =========================================

    stack<int> st1;
    st1.push(100);
    st1.push(200);

    stack<int> st2;
    st2.push(1);
    st2.push(2);

    swap(st1, st2);
    // st1 → [1,2]
    // st2 → [100,200]


    // =========================================
    // 10. IMPORTANT POINTS
    // =========================================

    // ✔ push / emplace → insert
    // ✔ pop → remove top
    // ✔ top → last element
    // ✔ no indexing, no iterators
    // ✔ traversal removes elements

}
void explainqueue(){

    // =========================================
    // 1. WHAT IS QUEUE
    // =========================================
    // queue → FIFO (First In First Out)
    // first inserted element comes out first


    // =========================================
    // 2. DECLARATION
    // =========================================

    queue<int> q;
    // empty queue


    // =========================================
    // 3. INSERTION
    // =========================================

    q.push(2);   
    // [2]

    q.push(22);  
    // [2,22]

    q.push(23);  
    // [2,22,23]

    q.push(24);  
    // [2,22,23,24]

    // q.emplace(30);
    // same as push → adds at back


    // =========================================
    // 4. ACCESS
    // =========================================

    cout << q.front() << endl;
    // first element → Output: 2

    cout << q.back() << endl;
    // last element → Output: 24


    // =========================================
    // 5. SIZE
    // =========================================

    cout << q.size() << endl;
    // Output: 4


    // =========================================
    // 6. DELETE (POP)
    // =========================================

    q.pop();  
    // removes front element (2)
    // [22,23,24]

    cout << q.front() << endl;
    // Output: 22


    // =========================================
    // 7. TRAVERSAL
    // =========================================
    // ⚠️ No iterators → only by popping

    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }
    // Output: 22 23 24
    // queue becomes EMPTY


    // =========================================
    // 8. EMPTY
    // =========================================

    cout << q.empty();
    // Output: 1 (true)


    // =========================================
    // 9. SWAP
    // =========================================

    queue<int> q1;
    q1.push(1);
    q1.push(2);
    // q1 → [1,2]

    queue<int> q2;
    q2.push(100);
    q2.push(200);
    // q2 → [100,200]

    swap(q1, q2);
    // q1 → [100,200]
    // q2 → [1,2]

    // OR
    // q1.swap(q2);  (same)


    // =========================================
    // 10. IMPORTANT POINTS
    // =========================================

    // ✔ push / emplace → insert at back
    // ✔ pop → removes from front
    // ✔ front → first element
    // ✔ back → last element
    // ✔ no indexing, no iterators
    // ✔ traversal removes elements

}
void explainpriorityqueue(){

    // =========================================
    // 1. WHAT IS PRIORITY QUEUE
    // =========================================
    // priority_queue → stores elements in sorted priority
    // by default → MAX HEAP
    // largest element always at top


    // =========================================
    // 2. DECLARATION (MAX HEAP)
    // =========================================

    priority_queue<int> pq;


    // =========================================
    // 3. INSERTION
    // =========================================

    pq.push(5);
    pq.push(2);

    // pq.emplace(10);
    // same as push → inserts element into heap

    pq.push(8);
    // elements arranged internally
    // top = 10


    // =========================================
    // 4. ACCESS
    // =========================================

    cout << pq.top() << endl;
    // Output: 10


    // =========================================
    // 5. DELETE (POP)
    // =========================================

    pq.pop();
    // removes 10

    cout << pq.top() << endl;
    // Output: 8


    // =========================================
    // 6. SIZE
    // =========================================

    cout << pq.size() << endl;
    // Output: 3


    // =========================================
    // 7. TRAVERSAL (MAX HEAP)
    // =========================================

    while(pq.empty() == false){
        cout << pq.top() << " ";
        pq.pop();
    }
    // Output: 8 5 2


    // =========================================
    // 8. MIN HEAP (SMALLEST ON TOP)
    // =========================================

    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(5);
    minpq.push(2);

    // minpq.emplace(10);
    // same as push

    minpq.push(8);

    cout << minpq.top() << endl;
    // Output: 2


    // =========================================
    // 8.1 TRAVERSAL (MIN HEAP)
    // =========================================

    while(minpq.empty() == false){
        cout << minpq.top() << " ";
        minpq.pop();
    }
    // Output: 2 5 8 10


    // =========================================
    // 9. SWAP
    // =========================================

    priority_queue<int> a;
    a.push(1);
    a.push(3);

    priority_queue<int> b;
    b.push(100);
    b.push(200);

    swap(a, b);
    // a → [200,100]
    // b → [3,1]


    // =========================================
    // 10. IMPORTANT POINTS
    // =========================================

    // ✔ push / emplace → insert
    // ✔ max heap → largest first
    // ✔ min heap → smallest first
    // ✔ no indexing, no iterators
    // ✔ traversal removes elements

}

int main(){
    
    return 0;
}