## 一、顺序表

​		pwd：/Data_Struct_Review/1.Vector.cpp

​		连续存储区，存储类型是任意的，需要同一元素类型。

​	数据定义：

​		size:元素容量

​		length:长度

​		data_type:数据类型

​	数据操作：

​		插入：插入位置及之后的元素都后移一位，length变化。

​		pwd：/Data_Struct_Review/1.Vector.cpp->insert();

​		删除：删除位置之后的元素都前移一位，length变化。

​		pwd：/Data_Struct_Review/1.Vector.cpp->erase();

​		

## 二、链表

​		pwd：/Data_Struct_Review/2.LinkList.cpp

​		一个元素有两个字段：数据区和指向下一个元素地址。

​		程序内部：head（抓手，头指针），如果丢失则找不到链表内容，造成内存泄漏。

​		内存内部：存储数据。

​		***虚拟节点：是指向头节点的节点，其目的是为了方便插入与删除节点，如果需要插入到第四个节点，则把指向虚拟节点的节点往后平移四位，指向的便是待操作节点的前一个节点。

​		插入：把待插入节点的*next指向后一个节点，再把前一个节点的next指向-待插入节点；

​		pwd：/Data_Struct_Review/2.LinkList.cpp->*insert();

​		删除：把前一个节点的next，指向后一个节点。	

​		pwd ：/Data_Struct_Review/2.LinkList.cpp->*erase();

​		单项循环链表：head指向尾节点（有利于链表插入）。



习题：leetcode 19, 24, 83, 141, 160, 202, 203, 206, 234, 237.