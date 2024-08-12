#include "./EditorState.cpp"
#include <string>

using namespace std;

class Editor {
private:
  string content;
public:
  EditorState createEditorState() { return EditorState(this->content); }

  void restore(EditorState state) { this->content = state.getContent(); }

  void setContent(const string &content) { this->content = content; }

  string getContent() { return this->content; }


};
