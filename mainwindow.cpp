#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QToolBar* toolbar[] = {
        ui->toolbar1,
        ui->toolbar2
    };

    for (int i = 0; i < 2; i++) {
        toolbar[i]->addAction(QIcon(":/apps.svg"), "ようこそ", this, &MainWindow::onToolbarClicked)->setCheckable(true);
        toolbar[i]->addAction(QIcon(":/format_align_left.svg"), "編集", this, &MainWindow::onToolbarClicked)->setCheckable(true);
        toolbar[i]->addAction(QIcon(":/create.svg"), "デザイン", this, &MainWindow::onToolbarClicked)->setCheckable(true);
        toolbar[i]->addAction(QIcon(":/bug_report.svg"), "デバッグ", this, &MainWindow::onToolbarClicked)->setCheckable(true);
        toolbar[i]->addAction(QIcon(":/build.svg"), "プロジェクト", this, &MainWindow::onToolbarClicked)->setCheckable(true);
        toolbar[i]->addAction(QIcon(":/help.svg"), "ヘルプ", this, &MainWindow::onToolbarClicked)->setCheckable(true);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onToolbarClicked(bool checked)
{
    QAction *action = qobject_cast<QAction*>(sender());
    //action->setChecked(checked);
}
