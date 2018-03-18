#ifndef PLC_WIDGET_H
#define PLC_WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QGroupBox>

struct IActUtlType;

class PLCWidget : public QWidget
{
    Q_OBJECT

public:
    PLCWidget(QWidget *parent = 0);
    ~PLCWidget();

private slots:
    void openCommucation();
    void getCpuType();
    void read();
    void write();

private:
    QPushButton *m_openPushButton;
    QPushButton *m_getCpuPushButton;
    QPushButton *m_readPushButton;
    QPushButton *m_writePushButton;
    QLabel      *m_deviceNameLabel;
    QLabel      *m_deviceValueLabel;
    QLabel      *m_returnCodeLabel;
    QLabel      *m_outputLabel;
    QLineEdit   *m_deviceNameLineEdit;
    QLineEdit   *m_deviceValueLineEdit;
    QLineEdit   *m_returnCodeLineEdit;
    QLineEdit   *m_outputLineEdit1;
    QLineEdit   *m_outputLineEdit2;
    QGroupBox   *m_resultGroupBox;

    IActUtlType *m_IUtlType;
};

#endif // PLC_WIDGET_H