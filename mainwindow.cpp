#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->centralWidget = new central_widget(this);

    this->setCentralWidget(this->centralWidget);
    this->createActions();
    this->createMenus();

    this->setWindowTitle(QStringLiteral("红外仿真模拟系统"));

}

MainWindow::~MainWindow()
{


}



void MainWindow::createActions()
{

    // 文件菜单

    this->newAction = new QAction(QStringLiteral("新建"), this);
    this->newAction->setShortcut(QStringLiteral("Ctrl+N"));

    this->openModelAction = new QAction(QStringLiteral("打开模型"), this);
    connect(openModelAction , SIGNAL(triggered()), this, SLOT(openSLOT()));


    this->openPrjAction = new QAction(QStringLiteral("打开项目"), this);

    this->saveRGBModelAction = new QAction(QStringLiteral("保存可见光模型"), this);
    this->saveIRModelAction = new QAction(QStringLiteral("保存红外模型"), this);
    this->savePrjAction = new QAction(QStringLiteral("保存工程项目"), this);
    this->saveMergeSceneAction = new QAction(QStringLiteral("保存合成场景"), this);

    this->saveAsAction = new QAction(QStringLiteral("另存为"), this);
    this->printAction = new QAction(QStringLiteral("打印"), this);
    this->printPreviewAction = new QAction(QStringLiteral("打印预览"), this);
    this->printSettingAction = new QAction(QStringLiteral("打印设置"), this);
    this->exitAction = new QAction(QStringLiteral("退出"), this);
    connect(exitAction , SIGNAL(triggered()), this, SLOT(close()));


    // 模式菜单

    this->rgbWaveAction = new QAction(QStringLiteral("可见光波段"), this);
    this->irWaveAction = new QAction(QStringLiteral("红外波段"), this);
    this->cameraWalkAction = new QAction(QStringLiteral("相机漫游"), this);
    this->modelEditAction = new QAction(QStringLiteral("模型编辑"), this);
    this->faceEditAction = new QAction(QStringLiteral("面片编辑"), this);
    this->verticeEditAction = new QAction(QStringLiteral("顶点编辑"), this);

    // 显示菜单

    this->frontViewAction = new QAction(QStringLiteral("正视图"), this);
    this->aboveViewAction = new QAction(QStringLiteral("俯视图"), this);
    this->leftViewAction = new QAction(QStringLiteral("左视图"), this);
    this->textureAction = new QAction(QStringLiteral("纹理"), this);
    this->gridAction = new QAction(QStringLiteral("网格"), this);
    this->verticeAction = new QAction(QStringLiteral("顶点"), this);
    this->horizonWaterAction = new QAction(QStringLiteral("水平面"), this);
    this->coordinateAction = new QAction(QStringLiteral("坐标系"), this);
    this->shadowAction = new QAction(QStringLiteral("阴影"), this);


    // 红外仿真菜单

    this->setCalculateParAction = new QAction(QStringLiteral("计算参数设置"), this);
    this->scenePreCalculateAction = new QAction(QStringLiteral("场景与计算"), this);
    this->irCharacterCalculateAction = new QAction(QStringLiteral("红外特性计算"), this);
    this->irCharacterRenderAction = new QAction(QStringLiteral("红外特性渲染"), this);
    this->loadinRenderResultAction = new QAction(QStringLiteral("载入渲染结果"), this);


    this->sceneGenerateAction = new QAction(QStringLiteral("场景生成"), this);
    this->sceneCalcualteAction = new QAction(QStringLiteral("场景计算"), this);
    this->sceneRenderAction = new QAction(QStringLiteral("场景渲染"), this);

    this->atmosphereParSetAction = new QAction(QStringLiteral("大气效应参数设置"), this);
    this->atmosphereRenderAction = new QAction(QStringLiteral("大气效应渲染"), this);

    this->sensorParSetAction = new QAction(QStringLiteral("传感器效应参数设置"), this);
    this->sensorRenderAction = new QAction(QStringLiteral("传感器效应渲染"), this);

    // 基准图评测与评估

    this->basePhotoEvaluateAction = new QAction(QStringLiteral("基准图评估"), this);
    this->basePhotoMatchAction = new QAction(QStringLiteral("基准图匹配"), this);

    // 三维重建

     this->threeDreconstructAction = new QAction(QStringLiteral("三维重建"), this);

    // 帮助

    this->aboutAction = new QAction(QStringLiteral("关于"), this);
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(aboutSLOT()));
}



