#include<iostream>

float temp_converter(float);
int main(){
	
	using namespace std;
	float T_fahrenheit;
	float T_Celsius;
	
	cout<<"enter number\n";
	cin>>T_fahrenheit;
	T_Celsius=temp_converter(T_fahrenheit);
	cout<<T_Celsius<<endl;
}

float temp_converter(float tmepratur){
float cilsuis;
cilsuis=(tmepratur -32)*5)/9;
return cilsuis;

}