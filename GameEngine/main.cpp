#include <iostream>
#include "Library/Lua5.3/include/lua.hpp"

#pragma comment(lib,"Library/Lua5.3/lib/lua53.lib")
using namespace std;


/*
��Ŀ¼����ģ�����ƣ���һ����include��srcĿ¼
libraryģ�����Ǹ���Ŀʹ�õĵ������⣬Ŀ¼������ ����/include. src. libĿ¼��dll�ļ�Ӧ���ڸ�Ŀ¼�����ʹ�þ�̬��
*/

int main()
{
	//����һ��state
	lua_State *L = luaL_newstate();

	cout << "hello game engine!" << endl;

	int a;
	cin>>a;

	return 0;
}