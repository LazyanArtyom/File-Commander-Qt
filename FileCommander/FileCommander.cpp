#include "FileCommander.h"
#include <QDir>


CFileCommander::CFileCommander(QWidget *parent)
	: QWidget(parent)
{
	m_pLFSModel = new QFileSystemModel();
	m_pLFSModel->setFilter(QDir::AllEntries);
	m_pLFSModel->setRootPath("");
	m_pRFSModel = new QFileSystemModel();
	m_pRFSModel->setFilter(QDir::AllEntries);
	m_pRFSModel->setRootPath("");
	
	m_pLFSView = new QListView();
	m_pLFSView->setSelectionMode(QAbstractItemView::ExtendedSelection);
	m_pRFSView = new QListView();
	m_pRFSView->setSelectionMode(QAbstractItemView::ExtendedSelection);

	connect(m_pLFSView, SIGNAL(doubleClicked(QModelIndex const&)), this, SLOT(onSourceDoubleClicked(QModelIndex const&)));
	connect(m_pRFSView, SIGNAL(doubleClicked(QModelIndex const&)), this, SLOT(onSourceDoubleClicked(QModelIndex const&)));

	m_pLFSView->setModel(m_pLFSModel);
	m_pRFSView->setModel(m_pRFSModel);
	m_pLFSView->setRootIndex(m_pLFSModel->index(""));
	m_pRFSView->setRootIndex(m_pRFSModel->index(""));
	m_pMainLayout = new QHBoxLayout();
	m_pBtnsPanel = new CButtonsPanel();

	QPushButton* pBtnCopyLeft = new QPushButton(QIcon(":/FileCommander/Resources/copyLeft.png"), "");
	QPushButton* pBtnMoveLeft = new QPushButton(QIcon(":/FileCommander/Resources/moveLeft.png"), "");		

	QPushButton* pBtnCopyRight = new QPushButton(QIcon(":/FileCommander/Resources/copyRight.png"), "");
	QPushButton* pBtnMoveRight = new QPushButton(QIcon(":/FileCommander/Resources/moveRight.png"), "");

	pBtnCopyLeft->setIconSize(QSize(40, 40));
	pBtnMoveLeft->setIconSize(QSize(40, 40));
	pBtnCopyRight->setIconSize(QSize(40, 40));
	pBtnMoveRight->setIconSize(QSize(40, 40));

	m_pBtnsPanel->addButton(pBtnCopyLeft);
	m_pBtnsPanel->addButton(pBtnCopyRight);
	
	m_pBtnsPanel->addButton(pBtnMoveLeft);
	m_pBtnsPanel->addButton(pBtnMoveRight);

	m_pMainLayout->addWidget(m_pLFSView);
	m_pMainLayout->addWidget(m_pBtnsPanel);
	m_pMainLayout->addWidget(m_pRFSView);

	setLayout(m_pMainLayout);
}

void CFileCommander::onSourceDoubleClicked(QModelIndex const& nIndex)
{
	QListView* pListView = qobject_cast<QListView*>(sender());
	QFileSystemModel* pModel = dynamic_cast<QFileSystemModel*>(pListView->model());
	if (pModel == nullptr)
		return;

	QFileInfo oFileInfo = pModel->fileInfo(nIndex);
	if (oFileInfo.fileName() == "..")
	{
		QDir oDir = oFileInfo.dir();
		oDir.cdUp();
		pListView->setRootIndex(pModel->index(oDir.absolutePath()));
	}
	else if (oFileInfo.fileName() == ".")
	{
		pListView->setRootIndex(pModel->index(""));
	}
	else if (oFileInfo.isDir())
	{
		pListView->setRootIndex(nIndex);
	}
}

void CFileCommander::onCopyLeft(QModelIndex& nIndex)
{
	QModelIndexList lstSelectedItems = m_pRFSView->selectionModel()->selectedIndexes();

}

void CFileCommander::onCopyRight(QModelIndex& nIndex)
{
}
