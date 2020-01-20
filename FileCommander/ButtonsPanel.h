#ifndef CActionsPanel_H
#define CActionsPanel_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class CButtonsPanel : public QWidget
{
	Q_OBJECT
public:
	CButtonsPanel(QWidget* pParent = nullptr);
	~CButtonsPanel();

	void addButton(QPushButton* pBtn);

private:
	QVBoxLayout* m_pVMainLayout;

};

#endif // CActionsPanel_H

