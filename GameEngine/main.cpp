#include <iostream>
#include "Library/Lua5.3/include/lua.hpp"

#pragma comment(lib,"Library/Lua5.3/lib/lua53.lib")
using namespace std;


/*
根目录下是模块名称，下一级是include和src目录
library模块下是该项目使用的第三方库，目录定义是 库名/include. src. lib目录。dll文件应该在根目录，最好使用静态库
*/

int main()
{
	//创建一个state
	lua_State *L = luaL_newstate();

	cout << "hello game engine!" << endl;

	int a;
	cin>>a;

	return 0;
}