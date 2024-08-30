#include <iostream>
#include <vector>

using namespace std;

struct Date {
  int year;
  int month;
  int day;
};

// PascalCase
struct Movie {
    // Member variables (filed or properties)
    string title;
    Date releaseDate;
    // Member function (methods)
    bool equals(const Movie& movieTwo) const {
        return (title == movieTwo.title &&
          releaseDate.year == movieTwo.releaseDate.year &&
          releaseDate.month == movieTwo.releaseDate.month &&
          releaseDate.day == movieTwo.releaseDate.day
        );
    }

    // + - * / += -= ++ -- <<
    // Operator overloading

    bool operator==(const Movie& movieTwo) const {
        return (title == movieTwo.title &&
          releaseDate.year == movieTwo.releaseDate.year &&
          releaseDate.month == movieTwo.releaseDate.month &&
          releaseDate.day == movieTwo.releaseDate.day
        );
    }

};

void listOfMovies() {
   Date releaseDate = {1999,1,2};
    //Movie movies[2] = {{ "Terminator 3",releaseDate},{"Avator ",releaseDate}};
    //cout << movies[0].title << endl;

    vector<Movie> movies = {{ "Terminator 3",releaseDate},{"Avator ",releaseDate}};//
   // cout << movies[0].title << endl;

    Movie movieTwo = {"The Lion King",{1994,1,3}};
    movies.push_back(movieTwo);

    for(Movie movie: movies)
        cout << movie.title << endl;
    for(int i = 0; i < movies.size(); i++)
        cout << movies[i].title << endl;
}
void createNestedMovieObject() {
// Object

    Movie movie;
    movie.title = "The Lion King";
    movie.releaseDate.year = 1994;
    movie.releaseDate.month = 1;
    movie.releaseDate.day = 10;

  // cout << "Year: " << movie.releaseDate.year << endl;
    Date releaseDate = {1900,1,19};
    Movie movieOne = {"The last ship",releaseDate};
    cout << "Month: " << movieOne.releaseDate.month << endl;

    Movie movieTwo = {"The Maze runner",{2014,2,4}};
    cout << "Day: "<< movieTwo.releaseDate.day << endl;
}
void createMovieObject() {
    Movie movieOne = {"The Lion King",1994};

   movieOne.title = "Avator";
   movieOne.releaseDate = {2010,1,7};

   cout << "Title: " << movieOne.title << endl
        << "Release Year: " << movieOne.releaseDate.year << endl;


    Movie movieTwo;
    movieTwo.title = "Terminator 1";
    movieTwo.releaseDate = {};

    cout << "Title: " << movieTwo.title << endl
         << "Release Year: " << movieTwo.releaseDate.year << endl;


    Movie movieThree;
    movieThree.title = "Extraction";
    movieThree.releaseDate = {1900,1,1};

    cout << "Title: " << movieThree.title << endl
         << "Release Year: " << movieThree.releaseDate.year << endl;
}
int main() {
    Movie movieOne = {"The Lion King",{1994,1,3}};
    Movie movieTwo = {"The Lion King",{1994,1,3}};

   // movieOne.operator==(movieTwo);
    if(movieOne.equals(movieTwo))
        cout << "Equal";
    else cout << "Not equal";

    if(movieOne == movieTwo)
        cout << "Equal";
    else cout << "Not equal";

    return 0;
}
