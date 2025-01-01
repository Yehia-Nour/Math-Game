#pragma once
#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std; 


namespace MyLib
{
float ReadPositiveNumber(string message)
{
  float number;
    do
  {
    cout << "plesse enter the postive number" << endl;
    cout << message;
    cin >> number;
  } while (number <= 0);
  return number;
}
bool checkPerfectNumber(int num)
{
  int counter = 0;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      counter += i;
    }
    
  }
  return num == counter;
}
int reverseNumber(int number)
{
  int remainder = 0, number2 = 0;
  while (number > 0)
  {
    remainder = number % 10;
    number = number / 10;
    number2 = number2 * 10 + remainder;
  }
return number2;
}
void orderNumber(int number)
{
  int remainder = 0;
  while (number > 0)
  {
    remainder = number % 10;
    number = number / 10;
    cout << remainder << endl;
  }
}
bool IsPalindromeNumber(int number)
{
  return number == reverseNumber(number);
  // 11
}
void printInvertedNumberPattern(int number)
{
  for (int i = number; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
  // 12
}
void printNumberPattern(int nubmer)
{
  for (int i = 1; i <= nubmer; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
  // 13
}
void printInvertedLetterPattern(int number)
{
  for (int i = number; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << char(64 + i);
    }
    cout << endl;
  }
  // 14
}
void printLetterPattern(int number)
{
  for (int i = 1; i <= number; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << char(64 + i);
    }
    cout << endl;
  }
  // 15
}
void printWordsFromAAAtoZZZ()
{
  for (int  i = 1; i <= 26; i++)
  {
    for (int j = 1; j <= 26; j++)
    {
      for (int k = 1; k <= 26; k++)
      {
        cout << char(64 + i) << char(64 + j) << char(64 + k);
        cout << endl;
      }
    }
  }
  // 16 me
}
void PrintWordsFromAAAtoZZZ()
{
  string word = "";
  for (int  i = 1; i <= 26; i++)
  {
    for (int j = 1; j <= 26; j++)
    {
      for (int k = 1; k <= 26; k++)
      {
        word = word + char(64 + i);
        word = word + char(64 + j);
        word = word + char(64 + k);
        cout << word << endl;
        word = "";
      }
    }
  }
  // 16 he
}
int gussePassword(string gusse)
{
  string word = "";
  int counter = 0;
  for (int  i = 1; i <= 26; i++)
  {
    for (int j = 1; j <= 26; j++)
    {
      for (int k = 1; k <= 26; k++)
      {
        word = word + char(64 + i);
        word = word + char(64 + j);
        word = word + char(64 + k);
        counter++;
        if(word == gusse)
        {
          return counter;
        }
        word = "";
      }
    }
  }
  return 0;
  // 16
}
string  EncryptText(string Text, short EncryptionKey)
{
  for (int i = 0; i <= Text.length(); i++)  
  { 
    Text[i] = char((int) Text[i] + EncryptionKey);
  }
  return Text;
  // 17
}
string  DecryptText(string Text, short EncryptionKey)
{
  for (int i = 0; i <= Text.length(); i++)
  {
    Text[i] = char((int)Text[i] - EncryptionKey);
  }
  return Text;
  // 17
}
int randomNumber(int from, int to)
{
  int randNum = rand() % (to - from + 1) + from;
  return randNum;
  // 19
  // srand((unsigned)time(NULL));
}
char getRandomCharacter(char enm)
{
  if (int(enm) > 32 && int(enm) < 47)
  {
    return char(randomNumber(33, 46));
  }
  else if (int(enm) > 48 && int(enm) < 58)
  {
    return char(randomNumber(49, 57));
  }
  else if (int(enm) > 64 && int(enm) < 91)
  {
    return char(randomNumber(65, 90));
  }
  else if (int(enm) > 96 && int(enm) < 123)
  {
    return char(96 + randomNumber(97, 122));
  }
  return 'a';
  // 19
}
string generateWord()
{
  string word = "";
  int counter = 0;
  int random = randomNumber(1, 456976);
  for (int  i = 1; i <= 26; i++)
  {
    for (int j = 1; j <= 26; j++)
    {
      for (int k = 1; k <= 26; k++)
      {
        for (int l = 1; l <= 26; l++)
        {
          word = word + char(64 + i);
          word = word + char(64 + j);
          word = word + char(64 + k);
          word = word + char(64 + l);
          
          counter++;
          if (counter == random)
          {
            return word;
          }
          word = "";
        }
      }
    }
  }
  return "";
  // 21 me
}
void generateKeys(int numberOfKeys)
{
  for (int i = 1; i <= numberOfKeys; i++)
  {
    cout <<"key "<< i << " " << generateWord() << "-" << generateWord() << "-" << generateWord() << "-" << generateWord() << endl;
  }
  // 21 me
}
string GenerateWord(char enm, short length)
{
  string word = "";
  for (int i = 0; i < length; i++)
  {
    word = word + getRandomCharacter('A');
  }
  return word;
  // 21 he
}
string  GenerateKey()
{
  string key = "";
  key = GenerateWord('A', 4) + "-";
  key += GenerateWord('A', 4) + "-";
  key += GenerateWord('A', 4) + "-";
  key += GenerateWord('A', 4) ;
  return key;
  // 21 he
}
void GenerateKeys(int numberOfKeys)
{
  for (int i = 1; i <= numberOfKeys; i++)
  {         cout << "Key [" << i << "] : ";
    cout << GenerateKey() << endl;
  }
  // 21 he
}
void readArray(int arr[100], int& arrLength)
{
  cout << "\nEnter number of elements:\n";
  cin >> arrLength;     cout << "\nEnter array elements: \n";
  for (int i = 0; i < arrLength; i++)
    {
      cout << "Element [" << i + 1 << "] : ";
      cin >> arr[i];
    }
  cout << endl;
  // 22
}
void printArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
    cout << endl;
  // 22
}
int timesRepeated(int number, int arr[100], int arrLength)
{
  int counter = 0;
  for (int i = 0; i <= arrLength - 1; i++)
  {
    if (number == arr[i])    
    {
      counter++;
    }
  }
  return counter;
  // 22
} 
void fillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = randomNumber(10, 100);
  }
  // 23
}
int maxNumberInArray(int arr[100], int arrLength)
{
  int max = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
  // 24
}
int minNumberInArray(int arr[100], int arrLength)
{
  int min = arr[0];
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
  // 25
}
int sumArray(int arr[100], int arrLength)
{
  int sum = 0;
  for (int i = 0; i < arrLength; i++)
  {
    sum += arr[i];
  }
  return sum;
  // 26
}
float ArrayAverage(int arr[100], int arrLength)
{
  return float(sumArray(arr, arrLength) / arrLength);
  // 27
}
void copyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arrDestination[i] = arrSource[i];
  }
  // 28
}
bool checkIsPrimeNumber(int number) {
  if (number <= 1)
  {
    return false;
  }
  for (int i = 2; i <= number / 2; i++)
  {
    if (number % i == 0)
    {
      return false;
    }
  }
  return true;
  // 29
}
void sumOf2Arrays(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arrSum[i] = arr[i] + arr2[i];
  }
  // 30
}
void swap(int& A, int& B)
{
  int Temp;
  Temp = A;
  A = B;
  B = Temp;
  // 31
}
void shuffleArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    swap(arr[randomNumber(1, arrLength) - 1], arr[randomNumber(1, arrLength) - 1]);
  }
  // 31
}
void copyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arrDestination[i] = arrSource[arrLength - 1 - i];
  }
  // 32
}
void fillArrayWithKeys(string arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = GenerateKey();
  }
  // 33
}
void printStringArray(string arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << "Array [" << i << "] : " << arr[i] << " " << endl;
  }
  // 33
}
short findNumberPositionInArray(int nubmer, int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (nubmer == arr[i])
    {
      return i;
    }
  }
  return -1;
  // 34
}
bool isNumberInArray(int nubmer ,int arr[100], int arrLength)
{
  return findNumberPositionInArray(nubmer, arr, arrLength)  != -1;
  // 35
}
void addArrayElement(int number, int arr[100], int& arrLength)
{
  arrLength++;
  arr[arrLength - 1] = number;
  // 36
}
void inputUserNumbersInArray(int arr[100], int& arrLength)
{
  bool addMore = true;
  do
  {
    addArrayElement(ReadPositiveNumber("plesse enter the number"), arr, arrLength);
    cout << "do you want to add more numbers ? [0] No , [1] Yes: ";
    cin >> addMore;
  } while (addMore);
  // 36
}
void copyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    addArrayElement(arrSource[i], arrDestination, arrDestinationLength);
  }
  // 37
}
void copyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (arrSource[i] % 2 != 0)
    {
      addArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
  }
  // 38
}
void copyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (checkIsPrimeNumber(arrSource[i]))
    {
      addArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
  }
  // 39
}
void copyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (!isNumberInArray(arrSource[i] ,arrDestination, arrLength))
    {
      addArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
  }
  // 40
}
bool isPalindromeArray(int arr[100], int Length)
{
  for (int i = 0; i < Length; i++)
  {
    if (arr[i] != arr[Length - i - 1])
      {
        return false;
      }
    }
  return true;
  // 41
}
int oddCount(int arr[], int arrLength)
{
  int counter = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] % 2 != 0)
    {
      counter++;
    }
  }
  return counter;
  // 42
}
int evenCount(int arr[], int arrLength)
{
  int counter = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] % 2 == 0)
    {
      counter++;
    }
  }
  return counter;
  // 43
}
void fillArrayWithNegativeRandomNumbers(int arr[100], int& arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = randomNumber(-100, 100);
  }
  // 44
}
int postiveCount(int arr[], int arrLength)
{
  int counter = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] > 0)
    {
      counter++;
    }
  }
  return counter;
  // 44
}
int negativeCount(int arr[], int arrLength)
{
  int counter = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] < 0)
    {
      counter++;
    }
  }
  return counter;
  // 45
}
int myAbs(int number)
{
  return number < 0 ? number * -1 : number;
  // 46
}
int myRound(float number)
{
  int num = number * 10;
  if (num % 10 >= 5)
  {
    return number + 1;
  }
  
  return number;
  // 47
}
int myFloor(float number)
{
  return number > 0 ? number : number - 1;
  // 48
}
int myceil(float number)
{
  return number > 0 ? number + 1 : number;
  // 49
}
int mySqrt(int number)
{
  for (int  i = 1; i < number; i++)
  {
    if (i * i == number)
    {
      return i;
    }
  }
  return 0;
  // 50
}
int readNumber()
{
  int number;
  cout << "Plesse Enter The number: ";
  cin >> number;
  while (cin.fail())
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid Number, Enter a valid one:" << endl;
    cin >> number;
  }
  return number;
}

}