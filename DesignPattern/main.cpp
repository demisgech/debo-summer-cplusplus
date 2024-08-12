
#include "./History.cpp"
#include "./Editor.cpp"
#include <iostream>

using namespace std;

int main() {

  Editor editor;
  History history;

  editor.setContent("a");
  history.push(editor.createEditorState());
  
  editor.setContent("b");
  history.push(editor.createEditorState());
  
  editor.setContent("c");
  history.push(editor.createEditorState());
  
  editor.setContent("d");
  editor.restore(history.pop());
  
  cout << editor.getContent() << endl;

  return 0;
}