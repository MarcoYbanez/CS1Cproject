//vector.h

#ifndef VECTOR_H_
#define VECTOR_H_

#include<algorithm>
#include <QDebug>
#include "shape.h"
#include "line.h"
#include <fstream>
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include "text.h"
using std::copy;
using std::stoi;

template<class T>
class vector
{
private:
	int size;
	int capacity;
	T* elem;

public:
public:
 	vector(): size{0}, capacity{100}, elem{new T[capacity]} //default constructor
 	{
 		for(int i = 0; i < capacity; i++)
 				elem[i] = T();
 	}

 	explicit vector(int s): size{0}, capacity{s}, elem{new T[s]} //alternate constructor
 	{
 		for(int i = 0; i < capacity; i++)
 			elem[i] = T();
 	}

	vector(const vector& newVector): size{newVector.size}, capacity{newVector.capacity}, elem{new T[capacity]} //copy constructor
	{
		for(int i = 0; i < size; i++)
			elem[i] = newVector.elem[i];
	}

	vector& operator=(const vector& newVector) //copy assignment
	{
		T *p = new T[newVector.size];
		copy(newVector.elem, newVector.elem + newVector.size, p);
		delete [] elem;
		elem = p;
		size = newVector.size;
		capacity = newVector.capacity;

		return *this;
	}

		vector(const vector&& temp): size{temp.size}, capacity{temp.capacity}, elem{temp.elem} //move constructor
	{
		temp.size = 0;
		temp.capacity = 0;
		temp.elem = nullptr;
	}

		vector& operator=(vector&& temp) //move assignment
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

	~vector() //destructor
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

    void parse()
    {
        string data= "";
        string shapeType = "";
        int num = 0;
        int d = 0;
        string o = "";
        std::ifstream shapesFile;
        //change to current shape.
        shapesFile.open("/home/cs1c/Documents/CS1Cproject/CS1Cofficial/shapes.txt");
        if(shapesFile.fail())
            qDebug() << "fail";
        elem = new Shape*[10];

        while(!shapesFile.eof())
        {
            //look for new shape
          getline(shapesFile,data, '-');
          //skip to ID
          getline(shapesFile, data, ' ');

          //Get ID of the shape
          getline(shapesFile, o , '\r');
          //store shape
          d = stoi(o);
          //get to shape type
          getline(shapesFile, data, ' ');
          //Get shape type
          getline(shapesFile, data, '\r');
          //store shapeType
          shapeType = data;

          if(shapeType == "Line")
          {
              int x1 = 0;
              int x2 = 0;
              int y1 = 0;
              int y2 = 0;
              elem[num] = new Line;
              // set id
              elem[num]->setID(d);
              //set dimmentsion
               getline(shapesFile, data, ' ');

               getline(shapesFile, data, ',');
               x1 = stoi(data);

               getline(shapesFile, data, ',');
               y1 = stoi(data);
               getline(shapesFile, data, ',');
               x2 = stoi(data);
               getline(shapesFile, data, '\r');
               y2 = stoi(data);

               elem[num]->setCord(x1,y1,x2,y2);
               getline(shapesFile, data, ' ');
               getline(shapesFile, data, '\r');
               elem[num]->setColor(data);
               //get and set pen width
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               d = stoi(data);
               elem[num]->setWidth(d);
               //get and set penstyle
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setPenStyle(data);
               //get and set pen cap style
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setCapStyle(data);
               //get and set pen join style
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setJoinStyle(data);
}
          else if(shapeType == "Ellipse")
          {
              {
                        int x = 0;
                        int y = 0;
                        int a = 0;
                        int b = 0;
                        elem[num] = new Ellipse;
                        // set id
                        elem[num]->setID(d);
                         //set dimmensions
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data, ',');
                         x = stoi(data);
                         getline(shapesFile, data, ',');
                         y = stoi(data);
                         getline(shapesFile, data, ',');
                         a= stoi(data);
                         getline(shapesFile, data, '\r');
                         b = stoi(data);

                         elem[num]->setCord(x,y,a,b);
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data, '\r');
                         elem[num]->setColor(data);
                         //get and set pen width
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         d = stoi(data);
                         elem[num]->setWidth(d);
                         //get and set penstyle
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         elem[num]->setPenStyle(data);
                         //get and set pen cap style
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         elem[num]->setCapStyle(data);
                         //get and set pen join style
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         elem[num]->setJoinStyle(data);
                         //get and set burshColor;
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');

                         elem[num]->setBrushColor(data);
                         //get and set brush style;
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');

                         elem[num]->setBrushStyle(data);

              }
          }
          else if(shapeType == "Circle")
          {

                        int x = 0;
                        int y = 0;
                        int a = 0;
                        int b = 0;
                        elem[num] = new Circle;
                        // set id
                        elem[num]->setID(d);
                         //set dimmensions
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data, ',');
                         x = stoi(data);
                         getline(shapesFile, data, ',');
                         y = stoi(data);
                         getline(shapesFile, data, '\r');
                         a = stoi(data);

