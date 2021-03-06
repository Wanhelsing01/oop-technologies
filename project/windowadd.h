#ifndef WINDOWADD_H
#define WINDOWADD_H

#include <QMainWindow>
#include "data/graph.h"

namespace Ui {
class WindowAdd;
}

class WindowAdd : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowAdd(QWidget *parent = nullptr);

    ~WindowAdd();
signals:
    void VertexAdded(data::Vertex<Elem> *v);
    void EdgeAdded(data::Edge<Elem> *e);


private slots:
    void on_AddVertexBut_clicked();

    void on_pushButton_clicked();

private:
    Ui::WindowAdd *ui;
};

#endif // WINDOWADD_H
