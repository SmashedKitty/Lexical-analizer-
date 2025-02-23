#include "FiniteAutomats.h"
#include "dfa.h"
#include "dfa.cpp"
//����� ��� ������������ ������ procedure begin end var case of integer
bool FiniteAutomats::isKeyword(const std::string& lexeme)//������ ���� �������� ��������� ����������� ����� �� �������� � ID 
{
	int countStates = 34; // ���������� ��������� �������� /**/
	std::vector<char> alphabet = {
		'p'/*0*/, 'r'/*1*/,'o'/*2*/,'c'/*3*/,'e'/*4*/,'d'/*5*/,'u'/*6*/,
		'b'/*7*/,'g'/*8*/,'i'/*9*/,'n'/*10*/,
		'v'/*11*/, 'a'/*12*/,
		's'/*13*/,
		'f'/*14*/,
		't'/*15*/

	}; // ������� �������

	std::vector<int> finalStates = { 9, 14, 17, 20, 24, 26, 33 }; // ��������� ����������� ���������
	std::vector<std::vector<int>> transitFunction =
	{
		//  {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
		//   p   r   o   c   e   d   u   b   g   i   n   v   a   s   f   t    	
			{ 1, -1, 25, 21, 15, -1, -1, 10, -1, 27, -1, 18, -1, -1, -1, -1},//0
			{-1,  2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//1
			{-1, -1,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//2
			{-1, -1, -1,  4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//3
			{-1, -1, -1, -1,  5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//4
			{-1, -1, -1, -1, -1,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//5
			{-1, -1, -1, -1, -1, -1,  7, -1, -1, -1, -1, -1, -1, -1, -1, -1},//6
			{-1,  8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//7
			{-1, -1, -1, -1,  9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//8
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//9  final
			{-1, -1, -1, -1, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//10
			{-1, -1, -1, -1, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1, -1},//11
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, 13, -1, -1, -1, -1, -1, -1},//12
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 14, -1, -1, -1, -1, -1},//13
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//14 final
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 16, -1, -1, -1, -1, -1},//15
			{-1, -1, -1, -1, -1, 17, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//16
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//17 final
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 19, -1, -1, -1},//18
			{-1, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//19
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//20 final
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 22, -1, -1, -1},//21
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1},//22
			{-1, -1, -1, -1, 24, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//23
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//24 final
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 26, -1},//25
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//26 final
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 28, -1, -1, -1, -1, -1},//27
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 29},//28
			{-1, -1, -1, -1, 30, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//29
			{-1, -1, -1, -1, -1, -1, -1, -1, 31, -1, -1, -1, -1, -1, -1, -1},//30
			{-1, -1, -1, -1, 32, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},//31
			{-1, 33, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, //32
			{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1} //33 final

	};
	dfa KeyWord(countStates, alphabet, finalStates, transitFunction);
	return KeyWord.isAccept(lexeme);
}

bool FiniteAutomats::isIdentifier(const std::string& lexeme)
{
	int countStates = 2;
	std::vector<char> alphabet = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
	};
	std::vector<int> finalStates = { 0, 1 };
	std::vector<std::vector<int>> transitFunction =
	{
		//A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};
	dfa Identifier(countStates, alphabet, finalStates, transitFunction);
	return Identifier.isAccept(lexeme);
}
bool FiniteAutomats::isInteger(const std::string& lexeme)
{
	int countStates = 1;
	std::vector<char> alphabet = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	std::vector<int> finalStates = { 0 };
	std::vector<std::vector<int>> transitFunction =
	{
		//0, 1, 2, 3, 4, 5, 6, 7, 8, 9
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	};
	dfa Integer(countStates, alphabet, finalStates, transitFunction);
	return Integer.isAccept(lexeme);
}

bool FiniteAutomats::isOperator(const std::string& lexeme)
{
	int countStates = 5;
	std::vector<char> alphabet = { ':', '=', '+', '-' };
	std::vector<int> finalStates = {2, 3, 4, 5 };
	std::vector<std::vector<int>> transitFunction =
	{
		// :,  =,  +,  - 
		{  1, -1,  3,  4},//0
		{ -1,  2, -1, -1},//1 
		{ -1, -1, -1, -1},//2 final
		{ -1, -1, -1, -1},//3 final
		{ -1, -1, -1, -1} //4 final 
	};
	dfa Operator(countStates, alphabet, finalStates, transitFunction);
	return Operator.isAccept(lexeme);
}

bool FiniteAutomats::isDelimiter(const std::string& lexeme)
{
	int countStates = 5;
	std::vector<char> alphabet = { ';', ':', ',', '(', ')' };
	std::vector<int> finalStates = {1, 2, 3, 4, 5 };
	std::vector<std::vector<int>> transitFunction =
	{
		// ';' ':'  ',' '(', ')' 
		{   1,  2,   3,  4,  5},//0
		{  -1, -1,  -1, -1, -1},//1 final
		{  -1, -1,  -1, -1, -1},//2 final
		{  -1, -1,  -1, -1, -1},//3 final
		{  -1, -1,  -1, -1, -1},//4 final
		{  -1, -1,  -1, -1, -1},//5 final
	};
	dfa Delimiter(countStates, alphabet, finalStates, transitFunction);
	return Delimiter.isAccept(lexeme);
}
