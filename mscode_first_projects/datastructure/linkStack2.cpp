#include<iostream>
#include<memory>
using namespace std;

//栈分为链式栈和顺序栈

template<typename T>
struct Node
{
    T element;
    struct Node* next;
};

template<typename T>
class LinkStack
{
private:
    Node<T>* top;

public:
    int count;
    LinkStack()
    {
        this->top = nullptr;
        count = 0;
    }

    /**
     * 1 给新节点开辟内存
     * 2 给新节点填充数据
     * 3 新节点加入原stack中
     * 4 新stack栈顶、元素个数处理
     */
    void Push( T X)
    {
        Node<T>* TmpCell = (Node<T>*)malloc( sizeof( struct Node<T> ) );
    
        TmpCell->element = X;
        TmpCell->next = this->top;
        this->top = TmpCell;
        count++;
    }

    void pop()
    {
        Node<T>* old = this->top;
        this->top = this->top->next;
        free(old);
        this->count--;
    }



};


int main()
{
    cout << "uuuuuuuuuuuuu"<< endl;

    LinkStack<int> s;
    cout << s.count << endl;

    s.Push(9);
    s.Push(11);
    s.Push(13);
    s.Push(3);

    cout << s.count << endl;

    s.pop();

    cout << s.count << endl;

}