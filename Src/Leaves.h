/* Waiting For Wind  @ Team WDLang

   ͳһ��������
   1.��������ĸ��д
   2.��������������������ĸСд����������ÿ��������������ĸ��д���磺 addChild(), runAction()�ȵ�
   3.������ȫСд�����ʼ����»��߷ָ�磺x_position, y_position�ȵȡ�
   
   StageChoosingScene�������ʦ��֪��
   1.�������Ϊ����ÿ5�����Ȼ���б��ֹ���������
   */

#ifndef LEAVES_H
#define LEAVES_H

#include "cocos2d.h"

USING_NS_CC;

class Leaves : public Sprite
{
public:
	Leaves(void);
	~Leaves(void);

	static Leaves* create(int leaves_num);
};

#endif