void MainWindow::createMenus()
{

    //    file menu


    this->fileMenu = menuBar()->addMenu(QStringLiteral("文件"));
    this->fileMenu->addAction(this->newAction);
    this->openMenu = this->fileMenu->addMenu(QStringLiteral("打开"));
    this->openMenu->addAction(this->openModelAction);
    this->openMenu->addAction(this->openPrjAction);
    this->saveMenu = this->fileMenu->addMenu(QStringLiteral("保存"));
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

    this->patternMenu = menuBar()->addMenu(QStringLiteral("模式"));
    this->lightWaveMenu = this->patternMenu->addMenu(QStringLiteral("观察波段"));
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



    // show menu
    this->showMenu = menuBar()->addMenu(QStringLiteral("显示"));
    this->observeMenu = this->showMenu->addMenu(QStringLiteral("观察视图"));
    this->observeMenu->addAction(this->frontViewAction);
    this->observeMenu->addAction(this->aboveViewAction);
    this->observeMenu->addAction(this->leftViewAction);

    // 红外仿真菜单

    this->irSimulateMenu = menuBar()->addMenu(QStringLiteral("红外仿真"));
    this->irCharacterMenu = this->irSimulateMenu->addMenu(QStringLiteral("红外特性分析"));
    this->irCharacterMenu->addAction(this->setCalculateParAction);
    this->irCharacterMenu->addAction(this->scenePreCalculateAction);
    this->irCharacterMenu->addAction(this->irCharacterCalculateAction);
    this->irCharacterMenu->addAction(this->irCharacterRenderAction);
    this->irCharacterMenu->addAction(this->loadinRenderResultAction);


    this->sceneMergeRenderMenu = this->irSimulateMenu->addMenu(QStringLiteral("场景合成渲染"));
    this->sceneMergeRenderMenu ->addAction(this->sceneGenerateAction);
    this->sceneMergeRenderMenu ->addAction(this->sceneCalcualteAction);
    this->sceneMergeRenderMenu ->addAction(this->sceneRenderAction);


    this->atmosphereSimulateMenu = this->irSimulateMenu->addMenu(QStringLiteral("大气效应仿真"));
    this->atmosphereSimulateMenu->addAction(this->atmosphereParSetAction);
    this->atmosphereSimulateMenu->addAction(this->atmosphereRenderAction);


    this->sensorEffectMenu = this->irSimulateMenu->addMenu(QStringLiteral("传感器效应"));
    this->sensorEffectMenu ->addAction(this->sensorParSetAction);
    this->sensorEffectMenu ->addAction(this->sensorRenderAction);


    // 基准图评测与评估


    this->basePhotoEvaluateMenu = menuBar()->addMenu(QStringLiteral("基准图评测与评估"));
    this->basePhotoEvaluateMenu->addAction(this->basePhotoEvaluateAction);
    this->basePhotoEvaluateMenu->addAction(this->basePhotoMatchAction);


    // 三维重建

    this->threeDreconstructMenu = menuBar()->addMenu(QStringLiteral("三维重建"));
    this->threeDreconstructMenu->addAction(this->threeDreconstructAction);

    // 帮助

    this->helpMenu = menuBar()->addMenu(QStringLiteral("帮助"));
    this->helpMenu->addAction(this->aboutAction);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    switch(QMessageBox::question(this, QStringLiteral("关闭窗口"), QStringLiteral("你还未保存，确定要退出程序？"),
                                 QMessageBox::Yes|QMessageBox::No, QMessageBox::Yes))

    {
    case QMessageBox::Yes:{
        event->accept();
        break;
    }
    case QMessageBox::No:
        event->ignore();
        break;
    default:
        break;
    }
    return;
}


