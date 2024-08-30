namespace Calculating {
    int evenSum(int numbers[],int size) {
        int even_sum = 0;
        for(int i  = 0; i < size; i++)
            if(numbers[i] % 2 == 0)
                even_sum += numbers[i];
        return even_sum;
    }

    int oddSum(int numbers[],int size) {
        int odd_sum = 0;
        for(int i = 0; i < size; i++)
            if(numbers[i] % 2 != 0)
                odd_sum += numbers[i];
        return odd_sum;
    }

    int sum(int numbers[],int size) {
        int add = 0;
        for(int i = 0; i < size; i++)
            add += numbers[i];
        return add;
    }
}
