#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int score[n];
        for(int i=0; i<n; i++){
            cin>>score[i];
        }
        
        quickSort(score,0,n-1);

        int ans = score[n-x]-1;
        cout<<ans<<endl;
    }
}