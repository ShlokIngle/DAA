#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> q;

  q.push( "Shlok" );
  q.push( "is" );
  q.push( "Alive" );

  // Print the front of the queue out and pop it off:
  cout << "First pop(): " << q.front() << endl;
  q.pop();

  // Add another string and then print out the queue:
  q.push( "Not" );
  while(!q.empty()){
    cout<< '\t' << q.front();
    q.pop(); 
  }

  return 0;
}