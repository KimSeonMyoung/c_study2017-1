#include "stdafx.h"

void ObjectBullet_OnApply(S_ObjectBullet *pThis,double fDelta)
{
	switch (pThis->m_nFSM)
	{
	case 0: // ready
		pThis->m_nFSM = 10;
		break;
	case 10: //go
		pThis->m_vPosition += pThis->m_vDirection*pThis->m_fVelocity*fDelta;
		break;
	default:
		break;
	}

}
void ObjectBullet_OnRender(S_ObjectBullet *pThis, Graphics *pGrp)
{
	Pen pen(Color(0, 0, 0));
	pGrp->DrawEllipse(&pen, 
		(int)(pThis->m_vPosition.X - pThis->m_fSize / 2.0),
		(int)(pThis->m_vPosition.Y - pThis->m_fSize / 2.0),
		pThis->m_fSize, pThis->m_fSize
		);

}
void ObjectBullet_Setup(S_ObjectBullet *pThis,irr::core::vector2df &vStartPos, 
	irr::core::vector2df &vTaegetPos,
	irr::f64 fVolumeSize,
	irr::f64 fVelocity
)
{
	pThis->m_fSize = fVolumeSize;
	pThis->m_fVelocity = fVelocity;
	pThis->m_nFSM = 0; //ready
	pThis->m_vPosition = vStartPos;
	pThis->m_vDirection = vTaegetPos - vStartPos;
	pThis->m_vDirection.normalize();
}