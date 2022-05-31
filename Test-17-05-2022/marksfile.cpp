using namespace std;
#include <iostream>
#include <fstream>
#include <iomanip>


class Student{
    string name;
    float total;
    float tamil;
    float english;
    float maths;
    
    public:
        int rollno;
        float average;
        string cls;
        void calculate(){
            cout<<"Enter the student name: "<<endl;
            cin>>name;
            cout<<"Enter your class: "<<endl;
            cin>>cls;
            cout<<"Enter the tamil mark: "<<endl;
            cin>>tamil;
            cout<<"Enter the english mark: "<<endl;
            cin>>english;
            cout<<"Enter the maths mark: "<<endl;
            cin>>maths;
            
            total = tamil+english+maths;
            average = total/3.0;
        }
        
        void display(){
            if(average>80){
                cout<<"Name:"<<name<<setw(25)<<"Class: "<<cls<<setw(25)<<"Roll No:"<<rollno<<setw(25)<<"Average:"<<average<<endl;
            }
        }
};

int main(){
    fstream  fp,avg;
    fp.open("file.dat",ios::out|ios::binary);
    //avg.open("average.dat",ios::out|ios::binary);
    int n;
    cout<<"Enter the number of student: ";
    cin>>n;
    Student student[n];
    int roll=123;
    for(int i=0;i<n;i++){
        student[i].rollno=roll;
        roll++;
        student[i].calculate();
        
        // if(student[i].average>80){
        //     avg.write((char*)&student[i],sizeof(student)*n);
        // }
        
        fp.write((char*)&student[i],sizeof(student)*n);
        //fp.write((char*)&student[i],sizeof(student));
    }
    
    fp.close();  
    //avg.close();
    
    fstream fp1; 
    fp1.open("file.dat",ios::in|ios::binary);
    char ch;
    cout<<"Reading data from a file.................... \n";
    for(int i=0;i<n;i++){
        fp1.read((char *)&student[i],sizeof(student));
        if(student[i].average>80){
            student[i].display();
        }
        
    }
    
    cout<<"\nClosing a file after reading............"<<endl;
    
    // cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    // cout<<"All student details:\n";
    // for(int i=0;i<n;i++){
    //     student[i].display();
    //     //fp1.read((char *)&out,sizeof(student));
    // }
    // cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    
    fp1.close();
    
    return 0;
}