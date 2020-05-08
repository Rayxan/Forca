int menu(){
    system("clear");
    int op;
    printf("\tMENU\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("Digite uma das opcoes: ");

    scanf("%d", &op);

    system("clear");

    return (op == 1) ? 1 : 2;
}
