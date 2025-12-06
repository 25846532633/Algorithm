#include <iostream>
using namespace std;

const int MAXN = 101;

struct Node {
    int data;
    int next;
}nodes[MAXN];


int main()
{
    int n = 0, first = 0;
    cin >> n >> first;//n个节点，和头节点first(5,2)
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> id;
        cin >> nodes[id].data >> nodes[id].next;
    }
    int current = first, last = -1;
    while (current != -1)
    {
        int next = nodes[current].next;//下一个节点
        nodes[current].next = last;
        last = current;
        current = next;
    }
    current = last;
    while (current != -1)
    {
        cout << current << " " << nodes[current].data << " "
            << nodes[current].next << endl;
        current = nodes[current].next;
    }
    return 0;
}