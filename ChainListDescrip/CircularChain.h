#pragma once
template<class T>
int CircularList<T>::Search(const T& x) const
{
	//在带有头节点的循环链表中寻找x
	ChainNode<T> *current = first->link;
	int index = 1; // current的索引
	first->data = x; // 把x放入头节点
					 // 查找x
	while (current->data != x)
	{
		current = current->link;
		index++;
	}
	// 是链表表头吗？
	return ((current == first) ? 0 : index);
}
