using namespace std;

long long solution(int price, int money, int count)
{
	long long answer = 0;

	for (int i = 1; i <= count; i++)
		answer += price * i;
	answer = money > answer ? 0 : answer - money;

	return answer;
}

void main()
{
	//test
	//auto ret = solution(3, 20, 4);
}