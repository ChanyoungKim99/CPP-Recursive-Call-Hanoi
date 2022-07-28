/*
ÇÏ³ëÀÌÀÇ Å¾
A,B,C ±âµÕ

H(4)
	H(3) : A -> B
	¹Ù´Ú ÀÌµ¿ A -> C
	H(3) : B -> C
	
H(5)
	H(4) : A -> B
	¹Ù´Ú ÀÌµ¿ A -> C
	H(4) : B -> C

H(6) 
	H(5) : A -> B
	¹Ù´Ú ÀÌµ¿ A -> C
	H(5) : B -> C
*/ 


/*
	Hanoi(3) : A -> C
	{
		Hanoi(2) : A -> B
		Move : A -> C
		Hanoi(2) : B -> C
	}

	Hanoi(2) : A -> B
	{
		Hanoi(1) : A -> C
		Move : A -> B
		Hanoi(1) : C -> B
	}

	Hanoi(1) : A -> C
	{
		Move : A -> C
	}

	Hanoi(2) : B -> C
	{
		Hanoi(1) : B -> A
		Move : B -> C
		Hanoi(1) : A -> C
	}
*/