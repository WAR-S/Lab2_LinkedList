#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <QDebug>
struct SItem{
    int value;
    SItem *child = nullptr;
};

class LinkedList
{
public:
    LinkedList() {}
    void append (int value)
    {
        SItem *newItem;
        newItem = new SItem;
        newItem->value = value;
        if (head == nullptr)
        {
            head = newItem;
        }
        else
        {
            //newItem->child = head;
            // head = newItem;
            SItem* last;
            last = head;
            for(int i=0;i<m_size;i++)
            {
                if(last->child == nullptr) break;
                else
                {
                    last = last->child;
                }
            }
            last->child = newItem;

        }


        m_size++;

    }
    void remove (int index)
    {
        SItem* last;
        last = head;
       if(index == 0){}
       else
       {
           for(int i=1;i<index;i++)
           {
             last = last->child;
           }
       }
        if(last->child->child != nullptr)
        {
            SItem* rm = last->child;
            last->child = last->child->child;
            delete rm;

        }
        else
        {
            delete last->child;
            last->child = nullptr;
        }


        m_size--;
    }
    int at(int index)
    {
        SItem* last;
        last = head;
        if(index == 0) return last->value;
        else
        {
            for(int i=1;i<=index;i++)
            {
               last = last->child;
            }
        }
        return last->value;
    }
    int size()
    {
        return m_size;
    }


private:
    SItem* head = nullptr;
    int m_size=0;
};

#endif // LINKEDLIST_H















