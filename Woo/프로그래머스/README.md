# 디버깅용 샘플 코드
```
int main()
{
	vector<string> genres;
	vector<int> plays;
	vector<int> result;

	char *ptr;

	gets_s(str);

	ptr = strtok(str, ", ");

	while (ptr != NULL)
	{
		string a = ptr;
		genres.push_back(a);
		ptr = strtok(NULL, ", ");
	}



	gets_s(str2);

	ptr = strtok(str2, ", ");

	while (ptr != NULL)
	{
		int tmp = 0;

		for (int i = 0; ptr[i] != '\0'; i++)
		{
			if (i != 0)
				tmp *= 10;
			tmp += (ptr[i] - '0');
		}

		plays.push_back(tmp);
		ptr = strtok(NULL, ", ");
	}



	result = solution(genres, plays);




	for (int i = 0; i < result.size(); i++)
	{
		printf("%d ", result[i]);
	}

	printf("\n");
	getchar();
	getchar();
	return 0;

}
```
