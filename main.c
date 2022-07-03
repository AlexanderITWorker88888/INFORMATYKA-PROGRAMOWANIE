void los(int ilosc, int zakres);

int main()
{
	int w = 0;

	while(w != 4)
	{
		printf("1 - Duzy lotek\n2 - Maly lotek\n3 - multi lotek\n4 - wyjscie\n");
		scanf("%d", &w);

		switch(w)
		{
			case 1:
				los(6, 49);
				break;

			case 2:
				los(5, 75);
				break;

			case 3:
				los(10, 80);
				break;

			default:
				break;
		}
	}

	return 0;
}

void los(int ilosc, int zakres)
{
	int *liczby = new int[ilosc];

	srand(time(0));

	for(int i = 0; i < ilosc; i++)
	{
		liczby[i] = (rand() % zakres) + 1;

		for(int j = 0; j < i; j++)
		{
			if(liczby[i] == liczby[j])
			{
				--i;
				break;
			}
		}
	}

	for(int i = 0; i < ilosc; i++)
		printf("%d ", liczby[i]);

	printf("\n");

	delete [] liczby;
}

