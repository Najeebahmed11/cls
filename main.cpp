#include<iostream>
#include <string>
using namespace std;
class Gradebook
{
    public:
      void setcousename(string name)
      {
       coursename=name;
      }
      string getcoursename()
      {
          return coursename;
      }
      void displaymessage()
      {
          cout<<"welcome to course"<<getcoursename()<<endl;
      }
      private:
         string coursename;
};
int main()
{
    string nameofcourse;
    Gradebook mygradebook;
    cout<<"initial course name is"<<mygradebook.getcoursename()<<endl;
    cout<<"please enter course name"<<endl;
    getline(cin,nameofcourse);
    mygradebook.setcousename(nameofcourse);
    cout<<endl;
    mygradebook.displaymessage();
}