void MainWindow::openSLOT()
{
    QString fileName = QFileDialog::getOpenFileName(
                    this, QStringLiteral("打开三维模型"),
                    "./", QStringLiteral("3D files(*.obj *.ply)"));
    if(fileName.isEmpty())
        {
            QMessageBox mesg;
            mesg.warning(this, QStringLiteral("警告"), QStringLiteral("打开失败!"));
            return;
        }
    else {
        QVector <float> verticePoints;
        if (this->parseThreeDFiles(fileName, verticePoints))
            this->centralWidget->startRenderObjFiles();

    }

}

bool MainWindow::parseThreeDFiles(QString fileName, QVector<float> &vPoints)
{
    if (fileName.mid(fileName.lastIndexOf('.')) != ".obj"&&fileName.mid(fileName.lastIndexOf('.')) != ".OBJ")
        {
            qDebug() << "file is not a obj file!";
            return false;
        }
        QFile objfile(fileName);
        if (!objfile.open(QIODevice::ReadOnly))
        {
            qDebug() << "open" << fileName << "failed";
            return false;
        }
        else
        {
            qDebug() << "open" << fileName << "success!";
        }
        QVector<float> vertextPoints, texturePoints;
        QVector<std::tuple< int, int>> facesIndexs;
     
        while (!objfile.atEnd())
        {
            QByteArray lineData = objfile.readLine();
     
            lineData = lineData.remove(lineData.count() - 2, 2);
            qDebug() << lineData;
     
            if (lineData == "")
                continue;
            QList<QByteArray> strValues = lineData.split(' ');
            strValues.removeAll("");
            QString dataType = strValues.takeFirst();
            if (dataType == "v")
            {
                for(int i=0;i<strValues.count();i++)
                {
                    if (strValues[i] != "")
                        vertextPoints.push_back( strValues[i].toFloat() );
                }
     
            }
     
            else if (dataType == "f")
            {
                if (strValues.size() == 4)
                {
                    strValues.push_back(strValues.at(0));
                    strValues.push_back(strValues.at(2));
     
                }
                std::transform(strValues.begin(), strValues.end(), std::back_inserter(facesIndexs), [](QByteArray &str) {
                    QList<QByteArray> intStr = str.split('/');
     
                    return std::make_tuple(intStr.first().toInt(), intStr.last().toInt());
     
                });
     
            }
     
        }
        if (vertextPoints.count() != 0)
        {
            qDebug() <<"vertpoints: "<< vertextPoints.count();
        }
        else
        {
            qDebug() << "none vert points";
            return false;
        }
     
        
        if (facesIndexs.count() != 0)
        {
            qDebug() << "facepoints: "<<facesIndexs.count();
        }
        else
        {
            qDebug() << "none faces";
            return false;
        }
     
        for (auto &verFaceInfo:facesIndexs)
        {
            int vIndex = std::get<0>(verFaceInfo);
     
            int vPointSizes = vertextPoints.count() / 3;
            //将顶点坐标放入
            vPoints << vertextPoints.at(vIndex * 3 - 3);
            vPoints << vertextPoints.at(vIndex * 3 - 2);
            vPoints << vertextPoints.at(vIndex * 3 - 1);
        }
        vertextPoints.clear();
        facesIndexs.clear();
     
        objfile.close();
        return true;
    
    
}

void MainWindow::aboutSLOT()
{
    this->projectAboutWindow = new window_project_about(this);
//    this->projectAboutWindow->setWindowModality(Qt::ApplicationModal);
//    this->projectAboutWindow->exec();
    this->projectAboutWindow->setModal(true);
    this->projectAboutWindow->showNormal();

}

