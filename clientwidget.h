#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QWidget>
#include <QTcpServer>  //监听套接字
#include <QTcpSocket> //通信套接字

namespace Ui {
class ServerWidget;
}

class ServerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServerWidget(QWidget *parent = 0);
    ~ServerWidget();

private slots:
    void on_ButtonSend_clicked();

    void on_ButtonClose_clicked();

private:
    Ui::ServerWidget *ui;

    QTcpServer *tcpServer; //定义监听套接字tcpServer
    QTcpSocket *tcpSocket; //定义通信套接字tcpSocket

};

#endif // SERVERWIDGET_H
