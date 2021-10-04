#pragma once
struct LinkedList {
    char* data;
    struct LinkedList* next;
    //int length_data;
};

typedef struct LinkedList node;
//char* realloc_1(char* ptr_str, int size);
//char* ReadLine();
//int len_1(const char* str); // find length of string without NULL characters

//node CreateNode(char* string_value);

//node AddTail(node head, char* string_value);


//void Traverser(node head);
char* string_smooth(char* str);

char* Collect_String(node* head);
