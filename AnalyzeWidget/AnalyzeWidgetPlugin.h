#ifndef ANALYZEWIDGETPLUGIN_H
#define ANALYZEWIDGETPLUGIN_H

#include <QObject>
#include <QtCore/QtPlugin>
#include <QtDesigner/QDesignerCustomWidgetInterface>

#define AnalyzeWidgetPlugin_iid "org.myPlugins.AnalyzeWidgetPluginFactoryInterface"

class AnalyzeWidgetPlugin : public QObject, public QDesignerCustomWidgetInterface
{
	Q_OBJECT
	Q_INTERFACES(QDesignerCustomWidgetInterface)
	Q_PLUGIN_METADATA(IID AnalyzeWidgetPlugin_iid FILE "analyzewidgetplugin.json")

public:
	AnalyzeWidgetPlugin(QObject *parent = 0);
	//true��ʾ���������������Ӳ���������Ϊfalse
	bool isContainer() const;
	bool isInitialized() const;
	//Qt Designer�Ĳ������С���ڵ�ͼ��
	QIcon icon() const;
	//�����˲��������ԣ����磺�������ơ���С��ʾ���Լ�������׼��QWidget���Ե�������
	QString domXml() const;
	//�ÿؼ����������е�Qt Designer��С���ߺ�
	QString group() const;
	//ͷ�ļ����������ʹ�øò����Ӧ�ó���ġ�����Ϣ�洢��UI�ļ��У�������UIC�������ڰ����Զ�������ʽ�Ĵ�����ʵ�#includes��䡣
	QString includeFile() const;
	//�ṩ�˲����������
	QString name() const;
	//һ����̵�˵�����԰����û�ʶ��Qt Designer�еĲ���
	QString toolTip() const;
	//ΪQt Designer�û���ƵĲ���һ���ϳ�������
	QString whatsThis() const;
	//һ��ָ���Զ��崰��С������QWidgetָ��ʵ�������������ṩ�ĸ�ĸ
	QWidget *createWidget(QWidget *parent);
	void initialize(QDesignerFormEditorInterface *core);



private:
	bool initialized;
};

#endif // ANALYZEWIDGETPLUGIN_H
