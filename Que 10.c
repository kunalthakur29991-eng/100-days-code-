// Que 10 : Write a program to input time in seconds and convert it to hours : minutes : seconds format .
  #include <stdio.h>

int main()
 {
     printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
     
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
