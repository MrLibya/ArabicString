# ArabicString
لتعريف وطباعه وادخال متغيرات بلغه العربيه ف الكونسل

## كيفية التركيب
قم بإضافة الملفين للمشروع الخاص بك ققط

## أمثله
```
#include <iostream>
#include "arabicstring.h"
using namespace std;

int main()
{
	ArabicString::goArabic();// to set arabic out/in console

	ArabicString test = L"اتز هيما ساما"; // تهيئه متغير سترينغ عربي
	test.makeShape(); // لصنع شكل نص المتغير
	wcout << test.getText() << endl; // ارجاع النص
	wcout << test.getShape() << endl; // ارجاع شكل النص
	wcout << test.getReShape()<<endl; //ارجاع  شكل النص بالمعكوس بسبب الكونسل من يسار لليمين 

	
	ArabicString test2;
	wcin >> test2;// سوف يقرا كلمه واحده فقط
	test2.makeShape();
	wcout << test2.getReShape() << endl;
	
	ArabicString test3;
	wchar_t str[11];
	wcin.getline(str,10); // لقراءه السطر بالكامل حتي الحد الذي تحدده
	test3 = str;
	test3.makeShape();
	wcout << test3.getReShape() << endl;
	
	return 0;
}

```
  
## الدوال
```
ArabicString::goArabic(); استدعائها في بدايه البرنامج لتهيئة الكونسل للغه العربيه
makeShape() لتقوم بعمل شكل النص المدخل
getTextLength() ارجاع طول النص الاصلي
getShapeLength() ارجاع طول الشكل
getText() ارجاع قيمه النص
getShape() ارجاع شكل النص
getReShape() ارجاع شكل النص بالمعكوس ( السبب من استعمال العكسي لانه الكونسل من يسار لليمين ف يجب استدعاء الشكل العكسي )
```
## كلمه اخيره
ماب اللغه العربيه ماخوذ من سورس كود ماتين2
