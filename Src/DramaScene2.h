/* Waiting For Wind

   ͳһ��������
   1.��������ĸ��д
   2.��������������������ĸСд����������ÿ��������������ĸ��д���磺 addChild(), runAction()�ȵ�
   3.������ȫСд�����ʼ����»��߷ָ�磺x_position, y_position�ȵȡ�*/

#ifndef DRAMASCENE2_H
#define DRAMASCENE2_H

#include "cocos2d.h"
#include "Drama.h"
#include "GameScene2.h"

USING_NS_CC;

class DramaScene2 : public Layer
{
public:
	static Scene* createScene();
	virtual bool init();
	void update(float dt);
	CREATE_FUNC(DramaScene2);
};

#endif