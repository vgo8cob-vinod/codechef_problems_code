#include <iostream>
#include <memory>

using namespace std;

template<typename T>
class bt
{
void p(shared_ptr<bt> n)
{
    if(!n)
    return;
    if(n->left)
    p(n->left);
    cout<<n->data<<endl;
    if(n->right)
    p(n->right);

}
public:
    shared_ptr<bt> left;
    shared_ptr<bt> right;
    T data;

    void insert(T x)
    {
        if(data>x)
        {
             if(!left)
            {
                left = make_shared<bt>();
                left->data=x;
            }
            else
            {
                left->insert(x);
            }
        }
        else
        {
            if(!right)
            {
                right=make_shared<bt>();
                right->data=x;
            }
            else
            {
                right->insert(x);
            }
        }
    }

    void inorder()
    {
        if(left)
        p(left);
        cout<<data<<endl;
        if(right)
        p(right);

    }

    void del(T y)
    {

    }
};

int main()
{
    bt<int> k;
    k.data =10;
    k.insert(5);
    k.insert(10);
    k.insert(12);
    k.insert(7);
    k.insert(9);
    k.insert(3);
    k.insert(2);
    k.insert(15);


k.inorder();

    return 0;
}

