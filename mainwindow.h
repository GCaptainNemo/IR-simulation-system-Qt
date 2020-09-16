#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStringLiteral>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDebug>
#include <QHBoxLayout>
#include <QFileDialog>
#include <QVector>



#include "window_project_about.h"
#include "central_widget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createActions();
    void createMenus();

    
protected:
    bool parseThreeDFiles(QString fileName, QVector<float> &vPoints); 
    
    
    
private:

    virtual void closeEvent(QCloseEvent *event);

    central_widget * centralWidget;


    // filemenu
    QMenu *fileMenu;
    QAction *newAction;

    QMenu *openMenu;
    QAction *openModelAction;
    QAction *openPrjAction;

    QMenu * saveMenu;
    QAction * saveRGBModelAction;
    QAction * saveIRModelAction;
    QAction * savePrjAction;
    QAction * saveMergeSceneAction;

    QAction * saveAsAction;

    //

    QAction * printAction;
    QAction * printPreviewAction;
    QAction * printSettingAction;
    //
    QAction * exitAction;

//    // ViewMenu
//    QMenu * viewMenu;
//    QMenu * windowViewMenu;
//    QAction * printSettingAction;
//    //
//    QAction * exitAction;


    // 模式菜单
    QMenu * patternMenu;
    QMenu * lightWaveMenu;
    QAction * rgbWaveAction;
    QAction * irWaveAction;
    QAction * cameraWalkAction;
    QAction * modelEditAction;
    QAction * faceEditAction;
    QAction * verticeEditAction;

    // 显示菜单
    QMenu * showMenu;
    QMenu * observeMenu;
    QAction * frontViewAction;
    QAction * aboveViewAction;
    QAction * leftViewAction;
    QAction * textureAction;
    QAction * gridAction;
    QAction * verticeAction;
    QAction * horizonWaterAction;
    QAction * coordinateAction;
    QAction * shadowAction;

    // 红外仿真菜单

    QMenu * irSimulateMenu;
    QMenu * irCharacterMenu;
    QAction * setCalculateParAction;
    QAction * scenePreCalculateAction;
    QAction * irCharacterCalculateAction;
    QAction * irCharacterRenderAction;
    QAction * loadinRenderResultAction;

    QMenu * sceneMergeRenderMenu;
    QAction * sceneGenerateAction;
    QAction * sceneCalcualteAction;
    QAction * sceneRenderAction;


    QMenu * atmosphereSimulateMenu;
    QAction * atmosphereParSetAction;
    QAction * atmosphereRenderAction;


    QMenu * sensorEffectMenu;
    QAction * sensorParSetAction;
    QAction * sensorRenderAction;



    // 基准图匹配与评估
    QMenu * basePhotoEvaluateMenu;
    QAction * basePhotoEvaluateAction;
    QAction * basePhotoMatchAction;


    //  三维重建
    QMenu * threeDreconstructMenu;
    QAction * threeDreconstructAction;

    // 帮助
    QMenu * helpMenu;
    QAction * aboutAction;


    window_project_about * projectAboutWindow;


private slots:
    void aboutSLOT();
    void openSLOT();


};
#endif // MAINWINDOW_H
