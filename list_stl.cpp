#include<iostream>
#include<list>
using namespace std;

list<int> l;

list<int>::iterator i;

void print()
{
    for(i = l.begin(); i != l.end(); i++)
    {
        printf("%d ",*i)//remember use pointer !!!
        printf("\n");
    }
}
int main()
{
    l.push_back(7); l.push_back(5);l.push_back(2);
    l.push_back(77);l.push_back(1);l.push_back(9);

    print();

    l.sort();

    l.remove(3);
    l.unique()
}
