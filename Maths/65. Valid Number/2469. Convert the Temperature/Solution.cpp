#include<iostream>
#include<vector>    
    using namespace std;
vector<double> convertTemp(double celcius){
    double kelvin = celcius + 273.15;
    double fahrenheit = (celcius * 1.8) + 32.0;
    
    return {kelvin, fahrenheit};
}
int main(){
    double celcius = 36.6;
    vector<double> ans = convertTemp(celcius);
    cout<<"Tempreature in Kelvin : "<<ans[0]<<"\nTempreature in Fahrenheit : "<<ans[1]<<endl;
    return 0;
}