                         elem[num]->setCord(x,y,a,b);
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data, '\r');

                         elem[num]->setColor(data);
                         //get and set pen width
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         d = stoi(data);
                         elem[num]->setWidth(d);
                         //get and set penstyle
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         elem[num]->setPenStyle(data);
                         //get and set pen cap style
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         elem[num]->setCapStyle(data);
                         //get and set pen join style
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         elem[num]->setJoinStyle(data);
                         //get and set burshColor;
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');
                         elem[num]->setBrushColor(data);
                         //get and set brush style;
                         getline(shapesFile, data, ' ');
                         getline(shapesFile, data , '\r');

                         elem[num]->setBrushStyle(data);


          }
          else if(shapeType == "Square")
          {
                    int x = 0;
                    int y = 0;
                    int l = 0;
                    int w = 0;
                    elem[num] = new Square;
                    // set id
                    elem[num]->setID(d);
                     //set dimmensions
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, ',');
                     x = stoi(data);
                     getline(shapesFile, data, ',');
                     y = stoi(data);
                     getline(shapesFile, data, '\r');
                     l = stoi(data);

                     elem[num]->setCord(x,y,l,w);
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, '\r');
                     elem[num]->setColor(data);
                     //get and set pen width
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data , '\r');
                     d = stoi(data);
                     elem[num]->setWidth(d);
                     //get and set penstyle
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data , '\r');
                     elem[num]->setPenStyle(data);
                     //get and set pen cap style
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data , '\r');
                     elem[num]->setCapStyle(data);
                     //get and set pen join style
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data , '\r');
                     elem[num]->setJoinStyle(data);
                     //get and set burshColor;
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data , '\r');
                     elem[num]->setBrushColor(data);
                     //get and set brush style;
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data , '\r');
                     elem[num]->setBrushStyle(data);

          }
          else if(shapeType == "Text")
          {
                    int x = 0;
                    int y = 0;
                    int l = 0;
                    int w = 0;
                    elem[num] = new Text;
                    // set id
                    elem[num]->setID(d);
                     //set dimmensions
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, ',');
                     x = stoi(data);
                     getline(shapesFile, data, ',');
                     y = stoi(data);
                     getline(shapesFile, data, ',');
                     l = stoi(data);
                     getline(shapesFile, data, '\r');
                     w = stoi(data);

                     elem[num]->setCord(x,y,l,w);
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, '\r');
                     elem[num]->setText(data);
                     //Set penColor
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, '\r');
                     elem[num]->setColor(data);
                     //Set Allignment
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, '\r');
                     elem[num]->setAlignment(data);
                     //set text size
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, '\r');
                     x = stoi(data);
                     elem[num]->setPointSize(x);
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, '\r');
                     elem[num]->setFamily(data);
                     getline(shapesFile, data, ' ');
                     getline(shapesFile, data, '\r');


qDebug() << QString::fromStdString(data);

          }
    else if(shapeType == "Rectangle")
    {
              int x = 0;
              int y = 0;
              int l = 0;
              int w = 0;
              elem[num] = new Rectangle;
              // set id
              elem[num]->setID(d);
               //set dimmensions
               getline(shapesFile, data, ' ');
               getline(shapesFile, data, ',');
               x = stoi(data);
               getline(shapesFile, data, ',');
               y = stoi(data);
               getline(shapesFile, data, ',');
               l = stoi(data);
               getline(shapesFile, data, '\r');
               w = stoi(data);

               elem[num]->setCord(x,y,l,w);
               getline(shapesFile, data, ' ');
               getline(shapesFile, data, '\r');
               elem[num]->setColor(data);
               //get and set pen width
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               d = stoi(data);
               elem[num]->setWidth(d);
               //get and set penstyle
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setPenStyle(data);
               //get and set pen cap style
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setCapStyle(data);
               //get and set pen join style
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setJoinStyle(data);
               //get and set burshColor;
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setBrushColor(data);
               //get and set brush style;
               getline(shapesFile, data, ' ');
               getline(shapesFile, data , '\r');
               elem[num]->setBrushStyle(data);

    }
          num++;
        }//End of while loop
      //  QString b =data;
      //  qDebug() << QString::fromStdString(data);
    }

    Shape* getShapeV(const int i)
    {
        return elem[i];
    }
};

#endif /* VECTOR_H_ */




