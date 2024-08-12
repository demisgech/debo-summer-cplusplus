#include "./EditorState.cpp"
#include <string>
#include <vector>
using namespace std;

class History {
private:
  static vector<EditorState> &states;

public:
  void push(const EditorState &state) { states.push_back(state); }

  EditorState pop() {
    unsigned int lastIndex = states.size() - 1;
    EditorState lastState = states[lastIndex];
    states.pop_back();
    // lastState = states.back();
    return lastState;
  }
};
