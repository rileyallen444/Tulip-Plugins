#include "QSizeProperty.h"
#include "QGraph.h"

QSizeProperty::QSizeProperty(const QGraph* g) {
        _property = new tlp::SizeProperty(g->asGraph());
}

QSizeProperty::QSizeProperty(tlp::SizeProperty* p) :
        _property(p) {
}

QSizeProperty::~QSizeProperty() {
        delete _property;
}

tlp::SizeProperty* QSizeProperty::asProperty() {
        return _property;
}

QSize3D* QSizeProperty::getNodeDefaultValue() {
        return new QSize3D(_property->getNodeDefaultValue());
}

QSize3D* QSizeProperty::getEdgeDefaultValue() {
        return new QSize3D(_property->getEdgeDefaultValue());
}

QSize3D* QSizeProperty::getNodeValue(const QNode* n) {
        return new QSize3D(_property->getNodeValue(n->asNode()));
}

QSize3D* QSizeProperty::getEdgeValue(const QEdge* e) {
        return new QSize3D(_property->getEdgeValue(e->asEdge()));
}

void QSizeProperty::setNodeValue(const QNode* n, const QSize3D* v) {
        _property->setNodeValue(n->asNode(), v->asSize3D());
}

void QSizeProperty::setEdgeValue(const QEdge* e, const QSize3D* v) {
        _property->setEdgeValue(e->asEdge(), v->asSize3D());
}

void QSizeProperty::setAllNodeValue(const QSize3D* v) {
        _property->setAllNodeValue(v->asSize3D());
}

void QSizeProperty::setAllEdgeValue(const QSize3D* v) {
        _property->setAllEdgeValue(v->asSize3D());
}

QSize3D* QSizeProperty::getMax(const QGraph *sg) {
	return new QSize3D(_property->getMax(sg->asGraph()));
}

QSize3D* QSizeProperty::getMin(const QGraph *sg) {
	return new QSize3D(_property->getMin(sg->asGraph()));
}
