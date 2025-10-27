// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     struct ListNode *next;
//  * };
//  */


// 给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

// 请你将两个数相加，并以相同形式返回一个表示和的链表。

// 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

 

// 示例 1：


// 输入：l1 = [2,4,3], l2 = [5,6,4]
// 输出：[7,0,8]
// 解释：342 + 465 = 807.
// 示例 2：

// 输入：l1 = [0], l2 = [0]
// 输出：[0]
// 示例 3：

// 输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// 输出：[8,9,9,9,0,0,0,1]
 

// 提示：

// 每个链表中的节点数在范围 [1, 100] 内
// 0 <= Node.val <= 9
// 题目数据保证列表表示的数字不含前导零


// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//     struct ListNode *p1 = l1;
//     struct ListNode *p2 = l2;
//     //创建要上传的指针
//     struct ListNode *L = (struct ListNode *)malloc(sizeof(struct ListNode));
//     //创建操作指针
//     struct ListNode *tail = L;
    
//     //标记是否进位
//     int num1 = 0;
//     int sum1 = 0;
//     //设置要添加的数据
//     int e = 0;
//     while(p1||p2){
//         if(p1&&p2){
//             struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
//             sum1 = p1->val + p2->val + num1;
            
//             e = sum1%10;
//             if(sum1 >= 10){
//                 num1 = 1;
//             }
//             else{
//                 num1 = 0;
//             }
//             p->val = e;
//             p->next = NULL;
//             tail->next = p;
//             tail = tail->next;
//             p1 = p1->next;
//             p2 = p2->next;
//         }

//         //如果p1为空，
//         else if(p1==NULL){
            
//             //将p2的节点一个一个接过去，并且判断是或否进位
//             struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
//             sum1 = p2->val + num1;
//             e = sum1 %10;
//             if(sum1>=10){
//                 num1 = 1;
//             }else{
//                 num1 = 0;
//             }
//             p->val = e;
//             p->next = NULL;
//             tail->next = p;
//             tail = tail->next;
//             p2 =  p2->next;
            
            
//         }


//         else if(p2==NULL){
//             //将p1的节点一个一个接过去，并且判断是或否进位
//             struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
//             sum1 = p1->val+num1;
//             e = sum1 %10;
//             if(sum1>=10){
//                 num1 = 1;
//             }else{
//                 num1 = 0;
//             }
//             p->val = e;
//             p->next = NULL;
//             tail->next = p;
//             tail = tail->next;
//             p1 =  p1->next;
            
//         }
//     }
//     // 如果到最后一位还进了1，那就再创建个节点存1
//     if(num1 == 1){
//         struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
//         p->val = 1;
//         p->next = NULL;
//         tail->next = p;
//     }
//     return L->next;



    
// }