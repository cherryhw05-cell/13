// 13주차 프로그래밍 실습

// 실습01
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc = NULL;
    int i = 0;

    pc = (char*)malloc(100*sizeof(char));
    if (pc == NULL) {
        printf("메모리 할당 오류\n");
        return -1;
    }

    for (i=0; i<26; i++) {
        pc[i] = 'a'+i;
    }

    pc[i] = '\0'; // NULL 문자 들어감
    printf("%s\n", pc);
    free(pc); // malloc & free 세트

    return 0;
}