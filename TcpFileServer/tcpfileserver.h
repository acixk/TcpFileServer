#ifndef TCPFILESERVER_H
#define TCPFILESERVER_H

#include <QDialog>

class TcpFileServer : public QDialog
{
    Q_OBJECT

public:
    explicit TcpFileServer(QWidget *parent = nullptr);
    ~TcpFileServer() override;
};
#endif // TCPFILESERVER_H
