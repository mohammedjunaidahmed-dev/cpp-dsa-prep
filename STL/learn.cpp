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
void explainset(){

    // =========================================
    // 1. WHAT IS SET
    // =========================================
    // set → stores UNIQUE elements in ASCENDING order

    set<int> st;


    // =========================================
    // 2. INSERTION
    // =========================================

    st.insert(2);   // st.emplace(2)
    st.insert(21);
    st.insert(21);  // duplicate → ignored
    st.insert(21);  // duplicate → ignored
    st.insert(12);

    // final set → {2,12,21}


    // =========================================
    // 3. TRAVERSAL
    // =========================================

    for(auto i : st){
        cout << i << " ";
    }
    // Output: 2 12 21


    // =========================================
    // 4. FIND
    // =========================================

    auto it = st.find(12);   // iterator to element

    if(it != st.end()){
        cout << *it;
    }
    // Output: 12


    // =========================================
    // 5. COUNT
    // =========================================

    cout << st.count(21);
    // Output: 1 (present)

    cout << st.count(100);
    // Output: 0 (not present)


    // =========================================
    // 6. ERASE (BY VALUE)
    // =========================================

    st.erase(21);
    // removes 21 → {2,12}

    for(auto i : st){
        cout << i << " ";
    }
    // Output: 2 12


    // =========================================
    // 7. ERASE (BY ITERATOR)
    // =========================================

    auto it2 = st.begin();  
    // points to 2

    st.erase(it2);
    // removes 2 → {12}

    for(auto i : st){
        cout << i << " ";
    }
    // Output: 12


    // =========================================
    // 8. ERASE (RANGE)
    // =========================================

    set<int> s = {1,2,3,4,5};

    auto start = s.begin();   // 1
    start++;                  // 2

    s.erase(start, s.end());
    // removes [2,3,4,5] → {1}


    // =========================================
    // 9. LOWER BOUND
    // =========================================
    // returns iterator to element >= given value

    set<int> lb = {10,20,30};

    auto it3 = lb.lower_bound(15);
    cout << *it3;
    // Output: 20

    auto it4 = lb.lower_bound(30);
    cout << *it4;
    // Output: 30

    auto it5 = lb.lower_bound(100);
    if(it5 == lb.end()){
        cout << "end";
    }
    // Output: end


    // =========================================
    // 10. UPPER BOUND
    // =========================================
    // returns iterator to element > given value

    auto it6 = lb.upper_bound(20);
    cout << *it6;
    // Output: 30

    auto it7 = lb.upper_bound(30);
    if(it7 == lb.end()){
        cout << "end";
    }
    // Output: end


    // =========================================
    // 11. SIZE & EMPTY
    // =========================================

    cout << st.size();
    // number of elements

    cout << st.empty();
    // 1 → empty, 0 → not empty


    // =========================================
    // 12. IMPORTANT POINTS
    // =========================================

    // ✔ unique elements only
    // ✔ sorted automatically
    // ✔ no indexing → cannot use st[i]
    // ✔ iterators allowed
    // ✔ erase(start, end) → [start, end)
    // ✔ operations → O(log n)

}
void explainmultiset(){

    // =========================================
    // 1. WHAT IS MULTISET
    // =========================================
    // multiset → allows DUPLICATES
    // elements stored in ASCENDING order


    // =========================================
    // 2. DECLARATION
    // =========================================

    multiset<int> ms;


    // =========================================
    // 3. INSERTION
    // =========================================

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);

    // final → {0,1,1,1,1,2,21,21}


    // =========================================
    // 4. TRAVERSAL
    // =========================================

    for(auto i : ms){
        cout << i << " ";
    }
    // Output: 0 1 1 1 1 2 21 21


    // =========================================
    // 5. FIND
    // =========================================

    auto it = ms.find(1);
    // returns iterator to FIRST occurrence of 1

    if(it != ms.end()){
        cout << *it;
    }
    // Output: 1


    // =========================================
    // 6. COUNT
    // =========================================

    cout << ms.count(1);
    // Output: 4

    cout << ms.count(21);
    // Output: 2


    // =========================================
    // 7. ERASE (BY VALUE)
    // =========================================

    ms.erase(1);
    // removes ALL occurrences of 1
    // result → {0,2,21,21}


    // =========================================
    // 8. ERASE (BY ITERATOR)
    // =========================================

    auto it2 = ms.find(21);

    ms.erase(it2);
    // removes ONLY ONE occurrence of 21
    // result → {0,2,21}


    // =========================================
    // 9. ERASE (RANGE)
    // =========================================

    multiset<int> s = {1,1,2,2,3,3};

    auto start = s.begin();  // first 1
    auto end = s.find(3);    // first 3

    s.erase(start, end);
    // removes [1,1,2,2]
    // result → {3,3}


    // =========================================
    // 10. LOWER & UPPER BOUND
    // =========================================

    multiset<int> m = {1,1,2,2,3};

    auto it3 = m.lower_bound(2);
    cout << *it3;
    // Output: 2 (first 2)

    auto it4 = m.upper_bound(2);
    cout << *it4;
    // Output: 3


    // =========================================
    // 11. SIZE & EMPTY
    // =========================================

    cout << ms.size();
    // number of elements

    cout << ms.empty();
    // 1 → empty, 0 → not empty


    // =========================================
    // 12. IMPORTANT POINTS
    // =========================================

    // ✔ duplicates allowed
    // ✔ sorted automatically
    // ✔ find() → first occurrence
    // ✔ erase(value) → removes ALL occurrences
    // ✔ erase(iterator) → removes ONE occurrence
    // ✔ no indexing

}
void explainunorderedset(){

    // =========================================
    // 1. WHAT IS UNORDERED_SET
    // =========================================
    // unordered_set → stores UNIQUE elements
    // ✔ no duplicates
    // ✔ NO order (elements appear random)
    // ✔ uses hashing


    // =========================================
    // 2. WHY WE USE UNORDERED_SET
    // =========================================
    // ✔ very fast operations
    // ✔ insert / find / erase → O(1) average
    // ✔ worst case → O(n) (rare)

    // 👉 use when:
    // - order is NOT required
    // - need fast lookup


    // =========================================
    // 3. DECLARATION
    // =========================================

    unordered_set<int> st;


    // =========================================
    // 4. INSERTION
    // =========================================

    st.insert(1);
    st.insert(2);
    st.insert(1);   // duplicate → ignored
    st.insert(11);
    st.insert(11);  // duplicate → ignored
    st.insert(12);
    st.insert(12);
    st.insert(12);

    // final → {1,2,11,12} (order NOT fixed)


    // =========================================
    // 5. TRAVERSAL
    // =========================================

    for(auto x : st){
        cout << x << " ";
    }
    // Output: random order (e.g. 12 1 11 2)


    // =========================================
    // 6. FIND
    // =========================================

    auto it = st.find(11);

    if(it != st.end()){
        cout << *it;
    }
    // Output: 11


    // =========================================
    // 7. COUNT
    // =========================================

    cout << st.count(11);
    // Output: 1

    cout << st.count(100);
    // Output: 0


    // =========================================
    // 8. ERASE
    // =========================================

    st.erase(11);
    // removes 11

    for(auto x : st){
        cout << x << " ";
    }
    // Output: elements without 11


    // =========================================
    // 9. SIZE & EMPTY
    // =========================================

    cout << st.size();
    // number of elements

    cout << st.empty();
    // 1 → empty, 0 → not empty


    // =========================================
    // 10. IMPORTANT POINTS
    // =========================================

    // ✔ unique elements only
    // ✔ no sorting
    // ✔ faster than set (average O(1))
    // ✔ no indexing
    // ✔ no lower_bound / upper_bound

}
void explainmap(){

    // =========================================
    // 1. WHAT IS MAP
    // =========================================
    // map → stores data in KEY → VALUE pair
    // ✔ keys are UNIQUE
    // ✔ values can repeat
    // ✔ sorted in ascending order of keys


    // =========================================
    // 2. DECLARATION
    // =========================================

    map<int, string> mp;


    // =========================================
    // 3. INSERTION
    // =========================================

    mp[1] = "abc";

    // mp[1] = "vik";
    // updates value for same key → now {1:vik}

    mp[2] = "bcd";
    mp[3] = "cat";

    mp.insert({4, "Raj"});
    // mp.emplace(5, "Ram");

    // final → {1:abc, 2:bcd, 3:cat, 4:Raj}


    // =========================================
    // 4. TRAVERSAL
    // =========================================

    for(auto i : mp){
        cout << i.first << "->" << i.second << endl;
    }
    /*
    Output:
    1->abc
    2->bcd
    3->cat
    4->Raj
    */


    // =========================================
    // 5. ACCESS
    // =========================================

    cout << mp[1] << endl;
    // Output: abc

    cout << mp[10] << endl;
    // Output: "" (empty string)
    // map becomes → {1:abc,2:bcd,3:cat,4:Raj,10:""}


    // =========================================
    // 6. FIND
    // =========================================

    auto it = mp.find(4);

    if(it != mp.end()){
        cout << it->first << "->" << it->second << endl;
    }
    // Output: 4->Raj

    // if not found:
    // mp.find(100) → returns mp.end()


    // =========================================
    // 7. COUNT
    // =========================================

    cout << mp.count(2) << endl;
    // Output: 1

    cout << mp.count(100) << endl;
    // Output: 0


    // =========================================
    // 8. ERASE
    // =========================================

    mp.erase(2);
    // map → {1:abc,3:cat,4:Raj,10:""}

    auto it2 = mp.find(3);
    mp.erase(it2);
    // map → {1:abc,4:Raj,10:""}


    // =========================================
    // 9. SIZE & EMPTY
    // =========================================

    cout << mp.size() << endl;
    // Output: 3

    cout << mp.empty() << endl;
    // Output: 0 (not empty)


    // =========================================
    // 10. LOWER & UPPER BOUND
    // =========================================

    // map now → {1,4,10}

    auto it3 = mp.lower_bound(2);
    cout << it3->first << endl;
    // Output: 4  (first key ≥ 2)

    auto it4 = mp.upper_bound(4);
    cout << it4->first << endl;
    // Output: 10 (first key > 4)


    // =========================================
    // 11. IMPORTANT POINTS
    // =========================================

    // ✔ keys are unique
    // ✔ sorted by keys
    // ✔ mp[key] → access/update (creates if not present)
    // ✔ find() → iterator
    // ✔ insert/emplace → add
    // ✔ operations → O(log n)

}
void explainunorderedmap(){

    // =========================================
    // 1. WHAT IS UNORDERED_MAP
    // =========================================
    // unordered_map → stores KEY → VALUE pairs
    // ✔ keys are UNIQUE
    // ✔ NO order (random order)
    // ✔ uses hashing → fast operations


    // =========================================
    // 2. WHY WE USE UNORDERED_MAP
    // =========================================
    // ✔ very fast → O(1) average
    // ✔ use when order is NOT required
    // ✔ best for frequency/count problems


    // =========================================
    // 3. DECLARATION
    // =========================================

    unordered_map<int, string> mp;


    // =========================================
    // 4. INSERTION
    // =========================================

    mp.insert({4, "Raj"});

    mp[1] = "abc";
    mp[2] = "bcd";
    mp[3] = "cat";

    // mp[1] = "new";  // updates value

    // final → keys: {1,2,3,4} (order NOT fixed)


    // =========================================
    // 5. TRAVERSAL
    // =========================================

    for(auto it : mp){
        cout << it.first << "->" << it.second << endl;
    }
    /*
    Output: order random (example)
    3->cat
    1->abc
    4->Raj
    2->bcd
    */


    // =========================================
    // 6. ACCESS
    // =========================================

    cout << mp[1] << endl;
    // Output: abc

    cout << mp[10] << endl;
    // Output: "" (default string)
    // creates new entry → {10:""}


    // =========================================
    // 7. FIND
    // =========================================

    auto it2 = mp.find(2);

    if(it2 != mp.end()){
        cout << it2->first << "->" << it2->second << endl;
    }
    // Output: 2->bcd


    // =========================================
    // 8. COUNT
    // =========================================

    cout << mp.count(3) << endl;
    // Output: 1

    cout << mp.count(100) << endl;
    // Output: 0


    // =========================================
    // 9. ERASE
    // =========================================

    mp.erase(2);
    // removes key 2

    auto it3 = mp.find(3);
    mp.erase(it3);
    // removes key 3


    // =========================================
    // 10. SIZE & EMPTY
    // =========================================

    cout << mp.size() << endl;
    // number of elements

    cout << mp.empty() << endl;
    // 1 → empty, 0 → not empty


    // =========================================
    // 11. IMPORTANT POINTS
    // =========================================

    // ✔ keys are unique
    // ✔ no sorting (random order)
    // ✔ mp[key] → access/update (creates if not present)
    // ✔ find() → safer check
    // ✔ average O(1), worst O(n)
    // ✔ no lower_bound / upper_bound

}
void explainmultimap(){

    // =========================================
    // 1. WHAT IS MULTIMAP
    // =========================================
    // multimap → stores KEY → VALUE pairs
    // ✔ keys can be DUPLICATE
    // ✔ values can repeat
    // ✔ sorted in ascending order of keys


    // =========================================
    // 2. DECLARATION
    // =========================================

    multimap<int, char> mp;


    // =========================================
    // 3. INSERTION
    // =========================================

    mp.insert({3,'b'});
    mp.insert({1,'a'});
    mp.insert({1,'b'});
    mp.insert({1,'a'});
    mp.insert({2,'a'});
    mp.insert({2,'a'});
    mp.insert({2,'b'});

    // final (sorted by keys):
    // {1:a, 1:b, 1:a, 2:a, 2:a, 2:b, 3:b}


    // =========================================
    // 4. TRAVERSAL
    // =========================================

    for(auto it : mp){
        cout << it.first << "->" << it.second << " ";
    }
    /*
    Output:
    1->a 1->b 1->a 2->a 2->a 2->b 3->b
    */


    // =========================================
    // 5. FIND
    // =========================================

    auto it1 = mp.find(1);
    // returns iterator to FIRST occurrence of key=1

    if(it1 != mp.end()){
        cout << it1->first << "->" << it1->second << endl;
    }
    // Output: 1->a


    // =========================================
    // 6. COUNT
    // =========================================

    cout << mp.count(1) << endl;
    // Output: 3

    cout << mp.count(2) << endl;
    // Output: 3


    // =========================================
    // 7. ERASE
    // =========================================

    mp.erase(2);
    // removes ALL entries with key=2

    // map becomes:
    // {1:a,1:b,1:a,3:b}


    // =========================================
    // 8. RANGE (equal_range)
    // =========================================
    // returns range of all elements with given key

    multimap<int,char> mp2;

    mp2.insert({1,'a'});
    mp2.insert({1,'b'});
    mp2.insert({1,'c'});
    mp2.insert({2,'x'});

    auto it = mp2.equal_range(1);

    for(auto i = it.first; i != it.second; i++){
        cout << i->first << "->" << i->second << endl;
    }
    /*
    Output:
    1->a
    1->b
    1->c
    */


    // =========================================
    // 9. SIZE & EMPTY
    // =========================================

    cout << mp.size() << endl;
    // number of elements

    cout << mp.empty() << endl;
    // 1 → empty, 0 → not empty


    // =========================================
    // 10. IMPORTANT POINTS
    // =========================================

    // ✔ duplicate keys allowed
    // ✔ sorted by keys
    // ✔ insert() only (no mp[key])
    // ✔ find() → first occurrence
    // ✔ erase(key) → removes all entries
    // ✔ equal_range → get all same keys

}
void explainsort(){

    // =========================================
    // 1. SORT ARRAY
    // =========================================

    int arr[5] = {6,2,1,7,8};

    sort(arr, arr+5);
    // sorts from index 0 to 4 (entire array)

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    // Output: 1 2 6 7 8


    // =========================================
    // 2. SORT PART OF ARRAY
    // =========================================

    int arr2[5] = {6,2,1,7,8};

    sort(arr2+1, arr2+4);
    // sorts index [1,3]
    // range = [start, end)

    for(int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    // Output: 6 1 2 7 8


    // =========================================
    // 3. SORT VECTOR
    // =========================================

    vector<int> vec = {5,7,8,8,1};

    sort(vec.begin(), vec.end());

    for(auto i : vec){
        cout << i << " ";
    }
    // Output: 1 5 7 8 8


    // =========================================
    // 4. SORT PART OF VECTOR
    // =========================================

    vector<int> vec2 = {5,7,8,8,1};

    sort(vec2.begin()+1, vec2.begin()+4);
    // sorts index [1,3]

    for(auto i : vec2){
        cout << i << " ";
    }
    // Output: 5 7 8 8 1 → becomes 5 7 8 8 1? ❌ check carefully

    // actual:
    // original → 5 7 8 8 1
    // sorting [7,8,8] → same
    // Output: 5 7 8 8 1


    // =========================================
    // 5. DESCENDING ORDER
    // =========================================

    vector<int> v = {5,2,9,1};

    sort(v.begin(), v.end(), greater<int>());

    for(auto i : v){
        cout << i << " ";
    }
    // Output: 9 5 2 1


    // =========================================
    // 6. IMPORTANT POINTS
    // =========================================

    // ✔ sort(start, end)
    // ✔ range → [start, end)
    // ✔ default → ascending
    // ✔ use greater<int>() → descending
    // ✔ works in O(n log n)

}
void explainaccumulate(){

    // =========================================
    // 1. WHAT IS ACCUMULATE
    // =========================================
    // accumulate → used to calculate sum of elements
    // syntax:
    // accumulate(start, end, initial_value)


    // =========================================
    // 2. ARRAY EXAMPLE
    // =========================================

    int arr[5] = {6,2,1,7,0};

    cout << accumulate(arr, arr+5, 0) << endl;
    // (6+2+1+7+0) + 0 = 16
    // Output: 16


    // =========================================
    // 3. WHY INITIAL VALUE MATTERS
    // =========================================

    cout << accumulate(arr, arr+5, 5) << endl;
    // (6+2+1+7+0) + 5 = 21
    // Output: 21


    // =========================================
    // 4. VECTOR EXAMPLE
    // =========================================

    vector<int> v = {1,2,3,4};

    cout << accumulate(v.begin(), v.end(), 0) << endl;
    // Output: 10


    // =========================================
    // 5. IMPORTANT POINTS
    // =========================================

    // ✔ range → [start, end)
    // ✔ initial value added to sum
    // ✔ works on array & vector
    // ✔ header → #include <numeric>

}
void explaincount(){

    // =========================================
    // 1. WHAT IS COUNT
    // =========================================
    // count → counts how many times a value appears
    // syntax:
    // count(start, end, value)


    // =========================================
    // 2. ARRAY EXAMPLE
    // =========================================

    int arr[5] = {6,2,1,1,0};
    int num = 1;

    cout << count(arr, arr+5, num) << endl;
    // elements: 6 2 1 1 0
    // count of 1 → 2
    // Output: 2


    // =========================================
    // 3. VALUE NOT PRESENT
    // =========================================

    cout << count(arr, arr+5, 10) << endl;
    // Output: 0


    // =========================================
    // 4. VECTOR EXAMPLE
    // =========================================

    vector<int> v = {1,2,3,1,1};

    cout << count(v.begin(), v.end(), 1) << endl;
    // Output: 3


    // =========================================
    // 5. IMPORTANT POINTS
    // =========================================

    // ✔ range → [start, end)
    // ✔ returns number of occurrences
    // ✔ works on array & vector
    // ✔ header → #include <algorithm>

}
void explainfind(){

    // =========================================
    // 1. WHAT IS FIND
    // =========================================
    // find → returns iterator to first occurrence
    // if not found → returns end


    // =========================================
    // 2. ARRAY EXAMPLE
    // =========================================

    int arr[5] = {6,2,1,1,0};

    auto it = find(arr, arr+5, 1);

    if(it != arr+5){
        cout << *it << endl;
    }
    // Output: 1


    // =========================================
    // 3. VALUE NOT FOUND
    // =========================================

    auto it2 = find(arr, arr+5, 8);

    if(it2 == arr+5){
        cout << "not found" << endl;
    }
    // Output: not found


    // =========================================
    // 4. VECTOR EXAMPLE
    // =========================================

    vector<int> v = {5,2,7,1};

    auto it3 = find(v.begin(), v.end(), 7);

    if(it3 != v.end()){
        cout << *it3 << endl;
    }
    // Output: 7


    // =========================================
    // 5. IMPORTANT POINTS
    // =========================================

    // ✔ range → [start, end)
    // ✔ returns iterator
    // ✔ if not found → returns end
    // ✔ always check before using *it

}
void explainnextpermutation(){

    string str = "abc";
    // string str = "bca";

    do{
        cout << str << endl;
    }while(next_permutation(str.begin(), str.end()));

    /*
    if str = "abc" (sorted):
    Output:
    abc
    acb
    bac
    bca
    cab
    cba

    // gives ALL permutations in sorted order
    */


    /*
    if str = "bca":
    Output:
    bca
    cab
    cba

    // starts from current string
    // does NOT go back to abc
    */


//  do{
//         cout<<str<<endl;
//     }while(next_permutation(str.begin(),str.begin()+2));

    /*
    partial range (first 2 letters only)

    if str = "abc":
    Output:
    abc
    bac

    // only first 2 letters change
    // last letter stays same
    */


    // IMPORTANT:
    // ✔ next_permutation → next bigger arrangement
    // ✔ returns false when last reached
    // ✔ last (cba) → next becomes abc again
}
void explainpermutation(){

    // =========================================
    // 1. NEXT PERMUTATION
    // =========================================

    string str = "abc";

    do{
        cout << str << endl;
    }while(next_permutation(str.begin(), str.end()));

    /*
    Output:
    abc
    acb
    bac
    bca
    cab
    cba

    // starts from smallest
    // moves forward (next arrangement)
    // ends at largest (cba)
    */


    // =========================================
    // 2. PREV PERMUTATION
    // =========================================

    string s = "cba";

    do{
        cout << s << endl;
    }while(prev_permutation(s.begin(), s.end()));

    /*
    Output:
    cba
    cab
    bca
    bac
    acb
    abc

    // starts from largest
    // moves backward (previous arrangement)
    // ends at smallest (abc)
    */


    // =========================================
    // 3. SIMPLE UNDERSTANDING
    // =========================================

    // next_permutation → forward direction
    // abc → acb → bac → ... → cba

    // prev_permutation → backward direction
    // cba → cab → bca → ... → abc


    // =========================================
    // 4. IMPORTANT POINTS
    // =========================================

    // ✔ next → next bigger arrangement
    // ✔ prev → next smaller arrangement
    // ✔ use do-while to print all
    // ✔ start sorted → full permutations

}
void explainmaxelement(){

    int arr[] = {7,6,5,10,9};

    auto it = max_element(arr, arr+5);
    // returns iterator to largest element

    cout << *it << endl;
    // Output: 10


    // =========================================
    // MIN ELEMENT
    // =========================================

    auto it2 = min_element(arr, arr+5);
    // returns iterator to smallest element

    cout << *it2 << endl;
    // Output: 5


    // =========================================
    // VECTOR EXAMPLE
    // =========================================

    vector<int> v = {4,2,9,1};

    auto it3 = max_element(v.begin(), v.end());

    cout << *it3 << endl;
    // Output: 9


    // =========================================
    // IMPORTANT POINTS
    // =========================================

    // ✔ returns iterator (not value)
    // ✔ use *it to get value
    // ✔ range → [start, end)
    // ✔ header → <algorithm>

}
void explainreverse(){

    int arr[5] = {7,6,5,10,9};

    reverse(arr, arr+5);
    // reverses elements in range [0,4]

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    // Output: 9 10 5 6 7


    // =========================================
    // PARTIAL REVERSE
    // =========================================

    int arr2[5] = {7,6,5,10,9};

    reverse(arr2+1, arr2+4);
    // reverses index [1,3]

    for(int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    // Output: 7 10 5 6 9


    // =========================================
    // VECTOR EXAMPLE
    // =========================================

    vector<int> v = {1,2,3,4};

    reverse(v.begin(), v.end());

    for(auto i : v){
        cout << i << " ";
    }
    // Output: 4 3 2 1


    // =========================================
    // IMPORTANT POINTS
    // =========================================

    // ✔ reverse(start, end)
    // ✔ range → [start, end)
    // ✔ works on array & vector
    // ✔ header → <algorithm>

}
void explainpow(){

    // pow(a,b) → a raised to power b

    cout << pow(2,3) << endl;
    // Output: 8

    cout << pow(5,2) << endl;
    // Output: 25

    cout << pow(10,0) << endl;
    // Output: 1


    // =========================================
    // IMPORTANT POINTS
    // =========================================

    // ✔ pow(a,b) → a^b
    // ✔ works directly
    // ✔ header → <cmath>

}
// el1, el2
// tells true if el1 is before el2
// tells false if el1 has to be after el2

bool internalcomparator(int el1,int el2){
    if(el1 < el2){
        return false;
    }
    return true;

    // same as → return el1 > el2;
    // descending order
}


// pair comparator
// sort by second (descending)
// if second same → sort by first (ascending)

bool internalcomparator(pair<int,int> el1, pair<int,int> el2){

    if(el1.second > el2.second) return true;
    if(el1.second < el2.second) return false;

    // if second equal
    if(el1.first < el2.first) return true;

    return false;
}


void explaincomparator(){

    // el1 and el2 are compared
    // comparator decides which comes first


    // =========================================
    // ARRAY
    // =========================================

    int arr[] = {5,6,1,2};

    // default sort
    // sort(arr, arr+4);
    // Output: 1 2 5 6

    // custom sort (descending)
    // sort(arr, arr+4, internalcomparator);

    // for(int i=0;i<4;i++){
    //     cout << arr[i] << " ";
    // }
    // Output: 6 5 2 1


    // =========================================
    // PAIR
    // =========================================

    pair<int,int> arr2[] = {{1,6},{1,5},{2,6},{2,9},{3,9}};

    // sort by second descending
    // if equal → first ascending

    // sort(arr2, arr2+5, internalcomparator);

    // for(int i=0;i<5;i++){
    //     cout << "{" << arr2[i].first << "," << arr2[i].second << "} ";
    // }

    // Output:
    // {2,9} {3,9} {1,6} {2,6} {1,5}

}
int main(){
    
    return 0;
}