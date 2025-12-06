#include <iostream>
using namespace std;

const int MAXN = 101;
const int MAXV = 1000 + 1;
struct Node {
    int data;
    int next;
}nodes[MAXN];
bool needDelete[MAXV] = { false };

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
        if (needDelete[nodes[current].data])
        {
            nodes[last].next = nodes[current].next;
            current = nodes[current].next;
        }
        else
        {
            needDelete[nodes[current].data] = true;
            last = current;
            current = nodes[current].next;
        }
    }
    current = first;
    while (current != -1)
    {
        cout << current << " " << nodes[current].data << " "
            << nodes[current].next << endl;
        current = nodes[current].next;
    }
    return 0;
}