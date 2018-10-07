# 游戏开发技术
## 插入背景
先用Construct 2创建一个new file ,点击右键双击进入background选择保存好的图片插入背景。
![image](https://www.scirra.com/images/articles/insertobject.png)
单击右上角的X关闭纹理编辑器。如果系统提示您，请务必保存！现在，您应该在布局中看到平铺的背景对象。让我们调整它以覆盖整个布局。确保选中它，然后左侧的属性栏应显示对象的所有设置，包括其大小和位置。将其位置设置为0,0（布局的左上角），并将其大小设置为1280,1024（布局的大小）。
![image] (https://www.scirra.com/images/articles/tiledproperties.png)
## 添加图层
布局可以包含多个图层，要管理图层，单击“ 图层”选项卡，该选项卡通常位于“ 项目”栏旁边：
![image](https://www.scirra.com/images/articles/layerstab.png)
在列表中看到第0层（构造2从零开始计数，因为它在编程时效果更好）。单击铅笔图标并将其重命名为Background，因为它是背景图层。现在单击绿色的“添加”图标为其他对象添加新图层。我们称之为一个Main。最后，如果单击“ 背景”旁边的小挂锁图标，它将被锁定。这意味着将无法选择任何内容。这对我们的平铺背景非常方便，这很容易被意外选择，不需要再次触摸。但是，如果需要进行更改，只需再次单击挂锁即可解锁。
## 添加输入游戏对象
将注意力转回布局。双击以插入另一个新对象。这次，选择Mouse对象，因为我们需要鼠标输入。对Keyboard对象再次执行相同操作。
(注意：这些对象不需要放置在布局中。它们是隐藏的，并自动在项目范围内工作。现在我们项目中的所有布局都可以接受鼠标和键盘输入。)
玩家：![image](https://www.scirra.com/images/articles/player.png)
怪物：![image](https://www.scirra.com/images/articles/monster.png)
子弹：![image](https://www.scirra.com/images/articles/Bullet.png)
爆炸：![image](https://www.scirra.com/images/articles/explode.png)
1. 双击以插入新对象
2. 双击 “Sprite”对象。
3.当鼠标变为十字准线时，单击布局中的某个位置。工具提示应为“Main”。（请记住这是活动布局。）
4。弹出纹理编辑器。单击打开图标，然后加载四个纹理中的一个。
5. 关闭纹理编辑器，保存更改。您现在应该在布局中看到对象！
6. 使用control + drag，创建7或8个新怪物。
## 添加行为
单击播放器以选择对象。在属性栏中，单击“ 添加/编辑”。播放器的“行为”对话框将打开。
![image](https://www.scirra.com/images/articles/openbehaviors.png)
![image](https://www.scirra.com/images/articles/add8dir.png)
- 将8方向移动,Scroll To行为添加到玩家。
- 将Bullet移动和Destroy外部布局添加到Bullet对象（没有惊喜）
- 将子弹移动添加到Monster对象（因为它也向前移动）
- 将Fade行为添加到Explosion对象（因此它逐渐消失）出现后）。
## 创建活动
