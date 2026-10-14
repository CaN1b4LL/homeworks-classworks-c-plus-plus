#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Film
{
    int id = 0;
    char* name = nullptr;
    char* stage_director = nullptr;
    char* genre = nullptr;
    double rating = 0.0;
    double price = 0.0;
};

void input_film(Film& obj)
{
    char buf[500]{};
    cout << "Enter the film name -> ";
    cin.getline(buf, 500);
    delete[] obj.name;
    obj.name = new char[strlen(buf) + 1];
    strcpy(obj.name, buf);

    cout << "Enter the stage director name -> ";
    cin.getline(buf, 500);
    delete[] obj.stage_director;
    obj.stage_director = new char[strlen(buf) + 1];
    strcpy(obj.stage_director, buf);

    cout << "Enter the genre name -> ";
    cin.getline(buf, 500);
    delete[] obj.genre;
    obj.genre = new char[strlen(buf) + 1];
    strcpy(obj.genre, buf);

    cout << "Enter the film name -> ";
    cin >> obj.rating;

    cout << "Enter the film name -> ";
    cin >> obj.price;
    cin.ignore();
}

void print_film(Film& obj)
{
    cout << "ID: " << obj.id << endl;
    cout << "Name: " << obj.name << endl;
    cout << "Stage Director: " << obj.stage_director << endl;
    cout << "Genre: " << obj.genre << endl;
    cout << "Rating: " << obj.rating << endl;
    cout << "Price: " << obj.price << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void add_film(Film*& arr, int& size, int& id)
{
    if (size == 0)
        arr = new Film[size + 1];
    else
    {
        Film* tmp = new Film[size + 1];
        for (int i = 0; i < size; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }

    arr[size].id = id++;
    input_film(arr[size]);
    size++;
}

void remove_last_film(Film*& arr, int& size)
{
    if (size <= 0)
    {
        cout << "Array is empty." << endl;
        return;
    }

    delete[] arr[size - 1].name;
    delete[] arr[size - 1].stage_director;
    delete[] arr[size - 1].genre;

    if (size == 1)
    {
        delete[] arr;
        arr = nullptr;
    }
    else
    {
        Film* tmp = new Film[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            tmp[i] = arr[i];
        }

        delete[] arr;
        arr = tmp;
    }

    size--;
    cout << "The last movie was successfully deleted!" << endl;
}

void remove_film_by_id(Film*& arr, int& size, int target_id)
{
    if (size <= 0)
    {
        cout << "Array is empty." << endl;
        return;
    }

    int pos = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].id == target_id)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "No movie with this ID found!" << endl;
        return;
    }

    delete[] arr[pos].name;
    delete[] arr[pos].stage_director;
    delete[] arr[pos].genre;

    Film* tmp = nullptr;

    if (size > 1)
    {
        tmp = new Film[size - 1];
        int j = 0;
        for (int i = 0; i < size; i++)
        {
            if (i == pos)
                continue;
            tmp[j] = arr[i];
            j++;
        }
        delete[] arr;
    }
    else
    {
        delete[] arr;
        tmp = nullptr;
    }

    arr = tmp;
    size--;
    cout << "Movie with ID " << target_id << " successfully deleted!" << endl;
}

void print_videostore(Film*& arr, int size)
{
    if (size == 0)
    {
        cout << "The video store is empty." << endl;
        return;
    }

    cout << "\n--- List of movies in the store ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Film #" << i + 1 << endl;
        print_film(arr[i]);
    }
}





int main()
{
    Film* videostore = nullptr;
    int size = 0;
    int next_id = 1;

    int choice = 0;
    do
    {
        cout << "\n=== VIDEO STORE MENU ===" << endl;
        cout << "1. Add new movie" << endl;
        cout << "2. List all movies" << endl;
        cout << "3. Delete the last movie" << endl;
        cout << "4. Delete movie by ID" << endl;
        cout << "5. Entrance" << endl;
        cout << "Choose an action -> ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            add_film(videostore, size, next_id);
            break;
        }
        case 2:
        {
            print_videostore(videostore, size);
            break;
        }
        case 3:
        {
            remove_last_film(videostore, size);
            break;
        }
        case 4:
        {
            int target_id;
            cout << "Enter the movie ID to delete -> ";
            cin >> target_id;
            cin.ignore();
            remove_film_by_id(videostore, size, target_id);
            break;
        }
        case 5:
        {
            cout << "Exit the program..." << endl;
            break;
        }
        default:
        {
            cout << "Wrong choice! Try again." << endl;
        }
        }
    } while (choice != 5);

    for (int i = 0; i < size; i++)
    {
        delete[] videostore[i].name;
        delete[] videostore[i].stage_director;
        delete[] videostore[i].genre;
    }
    delete[] videostore;
}