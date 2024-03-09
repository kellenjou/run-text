// TESTC.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
using namespace std;
int main()
{
	//int num = 123, i;
	////cout.fill('*');
	//cout << 0 << "\n"; //以4Byte寬度顯示num
	//cout << 1 << "\n"; //以4Byte寬度顯示num
	//cout << 12 << "\n"; //以4Byte寬度顯示num
	//cout << 123 << "\n"; //以4Byte寬度顯示num
	//cout << 1234 << "\n"; //以4Byte寬度顯示num
	//cout << 12345 << "\n"; //以4Byte寬度顯示num
	//cout << setw(10) << 0 << "\n"; //以4Byte寬度顯示num
	//cout << setw(10) << 1 << "\n"; //以4Byte寬度顯示num
	//cout << setw(10) << 12 << "\n"; //以4Byte寬度顯示num
	//cout << setw(10) << 123 << "\n"; //以4Byte寬度顯示num
	//cout << setw(10) << 1234 << "\n"; //以4Byte寬度顯示num
	//cout << setw(10) << 12345 << "\n"; //以4Byte寬度顯示num
	//cout.setf(ios::left); //資料靠左輸出 
	//cout << setw(10) << num << 123456 << "\n";
	//cout.setf(ios::right); //資料靠左輸出 
	//cout << setw(10) << num << 123456 << "\n";
	//

	std::string text = "Hello ";

	//// 設定寬度為10，使用操控字元setw和setfill
	//std::cout << std::setw(10) << std::setfill('0') << std::right << text << std::endl;

	for (int i = 0; i <= 120; ++i) {
		//std::cout << "\rProgress: " << i << "%";
		std::cout << "\r" << std::setw(i) << std::setfill(' ') << std::right << text;
		
		std::cout.flush(); // 強制刷新輸出緩衝區
		std::this_thread::sleep_for(std::chrono::milliseconds(30)); // 模擬耗時操作
	}

	for (int i = 120; i >= 0 ; --i) {
		//std::cout << "\rProgress: " << i << "%";
		std::cout << "\r" << std::setw(i) << std::setfill(' ') << std::right << text;

		std::cout.flush(); // 強制刷新輸出緩衝區
		std::this_thread::sleep_for(std::chrono::milliseconds(30)); // 模擬耗時操作
	}

	std::cout << std::endl; // 換行，完成輸出



	return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
