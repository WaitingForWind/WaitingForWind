/* Waiting For Wind  @ Team WDLang

   ͳһ��������
   1.��������ĸ��д
   2.��������������������ĸСд����������ÿ��������������ĸ��д���磺 addChild(), runAction()�ȵ�
   3.������ȫСд�����ʼ����»��߷ָ�磺x_position, y_position�ȵȡ�
   
   TutorialScene�������ʦ��֪��
   1.���������Ǵ����淨���ܳ�����
   2.���ǿ�������һ�Ŵ�ͼƬ��������������ͼƬ����ʾ�淨���ɡ�
   3.�˳���������ӷ��ذ�ť����Ϊ��ע��ص�������
   */

#ifndef TUTORIAL_SCENE
#define TUTORIAL_SCENE

#include "cocos2d.h"
#include "BasicScene.h"

USING_NS_CC;

class TutorialScene : public BasicScene
{
public:
	static Scene* createScene();
	virtual void resetHatPosition();
	virtual bool init();

	CREATE_FUNC(TutorialScene);
};

#endif

