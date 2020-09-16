#ifndef CENTRAL_WIDGET_H
#define CENTRAL_WIDGET_H

#include <QWidget>
#include <QSplitter>
#include <QHBoxLayout>
#include <QLabel>
#include <QStringLiteral>
#include <QOpenGLWidget>



class central_widget : public QWidget
{
    Q_OBJECT
public:
    explicit central_widget(QWidget *parent = nullptr);

    QOpenGLWidget * threeDwidget;
    QWidget * twoDWidget;
    QLabel * testLabel;
    QSplitter * splitter;
    QHBoxLayout * layout;

signals:

public slots:
};

#endif // CENTRAL_WIDGET_H
