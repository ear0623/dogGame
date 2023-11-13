#pragma once
class FCharacter
{
public:
	//��� �ٸ� ����� ���ٰ���. ���
	FCharacter();
	virtual ~FCharacter();

	virtual void Move();
	//pc�� �˾Ƽ� ����ȭ�Ҷ� 
	// ª���Ŵ� �Ʒ��� ���� ���.
	//_force ���α׷��� ���� �ٸ�.
	inline int GetHP() const { return HP; }
	inline void SetHP(const int InNewHP);

	void ApplyDamage(FCharacter* DamagedActor, float BaseDamage, FCharacter* Controller);
	void TakeDamage(float BaseDamage, FCharacter* TargetActor);

protected:
	//���, ���ٺҰ�.
	int HP;
	char Shape;
	int PlayerX;
	int PlayerY;

private:
	//���X ���ٺҰ�
	
};

