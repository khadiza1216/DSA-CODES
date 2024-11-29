 #include <stdio.h>

typedef struct {
    char name[50];
    int grade;
} Student;

void swap(Student arr[], int i, int j) {
    Student temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(Student arr[], int low, int high) {
    int pivot = arr[high].grade;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].grade < pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high);
    return i + 1;
}


void quickSort(Student arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);       // Sort left of pivot
        quickSort(arr, pi + 1, high);      // Sort right of pivot
    }
}
void print(Student arr[], int size){
 for (int i =0; i< size;i++){
    printf("name : %s grade : %d \n", arr[i].name,arr[i].grade);

 }
 }

 int main(){
 Student students[] ={ {"bony",4},{"shofi",5},{"ani",2}};
 int n= sizeof(students)/sizeof(students[0]);

 quickSort(students, 0,n-1);
 print(students,n);
 return 0;
 }




