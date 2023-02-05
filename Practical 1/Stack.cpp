#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<string> s;
  stack<string> d;

  s.push( "Shlok" );
  s.push( "is" );
  s.push( "Alive" );

  // Print the front of the stack out and pop it off:
  cout << "First pop(): " << s.top() << endl;
  s.pop();

  // Add another string and then print out the stack from bottom to top:
  s.push( "Living" );
  while(!s.empty()){
    d.push(s.top());
    s.pop();
  }

  while(!d.empty()){
    cout<< d.top() << " ";
    d.pop();
  }
  return 0;
}