/*
 * CurveGroup.h
 *
 *  Created on: 22 oct. 2008
 *      Author: lburelou
 */

#ifndef CURVEGROUP_H_
#define CURVEGROUP_H_

#include <QWidget>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>

#include "QGraphic.h"

class CurveGroup : public QGraphic
{
	Q_OBJECT
public:
	CurveGroup();
	CurveGroup(IData<float>*);

	void setData(IData<float>*);
	inline void setColor(const QColor& color) { _color = color; }
	inline QColor getColor() { return _color; }
	inline QString getType() { return "Curve"; }
private:
	QColor _color;

};

#endif /* CURVEGROUP_H_ */
