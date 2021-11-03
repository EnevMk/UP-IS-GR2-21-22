int rows;
    std::cin >> rows;

    int num = 1;

    for (int i = 0; i <= rows; ++i) {

        for (int j = 0; j < i; ++j) {

            std::cout << num << ' ';
            num++;
        }
        std::cout << '\n';
    }