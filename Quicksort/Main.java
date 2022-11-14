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
        int pivot = (start + end) / 2;

        if (start >= end)
            return;
        System.out.println("pass");
        while (left <= right) { //left와 right가 뒤바뀌면 멈춤 //pivot에서 뒤바뀔 수 밖에 없음
            while (left != pivot && arr[left] < arr[pivot]) //조건에 안 맞을 때까지 left 이동하기
                left++;
            while (right != pivot && arr[right] > arr[pivot]) //조건에 안 맞을 때까지 right 이동하기
                right--;
            System.out.println("left: " + left + " " + "right : " + right);
            compare_RL(arr, left, right);
            System.out.println("swap : " + arr[left] + " " + arr[right]);
            left ++; right --;
        }

        quick_sort(arr, start, right);
        quick_sort(arr, left, end);
    }

    public static void compare_RL(int[] arr, int left, int right) {
        int tmp;

        if (arr[left] > arr[right]) {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
    }
}