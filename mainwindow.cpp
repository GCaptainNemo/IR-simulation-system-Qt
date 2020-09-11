#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{
}



void MainWindow::createActions()
{

    // 文件菜单

    this->newAction = new QAction(tr("新建"), this);
    this->newAction->setShortcut(tr("Ctrl+N"));

    this->openModelAction = new QAction(tr("打开模型"), this);
    this->openPrjAction = new QAction(tr("打开项目"), this);

    this->saveRGBModelAction = new QAction(tr("保存可见光模型"), this);
    this->saveIRModelAction = new QAction(tr("保存红外模型"), this);
    this->savePrjAction = new QAction(tr("保存工程项目"), this);
    this->saveMergeSceneAction = new QAction(tr("保存合成场景"), this);

    this->saveAsAction = new QAction(tr("另存为"), this);
    this->printAction = new QAction(tr("打印"), this);
    this->printPreviewAction = new QAction(tr("打印预览"), this);
    this->printSettingAction = new QAction(tr("打印设置"), this);
    this->exitAction = new QAction(tr("退出"), this);

    // 模式菜单

    this->rgbWaveAction = new QAction(tr("可见光波段"), this);
    this->irWaveAction = new QAction(tr("红外波段"), this);
    this->cameraWalkAction = new QAction(tr("相机漫游"), this);
    this->modelEditAction = new QAction(tr("模型编辑"), this);
    this->faceEditAction = new QAction(tr("面片编辑"), this);
    this->verticeEditAction = new QAction(tr("顶点编辑"), this);

    // 显示菜单

    this->frontViewAction = new QAction(tr("正视图"), this);
    this->aboveViewAction = new QAction(tr("俯视图"), this);
    this->leftViewAction = new QAction(tr("左视图"), this);
    this->textureAction = new QAction(tr("纹理"), this);
    this->gridAction = new QAction(tr("网格"), this);
    this->verticeAction = new QAction(tr("顶点"), this);
    this->horizonWaterAction = new QAction(tr("水平面"), this);
    this->coordinateAction = new QAction(tr("坐标系"), this);
    this->shadowAction = new QAction(tr("阴影"), this);


    // 红外仿真菜单

    this-

}



void MainWindow::createMenus()
{

    //    file menu


    this->fileMenu = menuBar()->addMenu(tr("文件"));
    this->fileMenu->addAction(this->newAction);
    this->openMenu = this->fileMenu->addMenu(tr("打开"));
    this->openMenu->addAction(this->openModelAction);
    this->openMenu->addAction(this->openPrjAction);
    this->saveMenu = this->fileMenu->addMenu(tr("保存"));
    this->saveMenu->addAction(this->saveRGBModelAction);
    this->saveMenu->addAction(this->saveIRModelAction);
    this->saveMenu->addAction(this->savePrjAction);
    this->saveMenu->addAction(this->saveMergeSceneAction);
    this->fileMenu->addSeparator();

    this->fileMenu->addAction(this->printAction);
    this->fileMenu->addAction(this->printPreviewAction);
    this->fileMenu->addAction(this->printSettingAction);
    this->fileMenu->addSeparator();

    this->fileMenu->addAction(this->exitAction);

    //  模式菜单

    this->patternMenu = menuBar()->addMenu(tr("模式"));
    this->lightWaveMenu = this->patternMenu->addMenu(tr("观察波段"));
    this->lightWaveMenu->addAction(this->rgbWaveAction);
    this->lightWaveMenu->addAction(this->irWaveAction);
    this->patternMenu->addAction(this->cameraWalkAction);
    this->patternMenu->addAction(this->modelEditAction);
    this->patternMenu->addAction(this->faceEditAction);
    this->patternMenu->addAction(this->verticeEditAction);
    this->patternMenu->addAction(this->textureAction);
    this->patternMenu->addAction(this->gridAction);
    this->patternMenu->addAction(this->verticeAction);
    this->patternMenu->addAction(this->horizonWaterAction);
    this->patternMenu->addAction(this->coordinateAction);
    this->patternMenu->addAction(this->shadowAction);

    // 红外仿真菜单





    // show menu
    this->showMenu = menuBar()->addMenu(tr("显示"));
    this->observeMenu = this->showMenu->addMenu(tr("观察视图"));
    this->observeMenu->addAction(this->frontViewAction);
    this->observeMenu->addAction(this->aboveViewAction);
    this->observeMenu->addAction(this->leftViewAction);



    this->settingmenu = menuBar()->addMenu(tr("系统配置"));
    this->settingmenu->addAction(this->systemSettingAction);
    this->settingmenu->addAction(this->createPdfAction);

    //    parameter input menu


    this->inputmenu = menuBar()->addMenu(tr("参数输入"));
    this->inputmenu->addAction(this->inputParAction);
    this->inputmenu->addAction(this->coalQualityCalculationAction);

    //    equipment menu

    this->equipmentmenu= menuBar()->addMenu(tr("设备参数"));
    this->equipmentmenu->addAction(this->absorberParAction);

    this->smokeSystemmenu = this->equipmentmenu->addMenu(tr("烟气系统"));
    this->smokeSystemmenu->addAction(this->pressureAirBlowerAction);
    this->smokeSystemmenu->addAction(this->heatExchangerAction);


    this->so2AbsorbSystemmenu = this->equipmentmenu->addMenu(tr("SO2吸收系统"));
    this->so2AbsorbSystemmenu ->addAction(this->oxidationAirBlowerAction);
    this->so2AbsorbSystemmenu ->addAction(this->slurryCirculationPumpAction);
    this->so2AbsorbSystemmenu ->addAction(this->caso4DischargePumpAction);



}

