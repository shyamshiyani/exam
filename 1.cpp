#include <iostream>
#include <string>

using namespace std;

class Movie {
	private:
    string titl,genre;
    int releasedYear;

public:
    
    Movie(string  _title, string _genre, int _releasedYear) 
	{
		this->title=_title;
		this->genre=_genre;
		this->releasedYear=_releasedYear;
	}

    string getTitle() { return title; }
    string getGenre() { return genre; }
    int getReleasedYear() { return releasedYear; }
	
};

int main() {
    int i;
    Movie movies[3] = {
        Movie("sultan", "motivational", 2018),
        Movie("bagban", "Drama", 2020),
        Movie("The Dark hole", "Action", 2008)
    };

    cout << "List of Movies:"<<endl;
    for (i = 0; i <3; ++i) {
        cout << "Movie " << i+1 << ":"<<endl;
        cout << "Title: " << movies[i].getTitle() << endl;
        cout << "Genre: " << movies[i].getGenre() << endl;
        cout << "Released Year: " << movies[i].getReleasedYear() << endl;
        cout << endl;
    }

    return 0;
}


