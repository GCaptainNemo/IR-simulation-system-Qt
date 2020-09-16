#include "central_widget.h"

central_widget::central_widget(QWidget *parent) : QWidget(parent)
{
    this->layout = new QHBoxLayout(this);
    this->testLabel = new QLabel(QStringLiteral("123"), this);
    this->threeDwidget = new QOpenGLWidget;
    this->twoDWidget = new QWidget;
    this->splitter = new QSplitter(Qt::Horizontal, this);
    this->layout->addWidget(this->splitter);
    this->splitter->addWidget(this->threeDwidget);
    this->splitter->addWidget(this->testLabel);
    this->layout->addWidget(this->splitter);

}
