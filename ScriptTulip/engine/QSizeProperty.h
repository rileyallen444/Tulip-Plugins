#ifndef QSIZEPROPERTY_H_
#define QSIZEPROPERTY_H_

#include "QProperty.h"
#include "QSize3D.h"
#include "QIterator.h"

#include <QObject>
#include <QSize>
#include <QVector>

#include <tulip/SizeProperty.h>

class QSizeProperty: public QProperty
{

Q_OBJECT

public:

	QSizeProperty(const QGraph *);
	QSizeProperty(tlp::SizeProperty*);
	virtual ~QSizeProperty();
	tlp::SizeProperty* asProperty();

public slots:

	// Bindings from AbstractProperty
	QSize3D* getNodeDefaultValue();
	QSize3D* getEdgeDefaultValue();
	QSize3D* getNodeValue(const QNode* n);
	QSize3D* getEdgeValue(const QEdge* e);
	void setNodeValue(const QNode* n, const QSize3D* v);
	void setEdgeValue(const QEdge* e, const QSize3D* v);
	void setAllNodeValue(const QSize3D* v);
	void setAllEdgeValue(const QSize3D* v);

	// Specific methods
	QSize3D* getMax(const QGraph *sg = 0);
	QSize3D* getMin(const QGraph *sg = 0);

	//TODO
	//void scale( const tlp::Vector<float,3>&, Graph *sg=0 );
	//void scale( const tlp::Vector<float,3>&, Iterator<node> *, Iterator<edge> *);


private:

	tlp::SizeProperty* _property;

};

#endif /* QSIZEPROPERTY_H_ */

