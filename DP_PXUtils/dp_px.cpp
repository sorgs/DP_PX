#include<stdlib.h>
#include<iostream>
#include<String>

using namespace std;

void PX_PD(float b) {
	while (true)
	{
		float a;
		cout << "������px��";
		cin >> a;
		cout << "dp =  " << a / b << endl;
	}

}

void PD_PX(float b) {
	while (true)
	{
		float a;
		cout << "������pd��";
		cin >> a;
		cout << "dx =  " << a * b << endl;
	}

}

int main() {
	cout << "------------------------------------------------------------------------------------------------------------" << endl;
	cout << "author��sorgs.������Ҫ�Ľ��ĵط���ӭ���QQ��1042746391" << endl << " ���ڿ���Android����Ա���������Ӹ���ͼƬ�ĵ�λ�ͳ���λ��һ�£����Բ�����Ҫת����(�������ݻ��ڱ�׼)" << endl;
	cout << "dp���������أ��ڲ�ͬ�������ܶȵ��豸�ϻ��Զ�����,����Ͳ��ñ�׼�ľ�OK����sp��dp����һ����" << endl;
	cout << "��mdpi�ֱ��ʣ������ܶ�Ϊ160��1dp=1px" << endl;
	cout << "��hdpi�ֱ��ʣ������ܶ�Ϊ240��1dp=1.5px" << endl;
	cout << "��xhdpi�ֱ��ʣ������ܶ�Ϊ320��1dp=2px" << endl;
	cout << "��xxhdpi�ֱ��ʣ������ܶ�Ϊ480��1dp=3px" << endl;
	cout << "���㹫ʽ��1dp*�����ܶ�/160 = ʵ��������" << endl;
	cout << "------------------------------------------------------------------------------------------------------------" << endl;


number3:
	cout << "��������Ҫת������ʽ��1(px->dp) 2(dp->px)" << endl;
	string i;
	cin >> i;
	if (i == "1") {
	number1:
		cout << "��������Ҫ����ķֱ���: 1(mdpi) 2(hdpi) 3(xhdpi) 4(xxhdpi)" << endl;
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
			cout << "ò������������" << endl;
			goto number1;
		}

	}if (i == "2") {
	number2:
		cout << "��������Ҫ����ķֱ���: 1(mdpi) 2(hdpi) 3(xhdpi) 4(xxhdpi)" << endl;
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
			cout << "ò������������" << endl;
			goto number2;

		}
	}
	else {
		cout << "��������Ŷ��" << endl;
		goto number3;
	}

}

