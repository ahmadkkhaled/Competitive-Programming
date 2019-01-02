
void myMerge(int* leftArr , int nL, int* rightArr, int nR,  int* mainArr)
{
    int i=0,j=0,k=0;
    while (i<nL && j<nR)
    {
        if(leftArr[i]<=rightArr[j])
        {
            mainArr[k++] = leftArr[i++];
        }
        else
        {
            mainArr[k++] = rightArr[j++];
        }
    }
    while(i<nL)
    {
        mainArr[k++] = leftArr[i++];
    }
    while(j<nR)
    {
        mainArr[k++] = rightArr[j++];
    }
    return;
}

void myMergeSort(int* mainArray, int arrayLength)
{
    if (arrayLength<2)
    {
        return;
    }
    int mid = arrayLength/2;
    int* leftArray = new int[mid];
    int* rightArray = new int[arrayLength-mid];
    for (int i=0; i<mid; ++i)
    {
        leftArray[i]=mainArray[i];
    }
    for(int i=mid; i<arrayLength; ++i) //i 4 5 6 7
    {
        rightArray[i-mid] = mainArray[i];
    }
    myMergeSort(leftArray,mid);
    myMergeSort(rightArray,arrayLength-mid);
    myMerge(leftArray,mid,rightArray,arrayLength-mid,mainArray);
    delete[] leftArray;
    delete[] rightArray;

}







