#include"Stack.h"

//�Ƿ�Ϊ��ջ
int IsEmpty(Stack S)
{
	return S->Next == NULL;
}
//�½�ջ
Stack CreateStack()
{
	Stack S;

	S = malloc(sizeof(struct Node));
	if (S == NULL)
		printf("Out of space!");
	S->Next = NULL;
	MakeEmpty(S);
	return S;
}
void DisposeStack(Stack S);
void MakeEmpty(Stack S)
{
	if (S == NULL)
		printf("Must use CreateStack first");
	else
		while (!IsEmpty(S))
			Pop(S);
}
void Push(ElementType X, Stack S)
{
	PtrToNode TmpCell;

	TmpCell = malloc(sizeof(struct Node));
	if (TmpCell == NULL)
		printf("Out of space!");
	else
	{
		TmpCell->Element = X;
		TmpCell->Next = S->Next;
		S->Next = TmpCell;
	}
}
ElementType Top(Stack S)
{
	if (!IsEmpty(S))
		return S->Next->Element;
	printf("Empty stack");
	return 0;
}
void Pop(Stack S)
{
	PtrToNode FirstCell;

	if (IsEmpty(S))
		printf("Empty stack");
	else
	{
		FirstCell = S->Next;
		S->Next = S->Next->Next;
		free(FirstCell);
	}
}