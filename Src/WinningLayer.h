/* Waiting For Wind

   ͳһ��������
   1.��������ĸ��д
   2.��������������������ĸСд����������ÿ��������������ĸ��д���磺 addChild(), runAction()�ȵ�
   3.������ȫСд�����ʼ����»��߷ָ�磺x_position, y_position�ȵȡ�*/

#ifndef WINNING_LAYER_H
#define WINNING_LAYER_H

#include "cocos2d.h"

USING_NS_CC;

class WinningLayer : public Layer
{
public:
	virtual bool init();
	CREATE_FUNC(WinningLayer);

	void onOkCallBack(Ref* pSender);
};

#endif

