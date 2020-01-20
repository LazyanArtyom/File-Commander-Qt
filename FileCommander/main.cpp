#include "FileCommander.h"
#include <QtWidgets/QApplication>
#include "FileManager.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CFileCommander w;
	w.show();

	CFileManager *pManager = new CFileManager();
	pManager->copy_dir_recursive("C:\\Users\\davith\\Desktop\\xxx", "C:\\Users\\davith\\Desktop\\dest", true);


	return a.exec();
}
