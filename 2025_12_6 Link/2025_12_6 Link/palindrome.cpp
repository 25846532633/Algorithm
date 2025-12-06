#include <cstdio>
#include <iostream>
using namespace std;

const int MAXN = 100;

struct Node {
    int data, next;
} nodes[MAXN];

int reverseList(int first) {
    int current = first, last = -1;
    while (current != -1) {
        int next = nodes[current].next; // 保存当前节点的下一个节点
        nodes[current].next = last; // 反转当前节点的next指针
        last = current; // 更新last为当前节点
        current = next; // 移动到下一个节点
    }
    return last; // 返回反转后的头节点
}

bool judgePalindrome(int head1, int head2) {
    while (head2 != -1) {
        if (nodes[head1].data != nodes[head2].data) { // 比较两个节点的数据域
            return false; // 如果不同，返回false
        }
        head1 = nodes[head1].next; // 移动到下一个节点
        head2 = nodes[head2].next; // 移动到下一个节点
    }
    return true; // 如果所有节点都相同，返回true
}

int main() {
    int n, first, id;
    scanf("%d%d", &n, &first); // 读取节点数和头节点编号
    for (int i = 0; i < n; i++) {
        cin >> id; // 读取节点编号
        cin >> nodes[id].data >> nodes[id].next; // 读取节点数据和下一个节点编号
    }
    int fast = first, slow = first; // 初始化快慢指针
    while (nodes[fast].next != -1 && nodes[nodes[fast].next].next != -1) { // 找中间节点
        slow = nodes[slow].next; // 慢指针移动一步
        fast = nodes[fast].next; // 快指针移动一步
        fast = nodes[fast].next; // 快指针再移动一步
    }
    int headOfSecondPart = reverseList(nodes[slow].next); // 反转后半部分链表
    bool isPalindrome = judgePalindrome(first, headOfSecondPart); // 判断是否是回文
    nodes[slow].next = reverseList(headOfSecondPart); // 恢复链表结构
    string h = isPalindrome ? "Yes" : "No"; // 输出结果
    cout << h << endl;
    return 0;
}