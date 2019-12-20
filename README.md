# ArabicString
لتعريف وطباعه وادخال متغيرات بلغه العربيه ف الكونسل

## كيفية التركيب
قم بإضافة الملفين للمشروع الخاص بك ققط

## أمثله
```
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
```
  
