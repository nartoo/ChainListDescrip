#pragma once
template <class T>
class DoubleNode 
{
	friend Double<T>;
private:
	T data;
	DoubleNode<T> *left, *right;
};

template<class T>
class Double {
public:
	Double() { LeftEnd = RightEnd = 0; };
	~Double();
	int Length() const;
	bool Find(int k, T& x) const;
	int Search(const T& x) const;
	Double<T>& Delete(int k, T& x);
	Double<T>& Insert(int k, const T& x);
	void Output(ostream& out) const;
private:
	DoubleNode<T> *LeftEnd, *RightEnd;
};