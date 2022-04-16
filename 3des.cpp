#include <iostream>
#include <thread>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int con()
{
string line;
string v, valuesX[8], valuesY[8], valuesZ[8];
int n = 0;

ifstream myfile ("model.obj");
while(!myfile.eof())
{
    getline (myfile,line);
    if (line[0] == 'v')
    {
        myfile >> v >> valuesX[n]>> valuesY[n]>> valuesZ[n];
        cout << valuesX[n] << "\t" << valuesY[n] << "\t" << valuesZ[n] << endl;
        n++;
    }
}
return 0;
}
string Xor(string a, string b){
	string result = "";
	int size = b.size();
	for(int i = 0; i < size; i++){
		if(a[i] != b[i]){
			result += "1";
		}
		else{
			result += "0";
		}
	}
	return result;
}
void generate_keys(string key){
	// The PC1 table
	int pc1[56] = {
	57,49,41,33,25,17,9,
	1,58,50,42,34,26,18,
	10,2,59,51,43,35,27,
	19,11,3,60,52,44,36,
	63,55,47,39,31,23,15,
	7,62,54,46,38,30,22,
	14,6,61,53,45,37,29,
	21,13,5,28,20,12,4
	};
	// The PC2 table
	int pc2[48] = {
	14,17,11,24,1,5,
	3,28,15,6,21,10,
	23,19,12,4,26,8,
	16,7,27,20,13,2,
	41,52,31,37,47,55,
	30,40,51,45,33,48,
	44,49,39,56,34,53,
	46,42,50,36,29,32
	};
int main()
{
    con();
	auto f = [](int x)
	{
		for (int i = 0; i < x; i++)
			encrypt()
	};
    thread th1(f, 1);
    thread th2(f, 1);
    thread th3(f, 1);

	th1.join();
	th2.join();
	th3.join();

	return 0;
}
