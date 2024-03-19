/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
struct Process {
    string name;
    int bt;
    int wt;
    int tat;
};
int main() {
    int numProcesses;
    cout<<"enter number of processes:";
    cin>>numProcesses;
    
    vector<Process>processes(numProcesses);
    
    //input bt for each process
for(int i=0;i<numProcesses;i++){
    cout<<"enter bt for process"<<(i+1)<<":";
    cin>>processes[i].bt;
    processes[i].name="p"+to_string(i+1);
    processes[i].wt=0;
    processes[i].tat=0;
}

  //calculate wt and tat
for(int i=1; i<numProcesses; i++) {
    processes[i].wt=processes[i-1].wt +processes[i-1].bt;
    processes[i].tat=processes[i].wt +processes[i].bt;
}

 //calculate avg wt and avg tat
 double avgwt=0, avgtat=0;
 for(Process& process : processes) {
     avgwt +=process.wt;
     avgtat+=process.tat;
 }
 avgwt/=numProcesses;
 avgtat/=numProcesses;
cout<<avgwt<<"avgwt " <<endl;
cout<<avgtat<<"avgtat "<<endl;
}