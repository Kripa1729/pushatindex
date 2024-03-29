#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> &st) { // yedi malai changes pani garauna xa vaye i will
                             // pass by refrence like stack<int>&st
  stack<int> temp;
  while (st.size() > 0) {
    temp.push(st.top());
    st.pop();
  }
  while (temp.size() > 0) {
    cout << temp.top() << " ";
    st.push(temp.top());
    temp.pop();
  }
  cout<<endl;
}
void push_At_Bottom(stack<int> &st, int value) {
  stack<int> helper;
  // empty st and fill helper
  while (st.size() > 0) {
    helper.push(st.top());
    st.pop();
  }
  st.push(value);
  while (helper.size() > 0) {
    st.push(helper.top());
    helper.pop();
  }
  cout<<endl;
}
void printAtIdx(stack<int>&st,int Idx,int value){
    stack<int> helper;
while (st.size() > Idx) {//i.e. thyakka jun index ma value insert garnu parne ho tyo vanda mathi ko sabai lai hataune //thyakka tyo index ma reach vayepaxi push garne value 
    helper.push(st.top());
    st.pop();
  }
  st.push(value);
  while (helper.size() > 0) {
    st.push(helper.top());
    helper.pop();
  }
  cout<<endl;
}
int main() {
  stack<int> st;
  cout << "Enter the size of the Stack : ";
  int size;
  cin >> size;
  for (int i = 0; i <= size - 1; i++) {
    int x;
    cin >> x;
    st.push(x);
  }

  print(st);
  cout<<"Enter the value the you would like to push at the bottom of the stack : ";
  int value;
  cin>>value;
  push_At_Bottom(st,value);
  print(st);
  cout<<"Enter the value the you would like to push at certain idex of the stack : ";
  int Value;
  cin>>Value;
  cout<<"Enter the index where  you would like to push certain value in the stack : ";
  int idx;
  cin>>idx;
  printAtIdx(st,idx,Value);
  print(st);
}