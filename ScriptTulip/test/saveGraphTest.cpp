#include "saveGraphTest.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

#include <QTextStream>
#include <QFile>

#include "QGraph.h"

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(saveGraphTest);

void saveGraphTest::setUp()
{
	_engine = new TulipScriptEngine();
	_graph = tlp::newGraph();

	_savedFile = "(tlp \"2.0\"\n(date \"12-11-2008\")\n(comments \"\")\n;(nodes <node_id> <node_id> ...)\n(nodes )\n;(edge <edge_id> <source_id> <target_id>)\n\n\n(attributes \n)\n)\n";

	_engine->addScriptFunction(graphFactory, "newGraph");
	_engine->addScriptFunction(saveGraph, "saveGraph");

	filename = "grapheTest.tlp";
}

void saveGraphTest::tearDown()
{
	std::system(std::string("rm " + filename).c_str());
	delete _graph;
	delete _engine;
}

void saveGraphTest::saveTest()
{
	_engine->evaluate(QString::fromStdString("var g = newGraph(); saveGraph(g, \""+filename+"\");"));
	if(_engine->hasUncaughtException())
	{
		cout << qPrintable(_engine->uncaughtException().toString()) << endl;
	}

	QFile file(QString::fromStdString(filename));
	file.open(QFile::ReadOnly);
	QTextStream data(&file);

	CPPUNIT_ASSERT_EQUAL(_savedFile , data.readAll().toStdString());
}
