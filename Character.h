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

protected:
	//���, ���ٺҰ�.
	int HP;

private:
	//���X ���ٺҰ�
	
};

