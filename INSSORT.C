

void main()
{   int arr[5];
    int i, x, k;
    clrscr();
    for (i =0 ; i < 5; i++){
	printf("Enter data:-");
	scanf("%d",&x);
	k = i - 1;
	/*Move elements of arr[0..i-1], that are
	  greater than key, to one position ahead
	  of their current position */

	while (k >= 0 && arr[k] > x) {
	    arr[k + 1] = arr[k];
	    k = k - 1;
	}

	arr[k + 1] = x;
    }
    printf("Sorted Data\n");
    for(i=0;i<5;i++)
	printf("%d\n",arr[i]);
    getch();
}
