#include <string>

enum ARABIC_FORM_TYPE
{
	DEBUG_CODE,
	ISOLATED,
	INITIAL,
	MEDIAL,
	FINAL,
	ARABIC_FORM_TYPE_NUM,
};

class ArabicString
{
private:
	std::wstring text;
	std::wstring textShape;
	std::wstring reTextShape;
public:
	ArabicString();
	ArabicString(const wchar_t * _t) { text = _t; }

	static void goArabic();

	void makeShape();

	size_t getTextLength() const { return text.length(); }
	size_t getShapeLength() const { return textShape.length(); }
	std::wstring getText() const { return text; }
	std::wstring getReShape() const { return reTextShape; }
	std::wstring getShape() const  {return textShape;}

	//friend std::wostream & operator<<(std::wostream & out, const ArabicString & as);
	friend std::wistream & operator>>(std::wistream & in, ArabicString & as);
	//wchar_t &operator[] (int);
	ArabicString &operator= (const wchar_t * _t);
	ArabicString &operator= (const ArabicString & _as);
};
