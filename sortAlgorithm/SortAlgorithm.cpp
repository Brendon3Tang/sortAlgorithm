#include <iostream>
using namespace std;

/*冒泡排序：不断比较相邻的两个元素，如果左<右则把左元素往右移。第一轮比较完毕后数组中最大的元素会被保存在数组的最末尾；第二轮比较后数组中第二
大的元素会被保存在数组的倒数第二的位置...以此类推。因此每一轮需要比较的次数也不断减少，第一轮n-0-1,第二轮n-1-1,第三轮n-2-1...*/
void bubbleSort(int arr[], int n)
{
	int tmp;
	//总共进行n-1次循环，比较n-1个数字。每次循环后都能找到最大值并存放在未排序的数组的尾部
	for (int i = 0; i < n - 1; i++)
	{
		//每次循环都会比较未排序的数组中的相邻的两个值，并把大的值向右移
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

//选择排序：在未排序的元素中搜寻最小值，然后将该元素放在已排序的元素中的末尾。
void selectionSort(int arr[], int n)
{
	int minIndex = 0;
	int tmp;
	//总共进行n-1次比较。每一次搜索中以当前位置为起点（即在未排序的数组中）往后寻找最小值，找到最小值之后将其放在已排列的数组中的最后，然后进入下一次搜索
	for (int i = 0; i < n - 1; i++)
	{
		//每次搜索需要初始化minIndex的位置，使最小值不考虑已排序的元素
		minIndex = i;
		//在每一次搜索中找到最小值所在的index,并更新minIndex
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}
		//找到最小值，将其放在数组中已排序的数组的末尾（即每一次搜索的起点）
		tmp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = tmp;
	}
}

/*插入排序：从第二个元素开始，比较将当前元素与前序元素，如果前序元素比当前元素大，则将当前元素的位置不断前移，直到找到比当前元素小的前序元素，则将当前元素放在该前序元素之后。
此时当前元素排序完成。*/
void insertSort(int arr[], int n)
{
	int tmp;
	//先忽略第一个值，从第二个值开始比较
	for (int i = 1; i < n; i++)
	{
		//为了保持循环，不能直接改变i的值，因此设置一个j=i
		int j = i;
		//当比较当前值时，如果当前值小于前序值，那么将当前值前移，直到找到比当前值小的前序值为止
		while (j != 0 && arr[j] < arr[j - 1])
		{
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		}
	}
}

void quickSort(int arr[], int n)
{

}

int main()
{
	int arr[10] = { 1,10,9,8,2,3,5,4,7,6 };
	int n = 10;
	//============================================================BUBBLE SORT===============================================================
	/*cout << "Bubble Sort:" << endl;
	cout << "Before sorting: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	bubbleSort(arr, n);

	cout << "After sorting: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/
	//========================================================================================================================================
	

	//============================================================SELECTION SORT===============================================================
	cout << "Selection Sort:" << endl;
	cout << "Before sorting: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	selectionSort(arr, n);

	cout << "After sorting: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//========================================================================================================================================


	//============================================================INSERT SORT===============================================================
	/*cout << "Insert Sort:" << endl;
	cout << "Before sorting: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	insertSort(arr, n);

	cout << "After sorting: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/
}