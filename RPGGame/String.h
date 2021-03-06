#pragma once
#include <string>
#include <iostream>

class String
{
public:
	String();
	String(const char * name);
	String(const String& other);
	~String();

	void String::Set(const char * name);
	void SetInput();
	void Print();	
	const char* GetString();
	int Length();
	char CharacterAtIndex(int i);	
	String LowCaseDuplicate();		
	String UpperCaseDuplicate();	
	int SubString(const String& subString);		
	int SubStringFromIndex(const String& subString, int indexI);
	void ReplaceSubString(const String& subStringFind, const String& subStringReplace);

	bool operator == (const String & other)
	{
		int tempArrayLength = strlen(m_string);
		int characterCheck = 0;
		bool matchFound = false;
		for (int i = 0; i < tempArrayLength; i++)
		{
			if (m_string[i] == other.m_string[i])
			{
				characterCheck++;
			}
			if (characterCheck == tempArrayLength)
			{
				matchFound = true;
			}			
		}
		return matchFound;
	}

	bool operator == (const char newString[])
	{			
		int tempArrayLength = strlen(m_string);
		int characterCheck = 0;
		bool matchFound = false;
		for (int i = 0; i < tempArrayLength; i++)
		{
			if (m_string[i] == newString[i])
			{				
				characterCheck++;
			}
			if (characterCheck == tempArrayLength)
			{
				matchFound = true;
			}
		}		
		return matchFound;
	}

	std::string operator + (String & other)
	{			
		std::string tempString = m_string;
		std::string tempString2 = other.m_string;	
		std::string tempString3 = tempString + tempString2;		
		return tempString3;
	}

	std::string operator + (const char* other)
	{
		std::string tempString = m_string;
		std::string tempString2 = other;
		std::string tempString3 = tempString + tempString2;
		return tempString3;
	}

	std::string operator + (std::string other)
	{
		std::string tempString = m_string;
		std::string tempString2 = other;
		std::string tempString3 = tempString + tempString2;
		return tempString3;
	}

	void operator = (const String &D)
	{
		strcpy(m_string, D.m_string);
	}

	void operator = (const std::string newString)
	{			
		strcpy(m_string, newString.c_str());		
	}

	void operator = (const char* newString)
	{
		strcpy(m_string, newString);
	}

	//unused but functional classes, in case I need them later
	//bool Compare(const char newString[]);	
	//void ToUpperCase();
	//void ToLowCase();
private:
	char* m_string;	
};

