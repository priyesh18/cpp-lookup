//alias g++='g++ -std=c++14'

//1
#include <vector>
vector<int> v;
vector< vector<int> > matrix;	//2d VECTOR//space btw the last two > is important

//input in 2d vector.
vector<vector<int> > vec;
    for(int i = 0; i < 5; i++)
    {
         vector<int> row;
         vec.push_back(row);
    }

    vec[0].push_back(5);
    cout << vec[0][0] << endl;


// Or declare another 1d vector, push_back to this vector and push 1d vector to the 2d one
b.push_back(data);
a.push_back(b);
v.size(); //don't use this to compare it with zero
v.resize(count);
v.empty(); //for zero.
v.push_back(x);
v.begin();v.end();
v.resize(n);
v.clear(); //makes the vector contains zero elements
v.erase(v.begin()+4); //erases the fifth element of the vector v
v.erase(v.begin()+2,v.begin()+5); //erases all the elements from the third element to the fifth element.
v.count(begin, end, element) //returns the number of occurrences of an element in a container or a part of a container.
v.insert(v.begin(), 4, 0); // insert 4 0's in the begin of v (4 is optional; default 1);

vector<string> names(20,"Unknown");
vector<int> nums{ 10, 20, 30 };
vector< vector<int> > Matrix(N, vector<int>(M, -1)); //create a matrix of size N*M and fill it with -1


//2
sort(start_pointer,end_pointer);
sort(start_pointer,end_pointer,greater<int>()); //reverse sort
binary_search(start_pointer,end_pointer,key); //returns true or false
vector<int>::iterator lower;
lower = lower_bound(v.begin(), v.end(),x); //returns an iterator pointing to x(if found) or next greatest element in v

//3
int data[]={1,2,3,4,5};
replace(data,data+5,3,2);
12245
rotate(data,data+2,data+5); // the middle element becomes the first element i.e. left rotation.
34512

//4
set<int> s;
s.insert(x);
s.size();
s.erase(val);
s.find(val); //returns an iterator to the val. works for other containers also.

vector<int> v; 
 // … 
 set<int> s(v.begni(), v.end()); 
 vector<int> v2(s.begin(), s.end()); //Here ‘v2′ will contain the same elements as ‘v’ but sorted in ascending order and with duplicates removed.

//5
pair<string, pair<int,int> > P; 
string s = P.first; // extract string 
int x = P.second.first; // extract first int 
int y = P.second.second; // extract second int
/* if you want to sort the array of integer points so that they form a polygon,
  it’s a good idea to put them to the
  vector< pair<double, pair<int,int> >, 
  where each element of vector is { polar angle, { x, y } }. 
  One call to the STL sorting function will give you the desired order of points.*/
 
 //6
#include <stack>
stack<char> s;
s.push(str[i]);
s.pop();

//8
deque<int> mydeque;
push_back(x)
push_front(x)
pop_back()
pop_front()
empty()

//7
map<string,int> m; //Creates a map m where key_type is of type string and data_type is of type int.
m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.

m.find("myKey") // will never change the contents of map,
m["myKey"] // operator [] will create an element if it does not exist can be used instead of insert

if(M["the meaning"] == 42)  // Error! Cannot use [] on const map objects!
if(M.find("the meaning") != M.end() && M.find("the meaning")->second == 42) { // Correct 

//Internally map and set are almost always stored as red-black trees.
//the elements of map and set are always sorted in ascending order while traversing these containers. 
// operators ++ and — are defined on iterators in map and set.

// 9 Iterate map
void iterate_map(map<string, int> m) {
    for(auto const& x: m) {
        cout<<x.first<<x.second;
    }

    //cpp 17
    for(auto const& [k, v] : m) {
        cout<<k<<v;
    }
}


// 10 Iterate vector
void iteration(vector<int> v) {
  //int can be replace by 'auto'
    for (const int& i : v) // access by const reference
        cout << i << ' ';
 
    for (auto i : v) // access by value, the type of i is int
        cout << i << ' ';

// above method works for sets too.
    
    for (int n : {0, 1, 2, 3, 4, 5}) // the initializer may be a braced-init-list
        cout << n << ' ';
    cout << '\n';
 
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a) // the initializer may be an array
        cout << n << ' ';
    cout << '\n';
}

// Above vector iteration works for sets too. Additionally
void iterate(set<string> s) {
    set<string>::iterator it = s.begin();
    while(it != s.end()) {
        cout<<*it;
        cout<<it->first<<it->second; //for map;
        it++;
    }   
}

//10
void removeDuplicates(vector<int> v) {
    unordered_set<int> s;
    for (int i : v)
        s.insert(i);
    v.assign( s.begin(), s.end() );
}

//11 Read line
getline(cin, input_string)

//12 comma/space seperated numbers in string to numbers
vector<int> v;
int a;
char ch;
stringstream ss(str);
while(!ss.eof())
{
    ss>>a>>ch;
    v.push_back(a);
}
// To clear a stringstream after end of file
ss.clear();
//Otherwise;
ss.str(string()); or ss.str("");


// LinkList, Trees
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// with class
class Node { 
public: 
    int data; 
    Node* next; 
    Node(int x) { data = x; next = NULL }
};