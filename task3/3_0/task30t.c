void replaceDigits(char arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            arr[i] = '*';
        }
    }
}
