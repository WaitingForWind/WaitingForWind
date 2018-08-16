#include "StageChoosingScene.h"

int StageChoosingScene::stageNum = 1;

Scene* StageChoosingScene::createScene()
{
	auto layer = StageChoosingScene::create();
	layer->setTag(0);

	Scene* scene = Scene::create();

	scene->addChild(layer);

	return scene;
}

bool StageChoosingScene::init()
{
	/* To do �������������Ҫ��ӵĴ���*/
	Size visibleSize = Director::getInstance()->getVisibleSize();

	// Add back ground
	auto bg = Sprite::create("StageChoosing.png");
	bg->setPosition(visibleSize.width/2, visibleSize.height/2);
	this->addChild(bg);

	// ��ʼ���˵�
	initMenu();

	// �����Ϣ��Ӧ
	

	return true;
}



void StageChoosingScene::initMenu()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();

	Vector<MenuItem*> vector;

	auto menu = Menu::create(NULL);
	
	// �ֶ������Ӱ�ť
	auto item1 = MenuItemImage::create("LuffyStage1.png", 
		"LuffyStage1.png", 
		"LuffyStage1.png",
		CC_CALLBACK_1(StageChoosingScene::onLuffyStage1, this));
	item1->setPosition(106, 600);
	menu->addChild(item1);

	auto item2 = MenuItemImage::create("LuffyStage2.png", 
		"LuffyStage2.png", 
		"LuffyStage2.png",
		CC_CALLBACK_1(StageChoosingScene::onLuffyStage2, this));
	item2->setPosition(106*3, 600);
	menu->addChild(item2);

	auto item4 = MenuItemImage::create("WindComesStage1.png", 
		"WindComesStage1.png", 
		"WindComesStage1.png",
		CC_CALLBACK_1(StageChoosingScene::onWindComesStage1, this));
	item4->setPosition(106,330);
	menu->addChild(item4);

	auto back_item = MenuItemFont::create("Back", CC_CALLBACK_1(StageChoosingScene::onBack, this));
	back_item->setPosition(580, 50);
	menu->addChild(back_item);


	// ��Ӳ˵���Layer��
	menu->setPosition(Vec2::ZERO);
	this->addChild(menu);

}

void StageChoosingScene::onBack(Ref *pSender)
{
	Director::getInstance()->popScene();
}


void StageChoosingScene::onLuffyStage1(Ref* pSender)
{
	auto director = Director::getInstance();
	auto ds1 = DramaScene::createScene();
	auto transScene = TransitionCrossFade::create(3, ds1);

	director->pushScene(transScene);
}

void StageChoosingScene::onLuffyStage2(Ref* pSender)
{
	auto director = Director::getInstance();
	auto ds2 = DramaScene2::createScene();
	auto transScene = TransitionCrossFade::create(3, ds2);

	director->pushScene(transScene);
}

void StageChoosingScene::onWindComesStage1(Ref* pSender)
{
	auto director = Director::getInstance();
	auto ds4 = DramaScene4::createScene();
	auto transScene = TransitionCrossFade::create(3, ds4);

	director->pushScene(transScene);
}
