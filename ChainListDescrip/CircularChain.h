#pragma once
template<class T>
int CircularList<T>::Search(const T& x) const
{
	//�ڴ���ͷ�ڵ��ѭ��������Ѱ��x
	ChainNode<T> *current = first->link;
	int index = 1; // current������
	first->data = x; // ��x����ͷ�ڵ�
					 // ����x
	while (current->data != x)
	{
		current = current->link;
		index++;
	}
	// �������ͷ��
	return ((current == first) ? 0 : index);
}
