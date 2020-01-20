#include "ButtonsPanel.h"

CButtonsPanel::CButtonsPanel(QWidget* pParent) : QWidget(pParent)
{
	setContentsMargins(0, 0, 0, 0);
	setFixedWidth(100);
	m_pVMainLayout = new QVBoxLayout();
	m_pVMainLayout->setMargin(0);
	m_pVMainLayout->setSpacing(0);
	m_pVMainLayout->addStretch(0);
	m_pVMainLayout->setAlignment(Qt::AlignTop);
	setLayout(m_pVMainLayout);
}


CButtonsPanel::~CButtonsPanel()
{
}

void CButtonsPanel::addButton(QPushButton* pBtn)
{
	pBtn->setFixedSize(50, 50);
	m_pVMainLayout->addWidget(pBtn);
}
