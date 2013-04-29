#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();

private:
    QPushButton *m_btn_eternity;
    QPushButton *m_btn_tab;
    QPushButton *m_btn_3;
    QPushButton *m_btn_4;
    QPushButton *m_btn_exit;

    QGridLayout *m_grid_layout;

private slots:
    void openEternityForm();
    void openTabForm();
};

#endif // MAINWINDOW_H
