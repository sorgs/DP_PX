#include<stdlib.h>
#include<iostream>
#include<String>

using namespace std;

void PX_PD(float b) {
	while (true)
	{
		float a;
		cout << "请输入px：";
		cin >> a;
		cout << "dp =  " << a / b << endl;
	}

}

void PD_PX(float b) {
	while (true)
	{
		float a;
		cout << "请输入pd：";
		cin >> a;
		cout << "dx =  " << a * b << endl;
	}

}

int main() {
	cout << "------------------------------------------------------------------------------------------------------------" << endl;
	cout << "author：sorgs.如有需要改进的地方欢迎提出QQ：1042746391" << endl << " 由于开发Android程序员，美工妹子给的图片的单位和程序单位不一致，所以产生需要转换。(所有数据基于标准)" << endl;
	cout << "dp是虚拟像素，在不同的像素密度的设备上会自动适配,这里就采用标准的就OK。（sp和dp基本一样）" << endl;
	cout << "在mdpi分辨率，像素密度为160，1dp=1px" << endl;
	cout << "在hdpi分辨率，像素密度为240，1dp=1.5px" << endl;
	cout << "在xhdpi分辨率，像素密度为320，1dp=2px" << endl;
	cout << "在xxhdpi分辨率，像素密度为480，1dp=3px" << endl;
	cout << "计算公式：1dp*像素密度/160 = 实际像素数" << endl;
	cout << "------------------------------------------------------------------------------------------------------------" << endl;


number3:
	cout << "请输入需要转化的形式：1(px->dp) 2(dp->px)" << endl;
	string i;
	cin >> i;
	if (i == "1") {
	number1:
		cout << "请输入需要计算的分辨率: 1(mdpi) 2(hdpi) 3(xhdpi) 4(xxhdpi)" << endl;
		string j;
		cin >> j;
		if (j == "1") {
			PX_PD(1);
		}
		if (j == "2") {
			PX_PD(1.5);
		}
		if (j == "3") {
			PX_PD(2);
		}
		if (j == "4") {
			PX_PD(3);
		}
		else {
			cout << "貌似输入有误呢" << endl;
			goto number1;
		}

	}if (i == "2") {
	number2:
		cout << "请输入需要计算的分辨率: 1(mdpi) 2(hdpi) 3(xhdpi) 4(xxhdpi)" << endl;
		string j;
		cin >> j;
		if (j == "1") {
			PX_PD(1);
		}
		if (j == "2") {
			PX_PD(1.5);
		}
		if (j == "3") {
			PX_PD(2);
		}
		if (j == "4") {
			PX_PD(3);
		}
		else {
			cout << "貌似输入有误呢" << endl;
			goto number2;

		}
	}
	else {
		cout << "输入有误哦！" << endl;
		goto number3;
	}

}

