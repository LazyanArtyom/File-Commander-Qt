#ifndef FileManager_H
#define FileManager_H

#include <QFile>
#include <QDir>
#include <QFileInfo>
#include "QString"

class CFileManager
{
public:
	CFileManager();
	~CFileManager();

	bool copy_dir_recursive(QString from_dir, QString to_dir, bool replace_on_conflit);
};

#endif // FileManager_H
