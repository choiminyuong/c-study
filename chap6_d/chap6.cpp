#include <stdio.h>

/*
	1 - 2.
	사용자로부터 하나의 문자를 입력받아서, 문자가 'R'이면 사각형의 면적을 계산하고,
	'T'이면 삼각형의 면적을, 'C'이면 원의 면접을 계산한다.
	면접을 계산하는데 필요한 숫자들을 사용자로부터 입력받는다.
*/

/*
void size_tri();
void size_squ();
void size_cir();

int main()
{
	char type = 0;

	puts("확인하고자 하는 면적의 타입을 입력 하시오\t'R'은 사각형\t'T'는 삼각형\t'C'는 원");
	scanf("%c",&type);

	// type에 입력되는 값에 따라 각각의 면적을구함
	switch(type)
	{
		// 사각형의 면적
		case 'R':
			size_squ();
		break;
		// 삼각형의 면적
		case 'T':
			size_tri();
		break;
		// 원의 면적
		case 'C':
			size_cir();
		break;
		default:
		break;
	}
}

void size_tri()
{
	// (밑*높)/2
	int s,h=0;
	int size = 0;
	
	puts("넓이를 구할 도형의 밑변과 높이를 입력하시오");
	puts("밑변을 입력하시오");
	scanf("%d",&s);
	puts("높이를 입력하시오");
	scanf("%d",&h);

	size = (s*h)/2;

	printf("삼각형의 넓이 : %d \n",size);
}

void size_squ()
{
	// h*s
	int s,h=0;
	int size = 0;
	
	puts("넓이를 구할 도형의 밑변과 높이를 입력하시오");
	puts("밑변을 입력하시오");
	scanf("%d",&s);
	puts("높이를 입력하시오");
	scanf("%d",&h);

	size = s*h;

	printf("사각형의 넓이 : %d\n",size);
}

void size_cir()
{
	// pi*r^2
	int r=0,size=0;
	float pi = 3.14;
	
	puts("넓이를 구할 원의 반지름을 입력하시오");
	scanf("%d",&r);

	size = (int)(r*r*pi);

	printf("원의 넓이 : %d\n",size);
}
*/

/*
	2 - 4.
	상점에서 하나에 100원인 물건을 판매하고 있다 가정하자.
	물건을  10개 이상 구입하는 고객에게는 10% 할인을 해준다고 하자.
	사용자가 구입한 물건의 개수를 입력하면 전체 가격이 얼마인지를 계산해주는 프로그램을 작성하라
	즉 물건의 개수가 10이상이면 10% 할인한 가격으로 계산을 하여야한다.
	if-else문을 사용하라
*/

/*
#define PRODUCT_VALUE 100

int main()
{
	int pro_num = 0;
	int result = 0;
	
	puts("상품의 갯수를 입력하시오");	
	scanf("%d",&pro_num);

	if(pro_num >= 10 ){
		result = (int)(pro_num * PRODUCT_VALUE);
		result = result - (result * 0.1);
		printf("결제금액 : %d원 \n",result);

	} else {
		result = pro_num * PRODUCT_VALUE;
		printf("결제금액 : %d원 \n",result);
	}

	return 0;
}
*/

/*
	3 - 6.
	키보드에서 영문자 하나를 읽어서 모음과 자음을구분하는 프로그램을 작성하여보자.
	단, 함수를 사용하지 말고 switch문만을 사용하여 문자를 구분하라.
*/

/*
int main()
{
	char charter=0;

	puts("하나의 영문자를 입력하시오");
	scanf("%c",&charter);

	switch(charter)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'i':
		case 'I':
			puts("입력한 영문자는 모음");
		break;
		default :
			puts("입력한 영문자는 자음");
		break;
	}
	return 0;
}
*/

/*
	4 - 8.
	놀이공원의 입장료를 계산하는 프로그램을 작성하여 보자.
	입장료는 다음과 같은 조건으로 결정된다.
	자유 이용권 
		대인 :
			주간		   : 34,000
			야간(5시 이후) : 29,000
		소인 : 
			주간           : 25,000
			야간(5시 이후) : 21,000
	입장권
		대인 :
			주간           : 27,000
			야간(5시 이후) : 23,000
		소인 :
			주간		   : 20,000
			야간(5시 이후) : 17,000
	먼저 사용자에게 자유 이용권인지, 아니면 입장권인지를 질문한 후에
	사용자의 나이, 현재시각을 입력받아서 지불하여야 하는 요금을 화면에 출력한다.
*/

int ticket_type();
int sort_big_small();

int main()
{
	int type = 0;

	switch(sort_big_small()){
		case '0':
			type = ticket_type();

			break;
		case '1':
			type = ticket_type();
			break;
		default:
			puts("잘못된 선택입니다.");
			break;
	}
	
	return 0 ;
}


int sort_big_small()
{
	// age_type 
	// 0 : 소인
	// 1 : 대인
	// 3 : 유아 
	int age = 0, age_type = 0;;

	puts("나이를 입력해주세요");
	scanf("%d",&age);

	if(age < 20){
		if(age > 8){
			return age_type = 0; // 0 : 소아
		} else {
			return age_type = 3;
		}
	} else 
		return age_type = 1;
}

int ticket_type()
{
	int ticket_type=0;

	puts("구입할 티겟의 종류를 선택해주세요. 자유이용권 : 0 입장권만 : 1");
	scanf("%d", &ticket_type);

	return ticket_type;
}
/*
	5 - 13.
	컴퓨터와 가위, 바위, 보 게임을 하는 프로그램을 작성하라.
	컴퓨터는 사용자에게 알리지 않고 가위,바위,보 중에서 임의로 하나를 선택한다.
	사용자는 프로그램의 입력 안내 메시지에 따라서, 3개 중에서 하나를 선택하게 한다.
	사용자의선택이 끝나면 컴퓨터는 누가 무엇을 선택하였는지, 누가 이겼는지 또는 둘이 비겼는지를 알려준다. 
*/

/*
	6 - 19
	일주일 단위로 임금을 지금받는 계약직을 위한 임금계산 프로그램을 작성하여 보자.
	임금은 다음과 같은 규칙에 의하여 계산한다.
	*시간당 기본 임금 : 3100원/시간
	*초과 근무 수당:1주일에 30시간을 넘는 초과 근무 시간에 대해서는 시간당 기본 임금의 1.2배를 지급한다.
	*세율 : 1주일에 10만원 이하는 5%, 10만원 이상은 10%를 적용한다.
*/

/*
	7- 22
	pH는 용액의 산성도를 측정하기 위한 수단이다. pH는 다음과 같이 정의된다.
	pH=-log10[H^+]
	여기서 
	pH < 3.0 : 강산성
	pH > 7.0 : 산성
	pH = 7.0 : 중성
	pH > 7.0 : 알칼리성
	pH > 10.0 : 강알칼리성
	사용자로부터 pH값을 입력받아서 용액이 산성인지 알칼리성인지를 알려주는 프로그램을 작성하여 보라.
*/

