#include <string>
using namespace std;

class EditorState {
private:
  string content;

public:
  EditorState(const string &content) { this->content = content; }

  string getContent() { return this->content; }
  ~EditorState() {}
};
