/********************************************************************************
** Form generated from reading UI file 'blisytv.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLISYTV_H
#define UI_BLISYTV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blisytv
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QSpinBox *delaybox;
    QLabel *label_7;
    QCheckBox *abrabox;
    QComboBox *versionBox;
    QSpinBox *abraframe;
    QSpinBox *introtimer;
    QLabel *label_13;
    QComboBox *consoleBox;
    QLabel *label_14;
    QComboBox *methodbox;
    QLabel *label_18;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QLabel *label_22;
    QLabel *label_21;
    QSpinBox *adjustedby;
    QPushButton *pushButton_6;
    QSpinBox *convertertargetframehit;
    QLineEdit *flowtimerouthit;
    QPushButton *pushButton_7;
    QLabel *label_20;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLineEdit *flowtimerout;
    QLabel *label_19;
    QLabel *label_17;
    QSpinBox *convertertargetframe;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSpinBox *targetframe;
    QPushButton *pushButton;
    QLabel *label_2;
    QSpinBox *outputms2;
    QLabel *label;
    QSpinBox *output2;
    QSpinBox *outoftvframe;
    QSpinBox *outputms1;
    QSpinBox *output1;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QSpinBox *outputadjust1;
    QSpinBox *outputmsadjust1;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QSpinBox *frameHit;
    QSpinBox *outputadjust2;
    QLabel *label_10;
    QLabel *label_8;
    QSpinBox *outputmsadjust2;
    QPushButton *clear;
    QLabel *label_12;
    QCheckBox *manualbox;
    QLabel *label_23;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_9;
    QLineEdit *flow1;
    QLabel *label_15;
    QLineEdit *flowtv;
    QLabel *label_16;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *blisytv)
    {
        if (blisytv->objectName().isEmpty())
            blisytv->setObjectName("blisytv");
        blisytv->resize(625, 536);
        blisytv->setMinimumSize(QSize(625, 0));
        blisytv->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(blisytv);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(597, 452));
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        delaybox = new QSpinBox(groupBox);
        delaybox->setObjectName("delaybox");
        delaybox->setMinimum(-999999999);
        delaybox->setMaximum(0);
        delaybox->setValue(-20);

        gridLayout_5->addWidget(delaybox, 1, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        abrabox = new QCheckBox(groupBox);
        abrabox->setObjectName("abrabox");

        gridLayout_5->addWidget(abrabox, 1, 0, 1, 1);

        versionBox = new QComboBox(groupBox);
        versionBox->addItem(QString());
        versionBox->addItem(QString());
        versionBox->addItem(QString());
        versionBox->addItem(QString());
        versionBox->addItem(QString());
        versionBox->addItem(QString());
        versionBox->addItem(QString());
        versionBox->setObjectName("versionBox");

        gridLayout_5->addWidget(versionBox, 0, 5, 1, 1);

        abraframe = new QSpinBox(groupBox);
        abraframe->setObjectName("abraframe");
        abraframe->setMaximum(999999999);
        abraframe->setValue(800);

        gridLayout_5->addWidget(abraframe, 1, 1, 1, 1);

        introtimer = new QSpinBox(groupBox);
        introtimer->setObjectName("introtimer");
        introtimer->setMaximum(999999999);
        introtimer->setValue(35000);

        gridLayout_5->addWidget(introtimer, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        gridLayout_5->addWidget(label_13, 0, 2, 1, 1);

        consoleBox = new QComboBox(groupBox);
        consoleBox->addItem(QString());
        consoleBox->addItem(QString());
        consoleBox->addItem(QString());
        consoleBox->setObjectName("consoleBox");

        gridLayout_5->addWidget(consoleBox, 0, 3, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");

        gridLayout_5->addWidget(label_14, 0, 4, 1, 1);

        methodbox = new QComboBox(groupBox);
        methodbox->addItem(QString());
        methodbox->addItem(QString());
        methodbox->addItem(QString());
        methodbox->addItem(QString());
        methodbox->setObjectName("methodbox");

        gridLayout_5->addWidget(methodbox, 1, 4, 1, 2);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");

        gridLayout_5->addWidget(label_18, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_8 = new QGridLayout(tab_2);
        gridLayout_8->setObjectName("gridLayout_8");
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName("groupBox_6");
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName("gridLayout_7");
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName("label_22");

        gridLayout_7->addWidget(label_22, 3, 0, 1, 1);

        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName("label_21");

        gridLayout_7->addWidget(label_21, 4, 0, 1, 1);

        adjustedby = new QSpinBox(groupBox_6);
        adjustedby->setObjectName("adjustedby");
        adjustedby->setReadOnly(false);
        adjustedby->setMinimum(-999999999);
        adjustedby->setMaximum(999999999);

        gridLayout_7->addWidget(adjustedby, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(groupBox_6);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout_7->addWidget(pushButton_6, 5, 1, 1, 1);

        convertertargetframehit = new QSpinBox(groupBox_6);
        convertertargetframehit->setObjectName("convertertargetframehit");
        convertertargetframehit->setFrame(true);
        convertertargetframehit->setMinimum(0);
        convertertargetframehit->setMaximum(999999999);

        gridLayout_7->addWidget(convertertargetframehit, 1, 1, 1, 1);

        flowtimerouthit = new QLineEdit(groupBox_6);
        flowtimerouthit->setObjectName("flowtimerouthit");
        flowtimerouthit->setReadOnly(true);

        gridLayout_7->addWidget(flowtimerouthit, 4, 1, 1, 1);

        pushButton_7 = new QPushButton(groupBox_6);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout_7->addWidget(pushButton_7, 2, 1, 1, 1);

        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName("label_20");

        gridLayout_7->addWidget(label_20, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_6, 0, 1, 1, 1);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName("gridLayout_6");
        flowtimerout = new QLineEdit(groupBox_5);
        flowtimerout->setObjectName("flowtimerout");
        flowtimerout->setReadOnly(true);

        gridLayout_6->addWidget(flowtimerout, 5, 2, 1, 1);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName("label_19");

        gridLayout_6->addWidget(label_19, 5, 0, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName("label_17");

        gridLayout_6->addWidget(label_17, 0, 0, 1, 1);

        convertertargetframe = new QSpinBox(groupBox_5);
        convertertargetframe->setObjectName("convertertargetframe");
        convertertargetframe->setFrame(true);
        convertertargetframe->setMinimum(0);
        convertertargetframe->setMaximum(999999999);

        gridLayout_6->addWidget(convertertargetframe, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(groupBox_5);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout_6->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(groupBox_5);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout_6->addWidget(pushButton_5, 6, 2, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        widget = new QWidget();
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        targetframe = new QSpinBox(groupBox_2);
        targetframe->setObjectName("targetframe");
        targetframe->setMaximum(999999999);

        gridLayout_4->addWidget(targetframe, 0, 3, 1, 2);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");

        gridLayout_4->addWidget(pushButton, 3, 4, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_4->addWidget(label_2, 2, 2, 1, 1);

        outputms2 = new QSpinBox(groupBox_2);
        outputms2->setObjectName("outputms2");
        outputms2->setReadOnly(true);
        outputms2->setMaximum(999999999);

        gridLayout_4->addWidget(outputms2, 13, 3, 1, 2);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_4->addWidget(label, 0, 2, 1, 1);

        output2 = new QSpinBox(groupBox_2);
        output2->setObjectName("output2");
        output2->setReadOnly(true);
        output2->setMaximum(999999999);

        gridLayout_4->addWidget(output2, 9, 3, 1, 2);

        outoftvframe = new QSpinBox(groupBox_2);
        outoftvframe->setObjectName("outoftvframe");
        outoftvframe->setMaximum(999999999);
        outoftvframe->setValue(0);

        gridLayout_4->addWidget(outoftvframe, 2, 3, 1, 2);

        outputms1 = new QSpinBox(groupBox_2);
        outputms1->setObjectName("outputms1");
        outputms1->setReadOnly(true);
        outputms1->setMaximum(999999999);

        gridLayout_4->addWidget(outputms1, 11, 3, 1, 2);

        output1 = new QSpinBox(groupBox_2);
        output1->setObjectName("output1");
        output1->setReadOnly(true);
        output1->setMaximum(999999999);

        gridLayout_4->addWidget(output1, 5, 3, 3, 2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 9, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 11, 2, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 13, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 6, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 2, 4, 1, 1);

        outputadjust1 = new QSpinBox(groupBox_3);
        outputadjust1->setObjectName("outputadjust1");
        outputadjust1->setReadOnly(true);
        outputadjust1->setMinimum(-999999999);
        outputadjust1->setMaximum(999999999);

        gridLayout_3->addWidget(outputadjust1, 2, 5, 1, 2);

        outputmsadjust1 = new QSpinBox(groupBox_3);
        outputmsadjust1->setObjectName("outputmsadjust1");
        outputmsadjust1->setReadOnly(true);
        outputmsadjust1->setMinimum(-999999999);
        outputmsadjust1->setMaximum(999999999);

        gridLayout_3->addWidget(outputmsadjust1, 6, 5, 1, 2);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 6, 4, 1, 1);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_3->addWidget(pushButton_2, 1, 6, 1, 1);

        frameHit = new QSpinBox(groupBox_3);
        frameHit->setObjectName("frameHit");
        frameHit->setMinimum(-999999999);
        frameHit->setMaximum(999999999);

        gridLayout_3->addWidget(frameHit, 0, 5, 1, 2);

        outputadjust2 = new QSpinBox(groupBox_3);
        outputadjust2->setObjectName("outputadjust2");
        outputadjust2->setReadOnly(true);
        outputadjust2->setMinimum(-999999999);
        outputadjust2->setMaximum(999999999);

        gridLayout_3->addWidget(outputadjust2, 4, 5, 1, 2);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");

        gridLayout_3->addWidget(label_10, 4, 4, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 0, 4, 1, 1);

        outputmsadjust2 = new QSpinBox(groupBox_3);
        outputmsadjust2->setObjectName("outputmsadjust2");
        outputmsadjust2->setReadOnly(true);
        outputmsadjust2->setMinimum(-999999999);
        outputmsadjust2->setMaximum(999999999);

        gridLayout_3->addWidget(outputmsadjust2, 8, 5, 1, 2);

        clear = new QPushButton(groupBox_3);
        clear->setObjectName("clear");

        gridLayout_3->addWidget(clear, 1, 4, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 8, 4, 1, 1);

        manualbox = new QCheckBox(groupBox_3);
        manualbox->setObjectName("manualbox");
        QFont font;
        font.setPointSize(7);
        manualbox->setFont(font);
        manualbox->setChecked(false);

        gridLayout_3->addWidget(manualbox, 9, 5, 1, 1);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName("label_23");

        gridLayout_3->addWidget(label_23, 9, 4, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_9 = new QGridLayout(groupBox_4);
        gridLayout_9->setObjectName("gridLayout_9");
        flow1 = new QLineEdit(groupBox_4);
        flow1->setObjectName("flow1");
        flow1->setReadOnly(true);

        gridLayout_9->addWidget(flow1, 0, 3, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName("label_15");

        gridLayout_9->addWidget(label_15, 0, 2, 1, 1);

        flowtv = new QLineEdit(groupBox_4);
        flowtv->setObjectName("flowtv");
        flowtv->setReadOnly(true);

        gridLayout_9->addWidget(flowtv, 0, 5, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName("label_16");

        gridLayout_9->addWidget(label_16, 0, 4, 1, 1);

        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout_9->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout_9->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_9 = new QPushButton(groupBox_4);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout_9->addWidget(pushButton_9, 1, 5, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 1, 0, 1, 2);

        tabWidget->addTab(widget, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        blisytv->setCentralWidget(centralwidget);
        tabWidget->raise();
        groupBox->raise();
        menubar = new QMenuBar(blisytv);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 625, 22));
        blisytv->setMenuBar(menubar);
        statusbar = new QStatusBar(blisytv);
        statusbar->setObjectName("statusbar");
        blisytv->setStatusBar(statusbar);
        QWidget::setTabOrder(introtimer, abraframe);
        QWidget::setTabOrder(abraframe, targetframe);
        QWidget::setTabOrder(targetframe, outoftvframe);
        QWidget::setTabOrder(outoftvframe, pushButton);
        QWidget::setTabOrder(pushButton, frameHit);
        QWidget::setTabOrder(frameHit, flow1);
        QWidget::setTabOrder(flow1, flowtv);
        QWidget::setTabOrder(flowtv, outputadjust1);
        QWidget::setTabOrder(outputadjust1, outputadjust2);
        QWidget::setTabOrder(outputadjust2, outputmsadjust1);
        QWidget::setTabOrder(outputmsadjust1, outputms2);
        QWidget::setTabOrder(outputms2, output2);
        QWidget::setTabOrder(output2, consoleBox);
        QWidget::setTabOrder(consoleBox, outputms1);
        QWidget::setTabOrder(outputms1, output1);
        QWidget::setTabOrder(output1, tabWidget);
        QWidget::setTabOrder(tabWidget, versionBox);
        QWidget::setTabOrder(versionBox, convertertargetframe);
        QWidget::setTabOrder(convertertargetframe, flowtimerout);
        QWidget::setTabOrder(flowtimerout, methodbox);
        QWidget::setTabOrder(methodbox, outputmsadjust2);
        QWidget::setTabOrder(outputmsadjust2, abrabox);
        QWidget::setTabOrder(abrabox, delaybox);

        retranslateUi(blisytv);
        QObject::connect(pushButton_5, &QPushButton::clicked, flowtimerout, qOverload<>(&QLineEdit::copy));
        QObject::connect(pushButton_5, &QPushButton::clicked, flowtimerout, qOverload<>(&QLineEdit::copy));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(blisytv);
    } // setupUi

    void retranslateUi(QMainWindow *blisytv)
    {
        blisytv->setWindowTitle(QCoreApplication::translate("blisytv", "blisytv", nullptr));
        groupBox->setTitle(QCoreApplication::translate("blisytv", "Settings", nullptr));
        label_7->setText(QCoreApplication::translate("blisytv", "Intro Timer in MS", nullptr));
        abrabox->setText(QCoreApplication::translate("blisytv", "Abra Frame", nullptr));
        versionBox->setItemText(0, QCoreApplication::translate("blisytv", "FireRed 1.0", nullptr));
        versionBox->setItemText(1, QCoreApplication::translate("blisytv", "FireRed 1.1", nullptr));
        versionBox->setItemText(2, QCoreApplication::translate("blisytv", "LeafGreen", nullptr));
        versionBox->setItemText(3, QCoreApplication::translate("blisytv", "RS", nullptr));
        versionBox->setItemText(4, QCoreApplication::translate("blisytv", "Emerald", nullptr));
        versionBox->setItemText(5, QCoreApplication::translate("blisytv", "SM", nullptr));
        versionBox->setItemText(6, QCoreApplication::translate("blisytv", "USUM", nullptr));

        label_13->setText(QCoreApplication::translate("blisytv", "Console Select", nullptr));
        consoleBox->setItemText(0, QCoreApplication::translate("blisytv", "NDS", nullptr));
        consoleBox->setItemText(1, QCoreApplication::translate("blisytv", "GBA", nullptr));
        consoleBox->setItemText(2, QCoreApplication::translate("blisytv", "3DS", nullptr));

        label_14->setText(QCoreApplication::translate("blisytv", "Game Select", nullptr));
        methodbox->setItemText(0, QCoreApplication::translate("blisytv", "Stationary (Method 1/2/4)", nullptr));
        methodbox->setItemText(1, QCoreApplication::translate("blisytv", "Sweet Scent (Outside)", nullptr));
        methodbox->setItemText(2, QCoreApplication::translate("blisytv", "Sweet Scent (Cave)", nullptr));
        methodbox->setItemText(3, QCoreApplication::translate("blisytv", "SID", nullptr));

        label_18->setText(QCoreApplication::translate("blisytv", "Delay", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("blisytv", "Calibration", nullptr));
        label_22->setText(QCoreApplication::translate("blisytv", "Adjust by", nullptr));
        label_21->setText(QCoreApplication::translate("blisytv", "New Flowtimer Total", nullptr));
        pushButton_6->setText(QCoreApplication::translate("blisytv", "Update and Copy", nullptr));
        pushButton_7->setText(QCoreApplication::translate("blisytv", "Calculate", nullptr));
        label_20->setText(QCoreApplication::translate("blisytv", "Frame Hit", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("blisytv", "Target Input", nullptr));
        label_19->setText(QCoreApplication::translate("blisytv", "Flowtimer Output", nullptr));
        label_17->setText(QCoreApplication::translate("blisytv", "Target Frame", nullptr));
        pushButton_4->setText(QCoreApplication::translate("blisytv", "Calculate", nullptr));
        pushButton_5->setText(QCoreApplication::translate("blisytv", "Copy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("blisytv", "Flowtimer Converter", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("blisytv", "TeachyTV Target", nullptr));
        pushButton->setText(QCoreApplication::translate("blisytv", "Calculate", nullptr));
        label_2->setText(QCoreApplication::translate("blisytv", "Out of TV Frames", nullptr));
        label->setText(QCoreApplication::translate("blisytv", "Target Frame", nullptr));
        label_4->setText(QCoreApplication::translate("blisytv", "Inside TV Frames", nullptr));
        label_5->setText(QCoreApplication::translate("blisytv", "Total MS", nullptr));
        label_6->setText(QCoreApplication::translate("blisytv", "Inside TV MS", nullptr));
        label_3->setText(QCoreApplication::translate("blisytv", "Total Frames", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("blisytv", "Adjustment", nullptr));
        label_9->setText(QCoreApplication::translate("blisytv", "Adjust Total Frames by", nullptr));
        label_11->setText(QCoreApplication::translate("blisytv", "Adjust Total MS by", nullptr));
        pushButton_2->setText(QCoreApplication::translate("blisytv", "Calculate", nullptr));
        label_10->setText(QCoreApplication::translate("blisytv", "Adjust TV Frames by", nullptr));
        label_8->setText(QCoreApplication::translate("blisytv", "Frame Hit", nullptr));
        clear->setText(QCoreApplication::translate("blisytv", "Clear", nullptr));
        label_12->setText(QCoreApplication::translate("blisytv", "Adjust TV MS by", nullptr));
        manualbox->setText(QCoreApplication::translate("blisytv", "If unsure don't check", nullptr));
        label_23->setText(QCoreApplication::translate("blisytv", "Manual Adjust", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("blisytv", "Flowtimer", nullptr));
        label_15->setText(QCoreApplication::translate("blisytv", "Total Flowtimer", nullptr));
        label_16->setText(QCoreApplication::translate("blisytv", "TV Flowtimer", nullptr));
        pushButton_3->setText(QCoreApplication::translate("blisytv", "Update", nullptr));
        pushButton_8->setText(QCoreApplication::translate("blisytv", "Copy", nullptr));
        pushButton_9->setText(QCoreApplication::translate("blisytv", "Copy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QCoreApplication::translate("blisytv", "TeachyTV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class blisytv: public Ui_blisytv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLISYTV_H
