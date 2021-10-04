#include "pch.h"
#include "../4_LinhNguyen_A110/Combine_String.cpp"
#include "gtest/gtest.h"
TEST(Combine_String_Testing, NULL_Test) {
	node* node_0 = NULL;
	ASSERT_EQ(NULL, Collect_String(node_0));
}
TEST(Combine_String_Testing, Empty_Linked_List_Test) {
	node node_1 = { NULL, NULL };
	node node_2 = { NULL, &node_1 };
	ASSERT_EQ(NULL, Collect_String(&node_2));
}
TEST(Combine_String_Testing, Empty_Linked_List_Test_2) {
	char c[] = "\n\n\n\n";
	char* p = c;
	node node_1 = { p, NULL };
	node node_2 = { p, &node_1 };
	ASSERT_EQ(NULL, Collect_String(&node_2));
}
TEST(Combine_String_Testing, String_test) {
	char c1[] = "H\ni\n!\n";
	char c2[] = "\0";
	char c3[] = "L\n.A\n,B:11\n0";
	char* p1 = c1;
	char* p2 = c2;
	char* p3 = c3;
	node node_3 = { p3,NULL };
	node node_2 = { p2,&node_3 };
	node node_1 = { p1,&node_2 };

	ASSERT_STREQ("Hi!L.A,B:110", Collect_String(&node_1));

}
TEST(Combine_String_Testing, String_test_2) {
	char c1[] = "Play ";
	char c2[] = "Game!";
	char* p1 = c1;
	char* p2 = c2;
	node node_2 = { p2,NULL };
	node node_1 = { p1,&node_2 };
	ASSERT_STREQ("Play Game!", Collect_String(&node_1));
}