//vector.h

#ifndef VECTOR_H_
#define VECTOR_H_

#include<algorithm>
using std::copy;

template<class T>
class vectorType
{
private:
	int size;
	int capacity;
	T* elem;

public:
    vectorType(): size{0}, capacity{100}, elem{new T[capacity]}{} //default constructor

    explicit vectorType(int s): size{0}, capacity{s}, elem{new T[s]}{} //alternate constructor
	
    vectorType(const vectorType& newVector): size{newVector.size}, capacity{newVector.capacity}, elem{new T[capacity]} //copy constructor
	{
		for(int i = 0; i < size; i++)
			elem[i] = newVector.elem[i];
	}

	// IMPORTANT
	// If the type is a pointer you MUST delete the data pointed to by pointers in this vector before
	// using this copy assignment function. If this is not done there will be a memory leak.
    vectorType& operator=(const vectorType& newVector) //copy assignment
	{
		T *p = new T[newVector.size];
		copy(newVector.elem, newVector.elem + newVector.size, p);
		delete [] elem;
		elem = p;
		size = newVector.size;
		capacity = newVector.capacity;

		return *this;
	}

        vectorType(const vectorType&& temp): size{temp.size}, capacity{temp.capacity}, elem{temp.elem} //move constructor
	{
		temp.size = 0;
		temp.capacity = 0;
		temp.elem = nullptr;
	}

	// IMPORTANT
	// If the type is a pointer you MUST delete the data pointed to by pointers in this vector before
	// using this move assignment function. If this is not done there will be a memory leak.
        vectorType& operator=(vectorType&& temp) //move assignment
	{
		delete [] elem;
		elem = nullptr;
		elem = temp.elem;
		size = temp.size;
		capacity = temp.capacity;
		temp.elem = nullptr;
		temp.size = 0;
		temp.capacity = 100;
		return *this;
	}

	// IMPORTANT
	// If the type is a pointer you MUST delete the data pointed to by pointers in this vector before
	// using this destructor (only if the destructor is explicitly called). If this is not done there
	// will be a memory leak.
    ~vectorType() //destructor
	{
	delete[] elem;
	}

	T& operator[] (int n)
	{
		return elem[n];
	}

	const T& operator[] (int n) const
	{
	return elem[n];
	}

	int getSize() const
	{
		return size;
	}

	int getCapacity() const
	{
		return capacity;
	}

	void resize(int newsize)
	{
		reserve(newsize);
		for (int i = size; i < newsize; ++i)
			elem[i] = 0;
		size = newsize;
	}

	void reserve(int newalloc)
	{
		if(capacity <= newalloc)
			capacity = newalloc;
		else
			capacity += newalloc;
		T *p = new T[capacity];
		copy(elem, elem + size, p);
		delete [] elem;
		elem = p;
	}

	void push_back(T d)
	{
		if (capacity == 0)
			reserve(8);
		else if(size == capacity)
			reserve(2 * capacity);
		elem[size] = d;
		++size;
	}

	using iterator = T *;
	using const_iterator = const T *;

	iterator begin()
	{
		if (size == 0)
			return nullptr;
		return &elem[0];
	}

	const_iterator begin() const
	{
		if (size == 0)
			return nullptr;
		return &elem[0];
	}

	iterator end()
	{
		if (size == 0)
			return nullptr;
		return &elem[size];
	}

	const_iterator end() const
	{
		if (size == 0)
			return nullptr;
		return &elem[size];
	}

	iterator insert(iterator p, const T &val)
	{
		if(size == capacity)
			reserve(2*capacity);

		for (iterator pos = end(); pos != p; --pos)
			*pos  = *(pos - 1);
		
		size++;

		*p = val;

		return p;
	}

	// IMPORTANT
	// If the type is a pointer you MUST delete the data pointed to by this pointer before
	// using this function. If this is not done there will be a memory leak.
	iterator erase(iterator p)
	{
		if (p == end())
			return p;
		for (iterator pos = p + 1; pos != end(); ++pos)
				*(pos - 1) = *pos;
		delete(end() - 1); // delete out of scope data
		--size;
		return p;
	}
};

#endif /* VECTOR_H_ */



