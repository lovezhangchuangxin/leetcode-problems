#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing TextEditor")
{
    TextEditor *obj = new TextEditor();
    obj->addText("leetcode");
    CHECK(obj->deleteText(4) == 4);
    obj->addText("practice");
    CHECK(obj->cursorRight(3) == "etpractice");
    CHECK(obj->cursorLeft(8) == "leet");
    CHECK(obj->deleteText(10) == 4);
    CHECK(obj->cursorLeft(2) == "");
    CHECK(obj->cursorRight(6) == "practi");
}