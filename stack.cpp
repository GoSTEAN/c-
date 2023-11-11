// #include <iostream>
// using namespace std;

// int stack[10];
// int SP = 0;

// void push(int value) {
//   stack[SP++] = value;
// }

// int pop (void) {
//   return stack[--SP];
// } 

// int main(void) {
//   push(3);
//   push(2);
//   push(1); 
//   cout << pop() << endl;
//   // std::cout << pop() << std::endl;
//   // std::cout << pop() << std::endl;
//   return 0;
// }

// don't uncomment this 
// class Stack {
//   int stackHouse[100];
//   int SP;
// };

#include <iostream>
using namespace std;


class Stack {
  private:
    int stackHouse[100];
    int SP;
  public:
    Stack(void) { SP = 0; }
    void push(int value);
    int pop (void) {
      return stackHouse[--SP];
    }
    int count() {
      return (SP);
    }
    int display() {
        cout << "Stack elements: ";
        for (int i = 0; i < SP; ++i) {
            cout << stackHouse[i] << " ";
        }
        cout << endl;
    }
    int sum_num() {
      int sum = 0;
      for (int i = 1; i <= count(); i++) {
          sum += i;
      }
      return sum;
    }
};

void Stack::push(int value) {
  stackHouse[SP++] = value;
}

int main(void) {
  Stack little_stack, another_stack, funny_stack;
  little_stack.push(1);
  // another_stack.push(little_stack.pop() + 1);
  // funny_stack.push(another_stack.pop() + 2);
  // cout << funny_stack.pop() << endl;
  little_stack.push(2);
  little_stack.push(3);
  little_stack.push(4);
  little_stack.push(5);
  cout<<little_stack.count()<<endl;
  cout<<"Little stack"<<little_stack.display()<<endl;
  cout<<"Total sum of number is: "<<little_stack.sum_num()<<endl;
  little_stack.pop();
  cout<<"Total sum of number is: "<<little_stack.sum_num()<<endl;

  return 0;
}

