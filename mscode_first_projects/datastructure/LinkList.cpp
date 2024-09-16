#include<iostream>
using namespace std;


template<typename T>
struct Node
{
    T element;
    struct Node* next;
};


template<typename T>
class LinkList
{
private:
    Node<T>* top;

public:
    int count;
    LinkList()
    {
        //this->top = nullptr;
        this->top = (Node<T>*)malloc( sizeof(struct Node<T>) );
        this->count = 0;
    }

    void insert(int i,T data)
    {
        if( this->count < i-1){
            return;
        }

        //p指向第i-1个节点
        Node<T>* p = this->top;
        for (int j = 1; j < i; j++){
            p = p->next;
        }
        
        Node<T>* tmpCell = (Node<T>*)malloc( sizeof(struct Node<T>) );
        tmpCell->element = data;
        tmpCell->next = p->next;

        p->next = tmpCell;
        this->count++;
    }


    void deleteE(int i)
    {
        //p指向第i-1个节点
        Node<T>* p = this->top;
        for (int j = 1; j < i; j++) {
            p = p->next;
        }
        Node<T>* tmp = p->next;
        p->next = tmp->next;
        this->count--;
        delete tmp;
    }

    void print()
    {
        Node<T>* p = this->top;
        for(int i= 1; i<=count; i++) {
            p = p->next;
            cout << p->element << " ";
        }
    }

    T getElement(int i)
    {
        //p指向第i-1个节点
        Node<T>* p = this->top;
        for (int j = 0; j < i; j++) {
            p = p->next;
        }
        return p->element;
    }


};



int main()
{
    LinkList<int> list;
    list.insert(1,99);
    list.insert(2,100);
    list.insert(3,101);

    int kk = list.getElement(3);
    cout << kk << endl;

    list.insert(2,45);
    cout << list.getElement(3) << endl;

    list.insert(2,46);
    list.insert(2,47);

    list.print();

    list.deleteE(1);

    cout << endl;
    list.print();

    cout << endl;
    list.deleteE(5);
    list.print();

}