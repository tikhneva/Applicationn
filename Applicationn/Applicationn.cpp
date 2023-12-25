#include <iostream>
#include <windows.h> 
using namespace std;

class Application
{
private:
    static Application* instance;
    string title;

    Application()
    {
        cout << "Title: " << title << "Super Bowl\n";
    }

public:
    static Application* GetInstance()
    {
        if (!instance)
            instance = new Application();
        return instance;
    }

    void setTitle(string newTitle)
    {
        title = newTitle;
    }

    string GetTitle()
    {
        return title;
    }

    void StartRandomize() {
        srand(time(0));
        cout << "Randomizzze: " << rand();
    }

    void Exit()
    {
        exit(0);
    }

    void ClearScreen()
    {
        Sleep(2000);
        system("cls");
    }

    void SetTextColor()
    {
        cout << system("color  5E");
    }
};

Application* Application::instance = 0;

int main()
{
    Application* app = Application::GetInstance();

    app->GetTitle();
    app->StartRandomize();  
    app->SetTextColor();
    app->ClearScreen();
    app->Exit();

    return 0;
}