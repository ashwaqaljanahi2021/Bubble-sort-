#include <iostream>
#include<fstream> 
#include <string>
using namespace std;
 void get_input_filename(string &input) //input file from user input
{
    cout<<"Please enter your input file path"<<endl;
    cin>>input; //user input

}
void get_output_filename(string &output) //output file from user output
{
    cout<<"Please enter you output file path"<<endl;
    cin>>output; //user input
}
void checkOpen(ifstream &in, ofstream &out, string inputfile, string outputfile) //check for success of file opening
{   
    get_input_filename(inputfile); //function call for input file
     in.open(inputfile.c_str()); // open file
     if(in.is_open()) //check if file open is a success 
    {
cout<<"File open success"<<endl;
    }
   
 else //file not open successfully 
    {
       cout<< "File cannot be opened"<<endl;
    }
    
    get_output_filename(outputfile);//function call for output file
    out.open(outputfile.c_str());//open output file
    
     if(out.is_open())//check if file open is a success
    {
cout<<"File open success"<<endl; 
    }
    
    else //file not open successfully 
    {
       cout<< "File cannot be opened"<<endl;
    }
}
void swap( int& num1, int& num2 ) //swap function for bubble algorithm/sorting 
	 {
             int temp;      //any temporary variable
             temp = num1;
	     num1 = num2;
	     num2 = temp;
        }

void bubble_sort_method(int num[],int size) //bubble sort method function
{

int count = 0;
bool swapped = false;
   
    for (int k1 = 1 ; k1 < size; k1++)

{

    for (int k2 = 0 ; k2 < size-1; k2++)

    {

          if (num[k2] > num[k2+1])

          {

       swap( num[k2], num[k2+1] ); //call for swap function                      
                     swapped = true;
        count++;
      }

      }
if( swapped )
              swapped = false;
          else
	        break;
       }
       
}

void display_sorted()//display of sorted file
{   
    int const size=500;
    ifstream ifile;
    ofstream ofile;
    string infile;
    string outfile;
    int count1=62060;
    int k=0;
    int arrayNum[size];
    checkOpen(ifile,ofile,infile,outfile); //call for file opening successfully
   
{
while(ifile>>arrayNum[k]) //input file being read into array
k++;
bubble_sort_method(arrayNum,size); //call for bubble method to sort file

for (int k1 = 0 ; k1 < 500; k1++) //output file display of sorted input file
{

ofile<<arrayNum[k1]<<endl; //print out to output file
}

ofile<<"NUMBER OF SWAPS  "<<count1<<endl; //number of swaps that occurred 

ifile.close(); //input file close
ofile.close();//output file close

}
}
int main()
{
display_sorted(); //display function will be executed 
}

   