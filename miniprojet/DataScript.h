/*
 * Data.h
 *
 *  Created on: 15 oct. 2008
 *      Author: chuet, rpatau, rnappee
 */

#ifndef DATASCRIPT_H_
#define DATASCRIPT_H_

#include <stdexcept>
#include <vector>
#include <map>
#include <set>
#include <iostream>

#include "QData.h"
#include "Observable.h"

/**
 * Implements the IData interface, so this will be manipulable as an IData item.
 * This is implemented using a vector of pairs, to represent a function
 * (pair.first ~= x; pair.second ~= y)
 */
/*
class DataScript : public QData
{
	Q_OBJECT
public:
	DataScript(QScriptEngine* engine):QData(engine) {}
	DataScript(QScriptEngine* engine, IData<float>* data):QData(engine)
	{
		for(uint i = 0; i < data->size(); ++i)
		{
			add(data->getX(i), data->getY(i));
		}
	}
	inline size_t size() const { return _array.size(); }
	inline void add(float x, float y) { _array.push_back(std::pair<float, float>(x, y)); notifyObservers(); }
	inline float getX(int i) const { return _array.at(i).first; }
	inline float getY(int i) const { return _array.at(i).second; }
	virtual void setX(unsigned int index, float value)
	{
		if(index >= _array.size())
			throw new std::out_of_range("Data: index out of range");
		_array[index].first = value;
		notifyObservers();
	}
	virtual void setY(unsigned int index, float value)
	{
		if(index >= _array.size())
			throw new std::out_of_range("Data: index out of range");
		_array[index].second = value;
		notifyObservers();
	}

	virtual float getXMin() const
	{
		if (_array.size() == 0)
			return 0;
		float temp = _array.begin()->first;
		for(std::vector<std::pair<float, float> >::const_iterator it = _array.begin(); it != _array.end(); ++it)
			temp = (temp < it->first ? temp : it->first );
		return temp;
	}

	virtual float getYMin() const
	{
		if (_array.size() == 0)
			return 0;
		float temp = _array.begin()->second;
		for(std::vector<std::pair<float, float> >::const_iterator it = _array.begin(); it != _array.end(); ++it)
			temp = (temp < it->second ? temp : it->second);
		return temp;
	}

	virtual float getXMax() const
	{
		if (_array.size() == 0)
			return 0;
		float temp = _array.begin()->first;
		for(std::vector<std::pair<float, float> >::const_iterator it = _array.begin(); it != _array.end(); ++it)
			temp = (temp > it->first ? temp : it->first);
		return temp;
	}

	virtual float getYMax() const
	{
		if (_array.size() == 0)
			return 0;
		float temp = _array.begin()->second;
		for(std::vector<std::pair<float, float> >::const_iterator it = _array.begin(); it != _array.end(); ++it)
			temp = (temp > it->second ? temp : it->second);
		return temp;
	}


private:
	std::vector<std::pair<float, float> > _array;
};
*/
#endif /* DATASCRIPT_H_ */