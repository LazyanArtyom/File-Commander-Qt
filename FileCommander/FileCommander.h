#ifndef CFileCommander_H
#define CFileCommander_H

#include <QListView>
#include <QFileSystemModel>
#include <QDir>
#include <QHBoxLayout>
#include "ButtonsPanel.h"

class CFileCommander : public QWidget
{
	Q_OBJECT
public:
	CFileCommander(QWidget *parent = Q_NULLPTR);


public slots:
	//void onCopyLeft();
	//void onMoveLeft();
	void onSourceDoubleClicked(QModelIndex const& nIndex);
	void onCopyLeft(QModelIndex& nIndex);
	void onCopyRight(QModelIndex& nIndex);

private:
	QFileSystemModel* m_pLFSModel;
	QFileSystemModel* m_pRFSModel;
	QListView*		  m_pLFSView;
	QListView*		  m_pRFSView;
	QHBoxLayout*	  m_pMainLayout;
	CButtonsPanel*    m_pBtnsPanel;
};

#endif
