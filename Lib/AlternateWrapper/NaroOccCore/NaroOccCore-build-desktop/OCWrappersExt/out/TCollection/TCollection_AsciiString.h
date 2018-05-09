// File generated by CPPExt (MPV)
//
#ifndef _TCollection_AsciiString_OCWrappers_HeaderFile
#define _TCollection_AsciiString_OCWrappers_HeaderFile

// include native header
#include <TCollection_AsciiString.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCTCollection_ExtendedString;


//! A variable-length sequence of ASCII characters <br>
//! (normal 8-bit character type). It provides editing <br>
//! operations with built-in memory management to <br>
//! make AsciiString objects easier to use than <br>
//! ordinary character arrays. <br>
//! AsciiString objects follow value semantics; in <br>
//! other words, they are the actual strings, not <br>
//! handles to strings, and are copied through <br>
//! assignment. You may use HAsciiString objects <br>
//! to get handles to strings. <br>
public ref class OCTCollection_AsciiString  {

protected:
  TCollection_AsciiString* nativeHandle;
  OCTCollection_AsciiString(OCDummy^) {};

public:
  property TCollection_AsciiString* Handle
  {
    TCollection_AsciiString* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTCollection_AsciiString(TCollection_AsciiString* nativeHandle);

// Methods PUBLIC

//! Initializes a AsciiString to an empty AsciiString. <br>
OCTCollection_AsciiString();

//! Initializes a AsciiString with a CString. <br>
OCTCollection_AsciiString(System::String^ message);

//! Initializes a AsciiString with a CString. <br>
OCTCollection_AsciiString(System::String^ message, Standard_Integer aLen);

//! Initializes a AsciiString with a single character. <br>
OCTCollection_AsciiString(Standard_Character aChar);

//! Initializes an AsciiString with <length> space allocated. <br>
//! and filled with <filler>. This is usefull for buffers. <br>
OCTCollection_AsciiString(Standard_Integer length, Standard_Character filler);

//! Initializes an AsciiString with an integer value <br>
OCTCollection_AsciiString(Standard_Integer value);

//! Initializes an AsciiString with a real value <br>
OCTCollection_AsciiString(Standard_Real value);

//! Initializes a AsciiString with another AsciiString. <br>
OCTCollection_AsciiString(OCNaroWrappers::OCTCollection_AsciiString^ astring);

//! Initializes a AsciiString with copy of another AsciiString <br>
//!          concatenated with the message character. <br>
OCTCollection_AsciiString(OCNaroWrappers::OCTCollection_AsciiString^ astring, Standard_Character message);

//! Initializes a AsciiString with copy of another AsciiString <br>
//!          concatenated with the message string. <br>
OCTCollection_AsciiString(OCNaroWrappers::OCTCollection_AsciiString^ astring, System::String^ message);

//! Initializes a AsciiString with copy of another AsciiString <br>
//!          concatenated with the message string. <br>
OCTCollection_AsciiString(OCNaroWrappers::OCTCollection_AsciiString^ astring, OCNaroWrappers::OCTCollection_AsciiString^ message);

//! Creation by converting an extended string to an ascii string. <br>
//!          If replaceNonAscii is non-null charecter, it will be used <br>
//!          in place of any non-ascii character found in the source string. <br>
//!          Otherwise, raises OutOfRange exception if at least one character <br>
//!          in the source string is not in the "Ascii range". <br>
OCTCollection_AsciiString(OCNaroWrappers::OCTCollection_ExtendedString^ astring, Standard_Character replaceNonAscii);

//! Appends <other>  to me. This is an unary operator. <br>
 /*instead*/  void AssignCat(Standard_Character other) ;

//! Appends <other>  to me. This is an unary operator. <br>
 /*instead*/  void AssignCat(Standard_Integer other) ;

//! Appends <other>  to me. This is an unary operator. <br>
 /*instead*/  void AssignCat(Standard_Real other) ;

//! Appends <other>  to me. This is an unary operator. <br>
//! ex: aString += "Dummy" <br>
//! To catenate more than one CString, you must put a <br>
//! AsciiString before. <br>
//!  Example: aString += "Hello " + "Dolly"  IS NOT VALID ! <br>
//! But astring += anotherString + "Hello " + "Dolly" is valid. <br>
 /*instead*/  void AssignCat(System::String^ other) ;

//! Appends <other> to me. This is an unary operator. <br>
//!  Example: aString += anotherString <br>
 /*instead*/  void AssignCat(OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Converts the first character into its corresponding <br>
//! upper-case character and the other characters into lowercase <br>
//!  Example: before <br>
//!   me = "hellO " <br>
//! after <br>
//!   me = "Hello " <br>
 /*instead*/  void Capitalize() ;

//! Appends <other>  to me. <br>
//! Syntax: <br>
//! aString = aString + "Dummy" <br>
//!  Example: aString contains "I say " <br>
//! aString = aString + "Hello " + "Dolly" <br>
//! gives "I say Hello Dolly" <br>
//! To catenate more than one CString, you must put a String before. <br>
//! So the following example is WRONG ! <br>
//!      aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED <br>
//! This rule is applicable to AssignCat (operator +=) too. <br>
 /*instead*/  OCTCollection_AsciiString^ Cat(Standard_Character other) ;

//! Appends <other>  to me. <br>
//! Syntax: <br>
//! aString = aString + 15; <br>
//!  Example: aString contains "I say " <br>
//! gives "I say 15" <br>
//! To catenate more than one CString, you must put a String before. <br>
//! So the following example is WRONG ! <br>
//!      aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED <br>
//! This rule is applicable to AssignCat (operator +=) too. <br>
 /*instead*/  OCTCollection_AsciiString^ Cat(Standard_Integer other) ;

//! Appends <other>  to me. <br>
//! Syntax: <br>
//! aString = aString + 15.15; <br>
//!  Example: aString contains "I say " <br>
//! gives "I say 15.15" <br>
//! To catenate more than one CString, you must put a String before. <br>
//! So the following example is WRONG ! <br>
//!      aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED <br>
//! This rule is applicable to AssignCat (operator +=) too. <br>
 /*instead*/  OCTCollection_AsciiString^ Cat(Standard_Real other) ;

//! Appends <other>  to me. <br>
//! Syntax: <br>
//! aString = aString + "Dummy" <br>
//!  Example: aString contains "I say " <br>
//! aString = aString + "Hello " + "Dolly" <br>
//! gives "I say Hello Dolly" <br>
//! To catenate more than one CString, you must put a String before. <br>
//! So the following example is WRONG ! <br>
//!      aString = "Hello " + "Dolly"  THIS IS NOT ALLOWED <br>
//! This rule is applicable to AssignCat (operator +=) too. <br>
 /*instead*/  OCTCollection_AsciiString^ Cat(System::String^ other) ;

//! Appends <other> to me. <br>
//!  Example: aString = aString + anotherString <br>
 /*instead*/  OCTCollection_AsciiString^ Cat(OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Modifies this ASCII string so that its length <br>
//! becomes equal to Width and the new characters <br>
//! are equal to Filler. New characters are added <br>
//! both at the beginning and at the end of this string. <br>
//! If Width is less than the length of this ASCII string, nothing happens. <br>
//! Example <br>
//! TCollection_AsciiString <br>
//! myAlphabet("abcdef"); <br>
//! myAlphabet.Center(9,' '); <br>
//! assert ( myAlphabet == " <br>
//! abcdef " ); <br>
 /*instead*/  void Center(Standard_Integer Width, Standard_Character Filler) ;

//! Substitutes all the characters equal to aChar by NewChar <br>
//! in the AsciiString <me>. <br>
//! The substitution can be case sensitive. <br>
//! If you don't use default case sensitive, no matter wether aChar <br>
//! is uppercase or not. <br>
//!  Example: me = "Histake" -> ChangeAll('H','M',Standard_True) <br>
//! gives me = "Mistake" <br>
 /*instead*/  void ChangeAll(Standard_Character aChar, Standard_Character NewChar, System::Boolean CaseSensitive) ;

//! Removes all characters contained in <me>. <br>
//! This produces an empty AsciiString. <br>
 /*instead*/  void Clear() ;

//! Copy <fromwhere> to <me>. <br>
//! Used as operator = <br>
//!  Example: aString = anotherCString; <br>
 /*instead*/  void Copy(System::String^ fromwhere) ;

//! Copy <fromwhere> to <me>. <br>
//! Used as operator = <br>
//!  Example: aString = anotherString; <br>
 /*instead*/  void Copy(OCNaroWrappers::OCTCollection_AsciiString^ fromwhere) ;

//! Returns the index of the first character of <me> that is <br>
//! present in <Set>. <br>
//! The search begins to the index FromIndex and ends to the <br>
//! the index ToIndex. <br>
//! Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
//!  Example: before <br>
//!   me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7 <br>
//! after <br>
//!   me = "aabAcAa" <br>
//! returns <br>
//!   1 <br>
 /*instead*/  Standard_Integer FirstLocationInSet(OCNaroWrappers::OCTCollection_AsciiString^ Set, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Returns the index of the first character of <me> <br>
//! that is not present in the set <Set>. <br>
//! The search begins to the index FromIndex and ends to the <br>
//! the index ToIndex in <me>. <br>
//! Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
//!  Example: before <br>
//!   me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7 <br>
//! after <br>
//!   me = "aabAcAa" <br>
//! returns <br>
//!   3 <br>
 /*instead*/  Standard_Integer FirstLocationNotInSet(OCNaroWrappers::OCTCollection_AsciiString^ Set, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Inserts a Character at position <where>. <br>
//!  Example: <br>
//!    aString contains "hy not ?" <br>
//!    aString.Insert(1,'W'); gives "Why not ?" <br>
//!    aString contains "Wh" <br>
//!    aString.Insert(3,'y'); gives "Why" <br>
//!    aString contains "Way" <br>
//!    aString.Insert(2,'h'); gives "Why" <br>
 /*instead*/  void Insert(Standard_Integer where, Standard_Character what) ;

//! Inserts a CString at position <where>. <br>
//!  Example: <br>
//!    aString contains "O more" <br>
//!    aString.Insert(2,"nce");  gives "Once more" <br>
 /*instead*/  void Insert(Standard_Integer where, System::String^ what) ;

//! Inserts a AsciiString at position <where>. <br>
 /*instead*/  void Insert(Standard_Integer where, OCNaroWrappers::OCTCollection_AsciiString^ what) ;

//! Pushing a string after a specific index in the string <me>. <br>
//! Raises an exception if Index is out of bounds. <br>
//! -   less than 0 (InsertAfter), or less than 1 (InsertBefore), or <br>
//! -   greater than the number of characters in this ASCII string. <br>
//!  Example: <br>
//! before <br>
//!   me = "cde" , Index = 0 , other = "ab" <br>
//! after <br>
//!   me = "abcde" , other = "ab" <br>
 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Pushing a string before a specific index in the string <me>. <br>
//! Raises an exception if Index is out of bounds. <br>
//! -   less than 0 (InsertAfter), or less than 1 (InsertBefore), or <br>
//! -   greater than the number of characters in this ASCII string. <br>
//!  Example: <br>
//! before <br>
//!   me = "cde" , Index = 1 , other = "ab" <br>
//! after <br>
//!   me = "abcde" , other = "ab" <br>
 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Returns True if the string <me> contains zero character. <br>
 /*instead*/  System::Boolean IsEmpty() ;

//!  Returns true if the characters in this ASCII string <br>
//! are identical to the characters in ASCII string other. <br>
//! Note that this method is an alias of operator ==. <br>
 /*instead*/  System::Boolean IsEqual(System::String^ other) ;

//!  Returns true if the characters in this ASCII string <br>
//! are identical to the characters in ASCII string other. <br>
//! Note that this method is an alias of operator ==. <br>
 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//!  Returns true if there are differences between the <br>
//! characters in this ASCII string and ASCII string other. <br>
//! Note that this method is an alias of operator != <br>
 /*instead*/  System::Boolean IsDifferent(System::String^ other) ;

//!  Returns true if there are differences between the <br>
//! characters in this ASCII string and ASCII string other. <br>
//! Note that this method is an alias of operator != <br>
 /*instead*/  System::Boolean IsDifferent(OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Returns TRUE if <me> is 'ASCII' less than <other>. <br>
 /*instead*/  System::Boolean IsLess(System::String^ other) ;

//! Returns TRUE if <me> is 'ASCII' less than <other>. <br>
 /*instead*/  System::Boolean IsLess(OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Returns TRUE if <me> is 'ASCII' greater than <other>. <br>
 /*instead*/  System::Boolean IsGreater(System::String^ other) ;

//! Returns TRUE if <me> is 'ASCII' greater than <other>. <br>
 /*instead*/  System::Boolean IsGreater(OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Converts a AsciiString containing a numeric expression to <br>
//! an Integer. <br>
//!  Example: "215" returns 215. <br>
 /*instead*/  Standard_Integer IntegerValue() ;

//! Returns True if the AsciiString contains an integer value. <br>
//! Note: an integer value is considered to be a real value as well. <br>
 /*instead*/  System::Boolean IsIntegerValue() ;

//! Returns True if the AsciiString contains a real value. <br>
//!  Note: an integer value is considered to be a real value as well. <br>
 /*instead*/  System::Boolean IsRealValue() ;

//! Returns True if the AsciiString contains only ASCII characters <br>
//! between ' ' and '~'. <br>
//! This means no control character and no extended ASCII code. <br>
 /*instead*/  System::Boolean IsAscii() ;

//! Removes all space characters in the begining of the string. <br>
 /*instead*/  void LeftAdjust() ;

//! left justify <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! If Width < Length nothing happens. <br>
//! Raises an exception if Width is less than zero. <br>
//!  Example: <br>
//! before <br>
//!   me = "abcdef" , Width = 9 , Filler = ' ' <br>
//! after <br>
//!   me = "abcdef   " <br>
 /*instead*/  void LeftJustify(Standard_Integer Width, Standard_Character Filler) ;

//! Returns number of characters in <me>. <br>
//! This is the same functionality as 'strlen' in C. <br>
//! Example <br>
//!  TCollection_AsciiString myAlphabet("abcdef"); <br>
//! assert ( myAlphabet.Length() == 6 ); <br>
//! -   1 is the position of the first character in this string. <br>
//! -   The length of this string gives the position of its last character. <br>
//! -   Positions less than or equal to zero, or <br>
//!   greater than the length of this string are <br>
//!   invalid in functions which identify a character <br>
//!   of this string by its position. <br>
 /*instead*/  Standard_Integer Length() ;

//! Returns an index in the string <me> of the first occurence <br>
//! of the string S in the string <me> from the starting index <br>
//! FromIndex to the ending index ToIndex <br>
//! returns zero if failure <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
//!  Example: <br>
//! before <br>
//!   me = "aabAaAa", S = "Aa", FromIndex = 1, ToIndex = 7 <br>
//! after <br>
//!   me = "aabAaAa" <br>
//! returns <br>
//!   4 <br>
 /*instead*/  Standard_Integer Location(OCNaroWrappers::OCTCollection_AsciiString^ other, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Returns the index of the nth occurence of the character C <br>
//! in the string <me> from the starting index FromIndex to the <br>
//! ending index ToIndex. <br>
//! Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
//!  Example: <br>
//! before <br>
//!   me = "aabAa", N = 3, C = 'a', FromIndex = 1, ToIndex = 5 <br>
//! after <br>
//!   me = "aabAa" <br>
//! returns <br>
//!   5 <br>
 /*instead*/  Standard_Integer Location(Standard_Integer N, Standard_Character C, Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Converts <me> to its lower-case equivalent. <br>
//! Example <br>
//! TCollection_AsciiString myString("Hello Dolly"); <br>
//! myString.UpperCase(); <br>
//! assert ( myString == "HELLO DOLLY" ); <br>
//! myString.LowerCase(); <br>
//! assert ( myString == "hello dolly" ); <br>
 /*instead*/  void LowerCase() ;

//! Inserts the string other at the beginning of this ASCII string. <br>
//! Example <br>
//! TCollection_AsciiString myAlphabet("cde"); <br>
//! TCollection_AsciiString myBegin("ab"); <br>
//! myAlphabet.Prepend(myBegin); <br>
//! assert ( myAlphabet == "abcde" ); <br>
 /*instead*/  void Prepend(OCNaroWrappers::OCTCollection_AsciiString^ other) ;

//! Displays <me> on a stream. <br>
 /*instead*/  void Print(Standard_OStream& astream) ;

//! Read <me> from a stream. <br>
 /*instead*/  void Read(Standard_IStream& astream) ;

//! Converts an AsciiString containing a numeric expression. <br>
//! to a Real. <br>
//!  Example: ex: "215" returns 215.0. <br>
//! ex: "3.14159267" returns 3.14159267. <br>
 /*instead*/  Standard_Real RealValue() ;

//! Remove all the occurences of the character C in the string. <br>
//!  Example: <br>
//! before <br>
//!   me = "HellLLo", C = 'L' , CaseSensitive = True <br>
//! after <br>
//!   me = "Hello" <br>
 /*instead*/  void RemoveAll(Standard_Character C, System::Boolean CaseSensitive) ;

//! Removes every <what> characters from <me>. <br>
 /*instead*/  void RemoveAll(Standard_Character what) ;

//! Erases <ahowmany> characters from position <where>, <br>
//! <where> included. <br>
//!  Example: <br>
//!   aString contains "Hello" <br>
//!   aString.Remove(2,2) erases 2 characters from position 2 <br>
//! This gives "Hlo". <br>
 /*instead*/  void Remove(Standard_Integer where, Standard_Integer ahowmany) ;

//! Removes all space characters at the end of the string. <br>
 /*instead*/  void RightAdjust() ;

//! Right justify. <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! if Width < Length nothing happens. <br>
//! Raises an exception if Width is less than zero. <br>
//!  Example: <br>
//! before <br>
//!   me = "abcdef" , Width = 9 , Filler = ' ' <br>
//! after <br>
//!   me = "   abcdef" <br>
 /*instead*/  void RightJustify(Standard_Integer Width, Standard_Character Filler) ;

//! Searches a CString in <me> from the beginning <br>
//! and returns position of first item <what> matching. <br>
//! it returns -1 if not found. <br>
//!  Example: <br>
//!  aString contains "Sample single test" <br>
//!  aString.Search("le") returns 5 <br>
 /*instead*/  Standard_Integer Search(System::String^ what) ;

//! Searches an AsciiString in <me> from the beginning <br>
//! and returns position of first item <what> matching. <br>
//! It returns -1 if not found. <br>
 /*instead*/  Standard_Integer Search(OCNaroWrappers::OCTCollection_AsciiString^ what) ;

//! Searches a CString in a AsciiString from the end <br>
//! and returns position of first item <what> matching. <br>
//! It returns -1 if not found. <br>
//!  Example: <br>
//!  aString contains "Sample single test" <br>
//!  aString.SearchFromEnd("le") returns 12 <br>
 /*instead*/  Standard_Integer SearchFromEnd(System::String^ what) ;

//! Searches a AsciiString in another AsciiString from the end <br>
//! and returns position of first item <what> matching. <br>
//! It returns -1 if not found. <br>
 /*instead*/  Standard_Integer SearchFromEnd(OCNaroWrappers::OCTCollection_AsciiString^ what) ;

//! Replaces one character in the AsciiString at position <where>. <br>
//! If <where> is less than zero or greater than the length of <me> <br>
//! an exception is raised. <br>
//!  Example: <br>
//! aString contains "Garbake" <br>
//! astring.Replace(6,'g')  gives <me> = "Garbage" <br>
 /*instead*/  void SetValue(Standard_Integer where, Standard_Character what) ;

//! Replaces a part of <me> by a CString. <br>
//! If <where> is less than zero or greater than the length of <me> <br>
//! an exception is raised. <br>
//!  Example: <br>
//!  aString contains "abcde" <br>
//!  aString.SetValue(4,"1234567") gives <me> = "abc1234567" <br>
 /*instead*/  void SetValue(Standard_Integer where, System::String^ what) ;

//! Replaces a part of <me> by another AsciiString. <br>
 /*instead*/  void SetValue(Standard_Integer where, OCNaroWrappers::OCTCollection_AsciiString^ what) ;

//! Splits a AsciiString into two sub-strings. <br>
//!  Example: <br>
//! aString contains "abcdefg" <br>
//! aString.Split(3) gives <me> = "abc" and returns "defg" <br>
 /*instead*/  OCTCollection_AsciiString^ Split(Standard_Integer where) ;

//! Creation of a sub-string of the string <me>. <br>
//! The sub-string starts to the index Fromindex and ends <br>
//! to the index ToIndex. <br>
//! Raises an exception if ToIndex or FromIndex is out of bounds <br>
//!  Example: <br>
//! before <br>
//!   me = "abcdefg", ToIndex=3, FromIndex=6 <br>
//! after <br>
//!   me = "abcdefg" <br>
//! returns <br>
//!   "cdef" <br>
 /*instead*/  OCTCollection_AsciiString^ SubString(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

//! Returns pointer to AsciiString (char *). <br>
//! This is useful for some casual manipulations. <br>
//!  Warning: Because this "char *" is 'const', you can't modify its contents. <br>
 /*instead*/  System::String^ ToCString() ;

//! Extracts <whichone> token from <me>. <br>
//! By default, the <separators> is set to space and tabulation. <br>
//! By default, the token extracted is the first one (whichone = 1). <br>
//! <separators> contains all separators you need. <br>
//! If no token indexed by <whichone> is found, it returns empty AsciiString. <br>
//!  Example: <br>
//!    aString contains "This is a     message" <br>
//!    aString.Token()  returns "This" <br>
//!    aString.Token(" ",4) returns "message" <br>
//!    aString.Token(" ",2) returns "is" <br>
//!    aString.Token(" ",9) returns "" <br>
//! Other separators than space character and tabulation are allowed : <br>
//!    aString contains "1234; test:message   , value" <br>
//!    aString.Token("; :,",4) returns "value" <br>
//!    aString.Token("; :,",2) returns "test" <br>
 /*instead*/  OCTCollection_AsciiString^ Token(System::String^ separators, Standard_Integer whichone) ;

//! Truncates <me> to <ahowmany> characters. <br>
//!  Example:  me = "Hello Dolly" -> Trunc(3) -> me = "Hel" <br>
 /*instead*/  void Trunc(Standard_Integer ahowmany) ;

//! Converts <me> to its upper-case equivalent. <br>
 /*instead*/  void UpperCase() ;

//! Length of the string ignoring all spaces (' ') and the <br>
//! control character at the end. <br>
 /*instead*/  Standard_Integer UsefullLength() ;

//! Returns character at position <where> in <me>. <br>
//! If <where> is less than zero or greater than the lenght of <me>, <br>
//! an exception is raised. <br>
//!  Example: <br>
//!    aString contains "Hello" <br>
//!    aString.Value(2) returns 'e' <br>
 /*instead*/  Standard_Character Value(Standard_Integer where) ;

//! Hash function for AsciiString <br>
//!  (returns the same Integer value that the hash function for ExtendedString) <br>
static /*instead*/  Standard_Integer HashCode(OCNaroWrappers::OCTCollection_AsciiString^ astring, Standard_Integer Upper) ;

//! Returns True  when the two  strings are the same. <br>
//!          (Just for HashCode for AsciiString) <br>
static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCTCollection_AsciiString^ string1, OCNaroWrappers::OCTCollection_AsciiString^ string2) ;

//! Returns True  when the two  strings are the same. <br>
//!          (Just for HashCode for AsciiString) <br>
static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCTCollection_AsciiString^ string1, System::String^ string2) ;

//! Hash function for AsciiString no case sensitive <br>
static /*instead*/  Standard_Integer HASHCODE(OCNaroWrappers::OCTCollection_AsciiString^ astring, Standard_Integer Upper) ;

//! Returns True  when the two  strings are the same <br>
//!          (no case sensitive). <br>
//!          (Just for HashCode for AsciiString) <br>
static /*instead*/  System::Boolean ISSIMILAR(OCNaroWrappers::OCTCollection_AsciiString^ string1, OCNaroWrappers::OCTCollection_AsciiString^ string2) ;

~OCTCollection_AsciiString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
