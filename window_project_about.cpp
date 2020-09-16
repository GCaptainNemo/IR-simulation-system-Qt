#include "window_project_about.h"

window_project_about::window_project_about(QWidget *parent) : QDialog(parent)
{
    Qt::WindowFlags flags=Qt::Dialog;
        flags |=Qt::WindowCloseButtonHint;
    this->setWindowFlags(flags);
    this->setWindowTitle(QStringLiteral("关于"));
    this->setAttribute(Qt::WA_DeleteOnClose);


    this->layout = new QGridLayout(this);
    this->versionLabel = new QLabel(QStringLiteral("红外仿真模拟系统2.0版"), this);
    this->copyrightLabel = new QLabel(QStringLiteral("Copyright(C) 2020.9.12 by xxx"), this);
    this->layout->addWidget(this->versionLabel, 0, 0, 1, 6);
    this->layout->addWidget(this->copyrightLabel, 1, 0, 1, 6);
}
