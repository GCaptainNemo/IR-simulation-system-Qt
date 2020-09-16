#ifndef GLMODEL_H
#define GLMODEL_H

#include <QString>
#include <QList>

class glModel
{
public:
    glModel();
    QString path;//obj文件路径
    QString mtllibName;//材质文件名称

//    QList<Point3> list_Vertices;//节点对象集合
//    QList<VertNormals> list_Normals;//节点向量集合
//    QList<TextCoords> list_Textcoords;//纹理坐标集合
//    QList<Face> list_Faces;//面集合
//    QList<Material> list_Materials;//材质集合
//    QList<FacetNormal> list_FaceNormal;//面向量集合
//    QList<QString> list_ImagePath;//贴图路径集合,全路径

//    //GLfloat Center[3];//进行归一化之后的坐标中心

//    int textureArray[MAX_TEXTURE];//注册纹理数组


public:
    void openOBJ();
    void outputOBJ();
    void openMTL();






};

#endif // GLMODEL_H
