#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include <QTimer>
#include <QTime>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	/* ����� ������������ ������ ���� ���� */
private slots:
	void slotTimerAlarm();

private:
	Ui::MainWindow *ui;
	/* �� ��� ������ QTimer */
	QTimer *timer;
};

#endif // MAINWINDOW_H