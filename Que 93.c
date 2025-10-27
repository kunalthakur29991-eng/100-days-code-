//Q93: Check if two strings are anagrams of each other.
 #include <stdio.h>
  int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i = 0;

    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] != '\0'; i++)
     {
        if (str1[i] >= 'a' && str1[i] <= 'z') 
        {
            count1[str1[i] - 'a']++;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) 
    {
        if (str2[i] >= 'a' && str2[i] <= 'z') 
        {
            count2[str2[i] - 'a']++;
        }
    }

    for (i = 0; i < 26; i++) 
    {
        if (count1[i] != count2[i])
         {
            printf("Not anagrams");
            return 0;
         }
    }

    printf("Anagrams");
    return 0;
}
