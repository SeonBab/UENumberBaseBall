// Fill out your copyright notice in the Description page of Project Settings.


#include "NumberBaseballLib.h"

TArray<int32> UNumberBaseballLib::GenerateRandomNumbers()
{
	// ���� �� �� �ִ� ���� ���
	TArray<int32> AvailableNumbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	// ���� �� ���� ����
	TArray<int32> RandomNumberArr;

	// 3���� ������ ���ڸ� ����
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, AvailableNumbers.Num() - 1);
		RandomNumberArr.Add(AvailableNumbers[Index]);
		AvailableNumbers.RemoveAt(Index);
	}

	// ������ ���� �α� ���
	for (auto e : RandomNumberArr)
	{
		UE_LOG(LogTemp, Log, TEXT("RandomeNumber: %d"), e);
	}

	return RandomNumberArr;
}

void UNumberBaseballLib::DecreaseRemainInputCount(int32& RemainInputCount)
{
	--RemainInputCount;
}

bool UNumberBaseballLib::IsGameCommand(const FString& Message)
{
	// �Է��� ��ɾ �Է��� ������ Ȯ��
	bool bIsGameCommand = Message.Len() > 0 && Message[0] == '/';

	UE_LOG(LogTemp, Log, TEXT("IsGameCommand: %s"), (bIsGameCommand ? TEXT("True") : TEXT("False")));

	return bIsGameCommand;
}

FString UNumberBaseballLib::JudgeNumber(const TArray<int32>& RandomNumbers, const FString& Message, int32& Strikes, int32& Balls)
{
	// �Էµ� ���ڿ��� �и�
	FString NumberPart = Message.Mid(1, 3);

	// �Էµ� ���ڿ��� ���ڷ� ����
	int32 Number = FCString::Atoi(*NumberPart);

	// ���ڸ� �ڸ��� ���� �и� �� ����
	TArray<int32> InputNumber{ Number / 100, (Number / 10) % 10, Number % 10};

	// �߸��� �Է��� ��� �ƿ�
	bool bIsOut = false;

	// ���� 3���� �Է��ߴ��� Ȯ��
	if (100 > Number || Number > 999)
	{
		UE_LOG(LogTemp, Log, TEXT("Input Error"));
		bIsOut = true;
	}
	// �ߺ��� ���ڰ� ������ Ȯ��
	if (InputNumber[0] == InputNumber[1] || InputNumber[1] == InputNumber[2] || InputNumber[0] == InputNumber[2])
	{
		UE_LOG(LogTemp, Log, TEXT("Input Error"));
		bIsOut = true;
	}

	// �Էµ� ���� �α� ���
	for (auto e : InputNumber)
	{
		UE_LOG(LogTemp, Log, TEXT("InputNumber: %d"), e);
	}

	Strikes = 0, Balls = 0;
	FString Result;

	if (!bIsOut)
	{
		for (int32 i = 0; i < 3; ++i)
		{
			if (RandomNumbers[i] == InputNumber[i])
			{
				++Strikes;
			}
			else if (RandomNumbers.Contains(InputNumber[i]))
			{
				++Balls;
			}
		}

		if (Strikes > 0)
		{
			Result += TEXT("S") + FString::FromInt(Strikes);
		}
		if (Balls > 0)
		{
			Result += TEXT("B") + FString::FromInt(Balls);
		}
	}
	
	if (Strikes <= 0 && Balls <= 0 || bIsOut)
	{
		Result = TEXT("OUT");
	}

	// ��Ʈ����ũ �α� ���
	UE_LOG(LogTemp, Log, TEXT("Strikes: %d"), Strikes);
	// �� �α� ���
	UE_LOG(LogTemp, Log, TEXT("Balls: %d"), Balls);

	return Result;
}

bool UNumberBaseballLib::HasPlayerWon(const int32& Strikes, const int32& Balls)
{
	bool bIsPlayerWon = false;
	if (Strikes == 3)
	{
		// �¸�
		bIsPlayerWon = true;
	}

	return bIsPlayerWon;
}