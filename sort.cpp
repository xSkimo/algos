#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn iinearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
void bubbleSort(auto & Data); // prototype
void selectionSort(auto & Data); // prototype
void insertionSort(auto & Data); // prototype

int main()
{
  vector<string> inputs;
  string input;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }

 bubbleSort(inputs);
   
 
//  selectionSort(inputs);
  
//  insertionSort(inputs);


  for(unsigned int i = 0; i < inputs.size(); i++){
	     cout << inputs[i] << endl;
   }	

    return 0;
}

void bubbleSort(auto & inputs){
	for(unsigned int i = 0; i < inputs.size()-1; i++){
		for(unsigned int k = 0; k < inputs.size()-1; k++){
			if(inputs[k] > inputs[k+1])
				swap(inputs[k], inputs[k+1]);
		}
	}
}

void selectionSort(auto & inputs){
	for(unsigned int i = 0; i < inputs.size(); i++){
		int min = i;
		for(unsigned int j = i + 1;j < inputs.size(); j++){
			if(inputs[j] < inputs[min])
				min = j;
		}
		swap(inputs[i], inputs[min]);
	}
}

void insertionSort(auto & inputs){
	for(unsigned int i = 0; i < inputs.size(); i++){
		unsigned int j = i + 1;
		while(j > 0 && inputs[j-1] > inputs[j]){
			swap(inputs[j], inputs[j-1]);
			j = j -1;
		}
	}
}
