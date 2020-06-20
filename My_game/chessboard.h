#pragma once
#define len 4				//����һ��8*8������
class chessboard
{
protected:
	int chess[len][len] = { 0 };
public:
	void work();
	bool left_a();
	void left();
	bool right_a();
	void right();
	bool up_a();
	void up();
	bool down_a();
	void down();
	void display();
	bool Isstart(char ch);
	bool Isover(char ch);
};

bool chessboard::Isstart(char ch)
{
	if (ch == '\n')return true;
	else return false;
}

void chessboard::display()
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << chess[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "WASD�����ĸ�����ENTER��ʼ��Ϸ����P������Ϸ����Сд�������" << endl;
}

bool chessboard::left_a()
{

}

bool chessboard::Isover(char ch)
{
	bool flag=false;
	if (ch == 'p' || ch == 'P') flag = true;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (chess[i][j] == 2048)
			{
				flag = true;
			}
		}
	}
	if (!(left_a() || right_a() || up_a() || down_a()))
	{
		flag = true;
	}
	return flag;
}