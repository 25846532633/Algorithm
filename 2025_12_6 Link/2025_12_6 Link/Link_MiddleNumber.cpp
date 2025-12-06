#include <iostream>
#include <iomanip>
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
    int fast = first, slow = first; // 初始化快指针和慢指针
    while (nodes[fast].next != -1 && nodes[nodes[fast].next].next != -1) {
        slow = nodes[slow].next; // 慢指针移动一步
        fast = nodes[fast].next; // 快指针移动两步
        fast = nodes[fast].next;
    }
    if (nodes[fast].next == -1) { // 链表长度为奇数
        cout << fixed << setprecision(1) <<
            (double)nodes[slow].data; // 输出中位数
    }
    else { // 链表长度为偶数
        cout << fixed << setprecision(1) <<
            (nodes[slow].data + nodes[nodes[slow].next].data) / 2.0; // 输出中位数
    }
    return 0;
}