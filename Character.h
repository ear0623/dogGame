#pragma once
class FCharacter
{
public:
	//상속 다른 사용자 접근가능. 사용
	FCharacter();
	virtual ~FCharacter();

	virtual void Move();
	//pc가 알아서 최적화할때 
	// 짧은거는 아래와 같이 사용.
	//_force 프로그램에 따라 다름.
	inline int GetHP() const { return HP; }
	inline void SetHP(const int InNewHP);

protected:
	//상속, 접근불가.
	int HP;

private:
	//상속X 접근불가
	
};

