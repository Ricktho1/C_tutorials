for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            int is_prime = 1;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                int found = 0;
                for (int j = 0; j < size; j++) {
                    if (lst[j] == i) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    return 0;
                }
            }
        }
    }
    return 1;