package Quicksort;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        quick_sort(arr, 0, n - 1);
        
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
        sc.close();
    }

    public static void quick_sort(int[] arr, int start, int end) {
        int left = start;
        int right = end;
        int pivot = arr[(start + end) / 2];

        if (start >= end)
            return;

        while (left <= right) { //left와 right가 뒤바뀌면 멈춤 //pivot에서 뒤바뀔 수 밖에 없음
            while (arr[left] < pivot) //조건에 안 맞을 때까지 left 이동하기
                left++;
            while (arr[right] > pivot) //조건에 안 맞을 때까지 right 이동하기
                right--;
            if (left <= right) { //증가시키고도 엇갈리지 않는지 확인
                compare_RL(arr, left, right); //두 값 비교 안함 그냥 바꿈
                left ++; right --;
            }
        }

        quick_sort(arr, start, right);
        quick_sort(arr, left, end);
    }

    public static void compare_RL(int[] arr, int left, int right) {
        int tmp;

        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
    }
}