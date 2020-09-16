#ifndef WINDOW_PROJECT_ABOUT_H
#define WINDOW_PROJECT_ABOUT_H

#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QGridLayout>
#include <QStringLiteral>


class window_project_about : public QDialog
{
    Q_OBJECT
public:
    explicit window_project_about(QWidget *parent = nullptr);
    QGridLayout * layout;
    QLabel * versionLabel;
    QLabel * copyrightLabel;

signals:

public slots:



};

#endif // WINDOW_PROJECT_ABOUT_H
