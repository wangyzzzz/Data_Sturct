## 二、栈和队列 

##### 	1、队列

​		***单调队列：区间最大（小）值； 

​		先进先出 后进后出

​		结构定义：有一片连续的存储区，用来存放连续的若干个元素，队首指针和队尾指针，队列长度，队列元素的类型。

​		结构操作：

​			出队：队首指针向后移动一位。

​			入队：队尾指针向后一位，放入元素。

​		假溢出：队尾已满，队首还有位置。

​		循环队列：如队尾已满，则让尾指针指向队首。



##### 	2、栈 

​		***单调栈：临近最大（小）值；

​		先进后出 后进先出

​		结构定义：有连续的数据区，栈顶指针（指向最上方的元素）

栈的大小。

​		结构操作：

​			出栈：栈顶指针向下移动一位。

​			入栈：栈顶指针向上移动一位，放入元素。



习题：leetcode 20 、 232 、225