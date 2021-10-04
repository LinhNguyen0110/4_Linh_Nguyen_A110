#define _CRT_SECURE_NO_WARNINGS
#include "Combine_String.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
char* string_smooth(char* str) {
    if (str == NULL) return NULL;
    int j = 1;
    char* string_value = (char*) calloc(j,sizeof(char));
    //int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '\n') {
            string_value[j - 1] = str[i];
            j++;
            string_value = (char*)realloc(string_value, j);
            if (string_value == NULL) return NULL;
        }
    }
    string_value[j - 1] = 0;
    if (j - 1 == 0) return NULL;
    //printf("%s\n", string_value);
    return string_value;

}
char* Collect_String(node* head) {
    if (head == NULL) {
        printf("Input is NULL pointer\n");
        return NULL;
    }
    char* string_result = 0;
    int sum_length = 0;
    for (node* p = head; p != NULL; p = p->next) {
        p->data = string_smooth(p->data);

    }

    for (node* p = head; p != NULL; p = p->next){ 
        if (p->data != NULL) {
            sum_length = sum_length + strlen(p->data);
        }
    }
    if (sum_length == 0) {
        printf("Linked List is empty! \n");
        return NULL;
    }
    else {
        string_result = (char*) calloc(sum_length,sizeof(char));
        if (string_result == NULL) {
            printf("Failed to reallocate memory\n");
            return NULL;
        }
        for (node* p = head; p != NULL; p = p->next) {
            if (p->data != NULL) {
                strcat(string_result, p->data);
            }
        }

    }
    return string_result;
}